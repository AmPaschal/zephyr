#include <stdint.h>

#include "zephyr/net/net_pkt.h"
#include "zephyr/net/buf.h"

int harness() {

	struct net_pkt pkt;
	struct net_buf *buf = malloc(sizeof(struct net_buf));
	pkt.buffer = buf;

	uncompress_IPHC_header(&pkt);
}

int main() {

	harness();
	return 0;
}
