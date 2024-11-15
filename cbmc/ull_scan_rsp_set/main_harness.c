#include <stdint.h>
#include <stdlib.h>

#include "zephyr/bluetooth/addr.h"
#include "zephyr/sys/slist.h"

#include "util/util.h"
#include "util/memq.h"
#include "util/mem.h"
#include "util/mayfly.h"
#include "util/dbuf.h"

#include "hal/cpu.h"
#include "hal/ccm.h"
#include "hal/radio.h"
#include "hal/ticker.h"

#include "ticker/ticker.h"

#include "pdu_df.h"
#include "openisa/lll/pdu_vendor.h"
#include "pdu.h"

#include "lll.h"
#include "lll_clock.h"
// #include "lll/lll_vendor.h"
#include "lll/lll_adv_types.h"
#include "lll_adv.h"
// #include "lll/lll_adv_pdu.h"
#include "lll_chan.h"
// #include "lll/lll_df_types.h"
#include "lll_conn.h"
#include "lll_peripheral.h"
#include "lll_filter.h"
#include "lll_conn_iso.h"

#include "ll_sw/ull_tx_queue.h"

#include "ull_adv_types.h"
#include "ull_conn_types.h"
#include "ull_filter.h"

#include "ull_internal.h"
#include "ull_adv_internal.h"
#include "ull_conn_internal.h"
#include "ull_peripheral_internal.h"

#include "ll.h"

#include "ll_sw/isoal.h"
#include "ll_sw/ull_iso_types.h"
#include "ll_sw/ull_conn_iso_types.h"
#include "ll_sw/ull_llcp.h"

uint8_t ull_adv_time_update(struct ll_adv_set *adv, struct pdu_adv *pdu,
			    struct pdu_adv *pdu_scan)
{
	uint8_t rand;
	return rand;
}

struct pdu_adv* lll_adv_scan_rsp_alloc(struct lll_adv *lll,
						     uint8_t *idx)
{
	struct pdu_adv* new_pdu = malloc(sizeof(struct pdu_adv));
	__CPROVER_assume(new_pdu != NULL);
	return new_pdu;
}

struct pdu_adv* lll_adv_scan_rsp_peek(struct lll_adv *lll)
{
	struct pdu_adv* new_pdu = malloc(sizeof(struct pdu_adv));
	__CPROVER_assume(new_pdu != NULL);
	return new_pdu;
}

struct pdu_adv *lll_adv_data_peek(struct lll_adv *lll)
{
	struct pdu_adv* new_pdu = malloc(sizeof(struct pdu_adv));
	__CPROVER_assume(new_pdu != NULL);
	return new_pdu;
}

int harness() {

	// uint8_t size;
	// __CPROVER_assume(size > sizeof(struct node_rx_pdu) + sizeof(struct pdu_adv));
	// struct node_rx_pdu *rx = malloc(size);
	// __CPROVER_assume(rx != NULL);

	//Presumably, data buffer input length
	uint8_t len;
	__CPROVER_assume(len <= 100);

	//Data buffer
	uint8_t* data = malloc(len);



	uint8_t pdu_size;
	__CPROVER_assume(pdu_size > sizeof(struct ll_adv_set) + (2 * sizeof(struct pdu_adv))); //PDU size is expected to be len + BDADDR (which is 6)
	struct ll_adv_set *adv = malloc(pdu_size);
	// __CRPOVER_assume(adv -> lll.scan_rsp.first <= 1);
	// __CRPOVER_assume(adv -> lll.scan_rsp.last <= 1);
	__CPROVER_assume(adv != NULL);

	ull_scan_rsp_set(adv, len, data);
}

int main() {

	harness();
	return 0;
}
