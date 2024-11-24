#include <stdint.h>

#include "zephyr/net/net_if.h"
#include "zephyr/net/net_pkt.h"
#include "zephyr/net/ieee802154_radio.h"
#include "l2/ieee802154/ieee802154_frame.h"
#include "l2/ieee802154/ieee802154_6lo.h"

bool ieee802154_validate_frame(uint8_t *buf, uint8_t length, struct ieee802154_mpdu *mpdu) {
	struct ieee802154_mpdu new_mpdu;
	struct ieee802154_fcf_seq* fs = malloc(sizeof(struct ieee802154_fcf_seq));
	__CPROVER_assume(fs != NULL);
	struct ieee802154_address_field* dst_addr = malloc(sizeof(struct ieee802154_address_field));
	__CPROVER_assume(dst_addr != NULL);
	struct ieee802154_address_field* src_addr = malloc(sizeof(struct ieee802154_address_field));
	__CPROVER_assume(src_addr != NULL);
	uint8_t* payload = (uint8_t*) malloc(length); //I'm not at all confident this is what I'm supposed to be doing but I need this to be defined
	__CPROVER_assume(payload != NULL);
	// new_mpdu.payload = payload;
	// new_mpdu.payload_length = length;
	new_mpdu.mhr.fs = fs;
	new_mpdu.mhr.dst_addr = dst_addr;
	new_mpdu.mhr.src_addr = src_addr;
	*mpdu = new_mpdu;
	__CPROVER_assume(&(mpdu -> mhr) != NULL);
	return validate_payload_and_mfr(mpdu, buf, payload, length);
}

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
	struct net_linkaddr src;
	struct net_linkaddr dst;
	pkt.lladdr_src = src;
	pkt.lladdr_dst = dst;
	__CPROVER_assume(&pkt != NULL);
	__CPROVER_assume(&(pkt.lladdr_src) != NULL);
	__CPROVER_assume(&(pkt.lladdr_dst) != NULL);
	struct net_buf* buf = malloc(sizeof(struct net_buf));
	__CPROVER_assume(buf != NULL);
	uint8_t size;
	__CPROVER_assume(size <= 100);
	uint8_t* data = (uint8_t*) malloc(size);
	__CPROVER_assume(data != NULL);
	buf -> data = data;
	buf -> len = size;
	// uint8_t fs_size;
	// __CPROVER_assume(fs_size > sizeof(struct ieee802154_fcf_seq));
	// struct ieee802154_fcf_seq* fs = (struct ieee802154_fcf_seq*) malloc(fs_size);
	// __CPROVER_assume(fs != NULL);
	// __CPROVER_assume(&(fs -> fc) != NULL);
	
	// buf -> data = fs;
	// buf -> len = fs_size;
	// buf -> frags = NULL;
	pkt.frags = buf;

	ieee802154_recv(&iface, &pkt);
}

int main() {

	harness();
	return 0;
}
