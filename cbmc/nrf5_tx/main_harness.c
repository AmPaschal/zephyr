#include <stdint.h>
#include <stdlib.h>

#include "zephyr/net/ieee802154_radio.h"
#include "zephyr/net/buf.h"

#include "ieee802154/ieee802154_nrf5.h"

void nrf5_tx_started(const struct device *dev,
			    struct net_pkt *pkt,
			    struct net_buf *frag) {
					
				}

// Added this stub to resolve errors in the net_pkt.h file
struct net_pkt *net_pkt_rx_alloc_with_buffer_debug(struct net_if *iface,
						   size_t size,
						   sa_family_t family,
						   enum net_ip_protocol proto,
						   k_timeout_t timeout,
						   const char *caller,
						   int line) {

							struct net_pkt *pkt = malloc(sizeof(struct net_pkt));
							// __CPROVER_assume(pkt != NULL); // Commented this out to improve coverage of the present null validation
							return pkt;
}

int harness() {

	// Model input device

	struct device dev;

	// Initialize device data
	// (Internally this gets cast to a struct nrf5_802154_data so we allocate this)

	struct nrf5_802154_data* ddata = (struct nrf5_802154_data *)malloc(sizeof(struct nrf5_802154_data));

	// Added this to remove a violation
	__CPROVER_assume(ddata != NULL);

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
	__CPROVER_assume(frag.data != NULL);
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
