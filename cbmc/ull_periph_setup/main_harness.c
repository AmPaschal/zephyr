#include <stdint.h>
#include <stdlib.h>

#include "util/memq.h"

typedef struct _memq_link memq_link_t;

#include "controller/ll_sw/ull_peripheral_internal.h"
#include "lll.h"
#include "lll_conn.h"

int harness() {

	// Allocate structs:

	struct node_rx_pdu rx;
	struct node_rx_ftr ftr;
	struct lll_conn lll;

	ull_periph_setup(&rx, &ftr, &lll);
}

int main() {

	harness();
	return 0;
}
