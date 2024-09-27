#include <stdint.h>

#include "zephyr/device.h"
#include "zephyr/net/wifi_mgmt.h"

int harness() {

	// Model device struct

	struct device dev;

	// Model wifi struct:

	struct wifi_iface_status status;

	int val = eswifi_mgmt_iface_status(&dev, &status);
}

int main() {

	harness();
	return 0;
}
