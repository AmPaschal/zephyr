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

// #include "ll_sw/pdu.h"
// #include "util/memq.h"
// #include "ll_sw/lll.h"
// #include "ll_sw/lll_conn.h"
// #include "ll_sw/lll_adv.h"

int harness() {
	// When you compile, your coverage will be very low. Replacing your current definition of 
	// rx with this pointer and updating the pointer dereferencing below will fix the problem.
	// 
	// uint8_t size;
	// __CPROVER_assume(size > sizeof(struct node_rx_pdu) + sizeof(struct pdu_adv));
	// struct node_rx_pdu *rx = malloc(size);
	// __CPROVER_assume(rx != NULL);
	
	struct node_rx_pdu rx;
	struct node_rx_ftr ftr;
	struct lll_conn lll;


	struct lll_adv ftr_param;
	struct lll_hdr ftr_hdr;
	ftr_param.hdr = ftr_hdr;
	ftr.param = &(ftr_param);

	struct lll_hdr lll_struct_hdr;
	lll.hdr = lll_struct_hdr;

	struct node_rx_hdr rx_hdr;
	rx.hdr = rx_hdr;

	// uint8_t len;
	// __CPROVER_assume(len <= 100);
	// void *pdu = malloc(len);
	// __CPROVER_assume(pdu != NULL);
	// rx.pdu = pdu;

	ull_periph_setup(&rx, &ftr, &lll);
}

int main() {

	harness();
	return 0;
}
