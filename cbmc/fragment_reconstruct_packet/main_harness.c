#include "zephyr/net/net_pkt.h"
#include <stdint.h>
#include <stdlib.h>
#include "zephyr/net/buf.h"
#include "6lo_private.h"

// #include header files

void fragment_reconstruct_packet(struct net_pkt *pkt);

// void fragment_remove_headers(struct net_pkt *pkt) {
	
// }

struct net_buf *net_buf_alloc_stub(bool filled);

int harness() {

	// Model inputs
	struct net_pkt *pkt = (struct net_pkt *) malloc(sizeof(struct net_pkt));
	__CPROVER_assume(pkt != NULL);

	pkt->buffer = net_buf_alloc_stub(true);

	struct net_buf *frag1 = net_buf_alloc_stub(true);
	struct net_buf *frag2 = net_buf_alloc_stub(true);
	frag1->frags = frag2;

	pkt->buffer->frags = frag1;

	// Call target function
	fragment_reconstruct_packet(pkt);
}

int main() {

	harness();
	return 0;
}
