#include <stdint.h>
#include <stdlib.h>

#include "subsys/bluetooth/controller/ll_sw/lll.h"
#include "subsys/bluetooth/controller/ll_sw/lll_conn.h"
#include "subsys/bluetooth/controller/ll_sw/lll_adv.h"

int harness() {
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
