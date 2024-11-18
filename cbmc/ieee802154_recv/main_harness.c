#include <stdint.h>

#include "zephyr/net/net_if.h"
#include "zephyr/net/net_pkt.h"
#include "zephyr/net/ieee802154_radio.h"
#include "l2/ieee802154/ieee802154_frame.h"


size_t net_pkt_get_len(struct net_pkt *pkt) {
	size_t rand;
	return rand;
}

enum ieee802154_hw_caps get_capabilities(const struct device *dev) {
	enum ieee802154_hw_caps rand;
	return rand;
}

int harness() {
	struct net_if iface;
	struct net_if_dev* if_dev = malloc(sizeof(struct net_if_dev));
	__CPROVER_assume(if_dev != NULL);
	struct device* dev = malloc(sizeof(struct device));
	__CPROVER_assume(dev != NULL);
	struct ieee802154_radio_api* radio_api = malloc(sizeof(struct ieee802154_radio_api));
	__CPROVER_assume(radio_api != NULL);
	radio_api -> get_capabilities = get_capabilities;
	dev -> api = radio_api;
	if_dev -> dev = dev;
	iface.if_dev = if_dev;

	struct net_pkt pkt;
	struct net_buf* buf = malloc(sizeof(struct net_buf));
	__CPROVER_assume(buf != NULL);
	struct ieee802154_fcf_seq* fs = malloc(sizeof(struct ieee802154_fcf_seq));
	__CPROVER_assume(fs != NULL);
	enum ieee802154_frame_type frame_type;
	
	buf -> data = fs;
	buf -> frags = NULL;
	pkt.buffer = buf;

	ieee802154_recv(&iface, &pkt);
}

int main() {

	harness();
	return 0;
}
