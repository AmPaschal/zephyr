#include <stdint.h>

#include "zephyr/net/ieee802154_radio.h"
#include "zephyr/net/buf.h"

#include "ieee802154/ieee802154_nrf5.h"

int harness() {

	// Model input arguments

	struct device dev;

	// Initialize dev data:

	dev.data = (struct nrf5_802154_data *)malloc(sizeof(struct nrf5_802154_data));

	struct net_pkt pkt;

	struct net_buf *frag = NET_BUF_SIMPLE(200);

	net_buf_simple_init(frag, 50);

	enum ieee802154_tx_mode mode;

	// Model network buffer:

	struct net_buf *buf = NET_BUF_SIMPLE(200);

	net_buf_simple_init(buf, 50);

	pkt.buffer = buf;

	int res = nrf5_tx(&dev, mode, &pkt, frag);
}

int main() {

	harness();
	return 0;
}
