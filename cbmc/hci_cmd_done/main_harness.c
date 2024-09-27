#include <stdint.h>

#include "zephyr/net/buf.h"

void* atomic_ptr_clear(void* thing) {

	// Allocate network buffer:

	struct net_buf *buf = (struct net_buf *)malloc(sizeof(struct net_buf));

	return buf;
}

int net_buf_id(const struct net_buf *buf) {
	int res;

	// ID will NOT exceed maximum size

	__CPROVER_assume(res >= 0 && res < CONFIG_BT_BUF_CMD_TX_COUNT);

	return res;
}

int harness() {

	// Model input arguments

	uint16_t opcode;

	uint8_t status;

	// Model network buffer:

	struct net_buf buf;

	hci_cmd_done(opcode, status, &buf);
}

int main() {

	harness();
	return 0;
}
