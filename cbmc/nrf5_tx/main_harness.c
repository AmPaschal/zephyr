#include <stdint.h>

#include "zephyr/net/ieee802154_radio.h"
#include "zephyr/net/buf.h"

#include "ieee802154/ieee802154_nrf5.h"

int harness() {

	// Model input device

	struct device dev;

	// Initialize device data
	// (Internally this gets cast to a struct nrf5_802154_data so we allocate this)

	dev.data = (struct nrf5_802154_data *)malloc(sizeof(struct nrf5_802154_data));

	struct net_pkt pkt;

	// Create and model network buffer

	struct net_buf frag;

	frag.data = malloc(50);
	frag.size = 50;

	// Unconstrained enum

	enum ieee802154_tx_mode mode;

	int res = nrf5_tx(&dev, mode, &pkt, &frag);
}

int main() {

	harness();
	return 0;
}
