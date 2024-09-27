#include <stdint.h>

#include "zephyr/net/buf.h"

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
