#include <stdint.h>
#include <stdlib.h>

#include "util/memq.h"

// typedef struct _memq_link memq_link_t;

#include "zephyr/sys/slist.h"
#include "controller/ll_sw/pdu_df.h"
#include "controller/ll_sw/nordic/lll/pdu_vendor.h"
#include "controller/ll_sw/pdu.h"
#include "lll.h"
#include "lll_conn.h"
#include "controller/ll_sw/ull_tx_queue.h"
#include "controller/ll_sw/ull_conn_types.h"
#include "controller/hal/ccm.h"
#include "controller/ll_sw/nordic/lll/lll_adv_types.h"

#include "controller/ll_sw/ull_peripheral_internal.h"
#include "lll_adv.h"

#include "controller/ll_sw/ull_adv_types.h"

int harness() {

	// Create structs:

	struct node_rx_ftr ftr;
	struct lll_conn lll;

	// Allocate param data in FTR

	ftr.param = malloc(sizeof(struct lll_adv));

	// Allocate the adv_set in the parent:

	((struct lll_adv*)ftr.param)->hdr.parent = malloc(sizeof(struct ll_adv_set));

	// Allocate RX struct with extra size for variable array:

	struct node_rx_pdu *rx = (struct node_rx_pdu*)malloc(sizeof(struct node_rx_pdu) + sizeof(struct pdu_adv));

	// Properly model parent pointer in header:

	lll.hdr.parent = malloc(sizeof(struct ll_conn));

	// Properly model node in ftr extra, with space for CS node at the end:

	ftr.extra = malloc(sizeof(struct node_rx_pdu) + sizeof(struct node_rx_cs));

	// Invoke target function

	ull_periph_setup(rx, &ftr, &lll);
}

int main() {

	harness();
	return 0;
}
