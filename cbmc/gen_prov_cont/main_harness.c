#include <stdint.h>

#include "pb_adv.c"

int harness() {

	struct prov_rx rx;
	struct net_buf_simple buf;
	uint16_t len;
	__CPROVER_assume(len <= 100);
	buf.data = malloc(len);

	gen_prov_cont(&rx, &buf);
}

int main() {

	harness();
	return 0;
}
