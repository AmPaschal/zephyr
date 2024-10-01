#include <stdint.h>

#include "host/conn_internal.h"
#include "host/att_internal.h"
#include "zephyr/bluetooth/gatt.h"
#include "ll_sw/ull_adv_types.h"



int harness() {

	//Presumably, data buffer input length
	uint8_t len;
	__CPROVER_assume(len <= 100);

	//Data buffer
	uint8_t* data = malloc(len);

	struct ll_adv_set adv;

	ull_scan_rsp_set(&adv, len, data);
}

int main() {

	harness();
	return 0;
}
