#include <stdint.h>

#include "host/conn_internal.h"
#include "host/att_internal.h"
#include "zephyr/bluetooth/gatt.h"

uint8_t dummy(struct bt_conn *conn, const struct bt_gatt_attr *attr,
					   struct bt_gatt_discover_params *params) {}

uint8_t bt_gatt_discover_func(struct bt_conn *conn, const struct bt_gatt_attr *attr,
			      struct bt_gatt_discover_params *params) {
	uint8_t random;

	return random;
}

void gatt_discover_next(struct bt_conn *conn, uint16_t last_handle,
			struct bt_gatt_discover_params *params) {}

int harness() {

	// Harness input variables:

	uint16_t length;

	int err;

	// Unconstrained connection struct:

	struct bt_conn conn;

	// Define unconstrained bt_att_find_info_rsp (gets cast to it internally)

	struct bt_att_find_info_rsp pdu;

	// Define an unconstrained bt_gatt_discover_params (gets copied internally)

	struct bt_gatt_discover_params user_data;

	// Define dummy function:

	user_data.func = bt_gatt_discover_func;

	gatt_find_info_rsp(&conn, err, &pdu, length, &user_data);
}

int main() {

	harness();
	return 0;
}
