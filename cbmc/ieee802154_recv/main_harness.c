#include <stdint.h>

#include "net_if.h"
#include "net_pkt.h"

int harness() {
	struct net_if iface;
	struct net_if_dev* if_dev = malloc(sizeof(struct net_if_dev));
	iface.if_dev = if_dev;

	struct net_pkt pkt;
	struct net_buf* buf = malloc(sizeof(struct net_buf));
	pkt.buffer = buf;

	ieee802154_recv(&iface, &pkt);
}

int main() {

	harness();
	return 0;
}
