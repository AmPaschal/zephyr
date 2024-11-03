#include "zephyr/net/net_pkt.h"
#include <stdint.h>
#include <stdlib.h>
#include "zephyr/net/buf.h"
#include "6lo_private.h"

// #include header files

enum net_verdict fragment_add_to_cache(struct net_pkt *pkt);

// void fragment_reconstruct_packet(struct net_pkt *pkt) {
	
// }

struct net_buf *net_buf_alloc_stub();

int harness() {

	// Model inputs
	struct net_pkt *pkt = (struct net_pkt *) malloc(sizeof(struct net_pkt));
	__CPROVER_assume(pkt != NULL);

	pkt->buffer = net_buf_alloc_stub();

	uint16_t len;
	__CPROVER_assume(len > NET_6LO_FRAGN_HDR_LEN && len <= pkt->buffer->size);
	pkt->buffer->len = len;

	// Call target function
	fragment_add_to_cache(pkt);
}

int main() {

	harness();
	return 0;
}
