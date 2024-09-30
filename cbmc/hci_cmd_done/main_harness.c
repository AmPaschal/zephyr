#include <stdint.h>
#include "host/hci_core.c"
#include "zephyr/net/buf.h"
#include "zephyr/sys/atomic_types.h"

extern struct cmd_data cmd_data[CONFIG_BT_BUF_CMD_TX_COUNT];

void* atomic_ptr_clear(void* thing) {

	// Allocate network buffer:

	// buf is typically expected to contain more than sizeof(struct net_buf) bytes because there is user_data[] as the last field.
	// 

	int size;
	__CPROVER_assume(size > sizeof(struct net_buf) && size < sizeof(struct net_buf) + 10);
	struct net_buf *buf = (struct net_buf *)malloc(size);

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

	// Model cmd_data to fix errors caused by invalid data
	for (int i = 0; i < CONFIG_BT_BUF_CMD_TX_COUNT; i++) {

		struct cmd_data data;

		data.state = malloc(sizeof(struct bt_hci_cmd_state_set));

		data.state->target = malloc(sizeof(atomic_t));
		__CPROVER_assume(data.state->bit >= 0 && data.state->bit < sizeof(atomic_t));

		cmd_data[i] = data;

	}

	hci_cmd_done(opcode, status, &buf);
}

int main() {

	harness();
	return 0;
}
