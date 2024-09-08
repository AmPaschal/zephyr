#include <stdint.h>

#include "zephyr/sys/slist.h"

#include "ll_sw/pdu_df.h"
#include "util/memq.h"
#include "ll_sw/nordic/lll/pdu_vendor.h"
#include "ll_sw/pdu.h"
#include "ll_sw/ull_llcp_internal.h"

int harness() {

	// Model ctx struct:

	struct proc_ctx ctxs;

	// Model pdu data struct:

	struct pdu_data pdata;

	llcp_pdu_decode_conn_update_ind(&ctxs, &pdata);
}

int main() {

	harness();
	return 0;
}
