#include <stdint.h>

#include "zephyr/device.h"
#include "zephyr/net/wifi_mgmt.h"
#include "wifi/eswifi/eswifi.h"

// Dummy callback function
int request(struct eswifi_dev *eswifi, char *cmd, size_t clen, char *rsp, size_t rlen) {
	int res;

	return res;
}

int harness() {

	// Model device struct

	struct device dev;

	// Create internal wifi device:

	struct eswifi_dev wifi_dev;

	// Create bus object:

	struct eswifi_bus_ops bus;

	// Set callback function:

	bus.request = request;

	// Add bus to wifi device:

	wifi_dev.bus = &bus;

	// Attach wifi device to the device data:

	dev.data = &wifi_dev;

	// Model wifi struct:

	struct wifi_iface_status status;

	int val = eswifi_mgmt_iface_status(&dev, &status);
}

int main() {

	harness();
	return 0;
}
