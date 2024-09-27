#include <stdint.h>

#include "zephyr/net/ieee802154_radio.h"
#include "zephyr/net/buf.h"

#include "ieee802154/ieee802154_nrf5.h"

void nrf5_tx_started(const struct device *dev,
			    struct net_pkt *pkt,
			    struct net_buf *frag) {
					
				}

int net_pkt_write(struct net_pkt *pkt, const void *data, size_t length) {}

int harness() {

	// Model input device

	struct device dev;

	// Initialize device data
	// (Internally this gets cast to a struct nrf5_802154_data so we allocate this)

	struct nrf5_802154_data* ddata = (struct nrf5_802154_data *)malloc(sizeof(struct nrf5_802154_data));

	// Correctly model the ac frame:

	ddata->ack_frame.psdu = malloc(10);

	// Set driver into the data:

	dev.data = ddata;

	struct net_pkt pkt;

	// Create and model network buffer

	uint16_t fsize;

	__CPROVER_assume(fsize <= 200);

	struct net_buf frag;

	frag.data = malloc(fsize);
	frag.size = fsize;
	frag.len = fsize;

	// Unconstrained enum

	enum ieee802154_tx_mode mode;

	int res = nrf5_tx(&dev, mode, &pkt, &frag);
}

int main() {

	harness();
	return 0;
}
