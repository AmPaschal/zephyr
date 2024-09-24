#include <stdint.h>

#include "zephyr/net/ieee802154_radio.h"

#include "ieee802154/ieee802154_nrf5.h"

int harness() {

	// Model input arguments

	struct device dev;

	struct net_pkt pkt;

	struct net_buf frag;

	enum ieee802154_tx_mode mode;

	int res = nrf5_tx(&dev, mode, &pkt, &frag);
}

int main() {

	harness();
	return 0;
}
