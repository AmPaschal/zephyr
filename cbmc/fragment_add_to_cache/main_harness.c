#include "zephyr/net/net_pkt.h"
#include <stdint.h>
#include <stdlib.h>
#include "zephyr/net/buf.h"
#include "6lo_private.h"

// #include header files

#define REASS_CACHE_SIZE	CONFIG_NET_L2_IEEE802154_FRAGMENT_REASS_CACHE_SIZE

struct frag_cache {
	struct k_work_delayable timer; /* Reassemble timer */
	struct net_pkt *pkt;	       /* Reassemble packet */
	uint16_t size;		       /* Datagram size */
	uint16_t tag;		       /* Datagram tag */
	bool used;
};

extern struct frag_cache cache[REASS_CACHE_SIZE];

enum net_verdict fragment_add_to_cache(struct net_pkt *pkt);

// void fragment_reconstruct_packet(struct net_pkt *pkt) {
	
// }

void *net_pkt_get_data(struct net_pkt *pkt, struct net_pkt_data_access *access) { 
	// The size of data to be returned in contained in the size field of access
	uint8_t *data = malloc(access->size);
	return data;
}

struct net_buf *net_buf_alloc_stub(bool filled);

int harness() {

	// Model inputs
	struct net_pkt *pkt = (struct net_pkt *) malloc(sizeof(struct net_pkt));
	__CPROVER_assume(pkt != NULL);

	pkt->buffer = net_buf_alloc_stub(true);

	uint16_t len;
	__CPROVER_assume(len > NET_6LO_FRAGN_HDR_LEN && len <= pkt->buffer->size);
	pkt->buffer->len = len;

	// Model a cache entry
	struct net_pkt *cache_pkt = (struct net_pkt *) malloc(sizeof(struct net_pkt));
	__CPROVER_assume(cache_pkt != NULL);

	// cache_pkt->buffer = net_buf_alloc_stub();
	struct net_buf *frag1 = net_buf_alloc_stub(true);
	struct net_buf *frag2 = net_buf_alloc_stub(true);
	frag1->frags = frag2;
	// struct net_buf *frag3 = net_buf_alloc_stub(true);
	// frag2->frags = frag3;

	cache_pkt->buffer = frag1;


	uint16_t cache_buf_len;
	__CPROVER_assume(cache_buf_len > NET_6LO_FRAGN_HDR_LEN && cache_buf_len <= cache_pkt->buffer->size);
	cache_pkt->buffer->len = cache_buf_len;

	cache[0].pkt = cache_pkt;
	
	// Call target function
	fragment_add_to_cache(pkt);
}

int main() {

	harness();
	return 0;
}
