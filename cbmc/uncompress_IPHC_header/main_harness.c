#include <stdint.h>

#include "zephyr/net/net_pkt.h"
#include "zephyr/net/buf.h"

// static inline uint8_t *uncompress_tfl(uint16_t iphc, uint8_t *cursor,
// 				  struct net_ipv6_hdr *ipv6) {
// 					return;
// 				  }

static void uncompress_cid(struct net_pkt *pkt, uint8_t cid,
				  struct net_6lo_context **src,
				  struct net_6lo_context **dst) {
					__CPROVER_havoc(*src);
					__CPROVER_havoc(*dst);
					return;
				  }

size_t net_pkt_get_len(struct net_pkt *pkt)
{
	size_t pkt_size;
	return pkt_size;
}

int harness() {

	struct net_pkt pkt;
	struct net_buf buf;
	uint16_t buf_len;
	__CPROVER_assume(buf_len <= 20 && buf_len > 0);
	buf.len = buf_len;
	buf.data = (uint8_t*) malloc(buf_len);
	__CPROVER_assume(buf.data != NULL);
	pkt.buffer = &buf;

	uncompress_IPHC_header(&pkt);
}

int main() {

	harness();
	return 0;
}
