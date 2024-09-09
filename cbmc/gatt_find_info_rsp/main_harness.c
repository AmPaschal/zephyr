#include <stdint.h>

#include "host/conn_internal.h"
#include "host/att_internal.h"
#include "zephyr/bluetooth/gatt.h"

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

	gatt_find_info_rsp(&conn, err, &pdu, length, &user_data);
}

int main() {

	harness();
	return 0;
}
