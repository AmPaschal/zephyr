#include <stdint.h>

#include "pb_adv.c"
// #include "host/testing.h"
#include "zephyr/bluetooth/mesh/main.h"
#include "zephyr/net/buf.h"

void bt_test_mesh_prov_invalid_bearer(uint8_t opcode) {
	return;
}

// static void gen_prov_ack_send(uint8_t xact_id) {
// 	return;
// }

// static void delayed_adv_send_end(int err, void *user_data) {
// 	return;
// }

// static void delayed_adv_send_start(uint16_t duration, int err, void *user_data)
// {
// 	return;
// }

// static void prov_msg_recv(void)
// {
// 	return;
// }

// static void prov_clear_tx(void)
// {
// 	return;
// }

// struct prov_rx {
// 	uint32_t link_id;
// 	uint8_t xact_id;
// 	uint8_t gpc;
// };

static void link_opened(const struct prov_bearer *bearer, void *cb_data) {
	return;
}

static void link_closed(const struct prov_bearer *bearer, void *cb_data,
			    enum prov_bearer_link_status reason) {
	return;
}

static void error(const struct prov_bearer *bearer, void *cb_data,
		      uint8_t err) {
	return;
}

static void recv(const struct prov_bearer *bearer, void *cb_data,
		     struct net_buf_simple *buf) {
	return;
}

void callback(int err, void *cb_data){
	return;
}

int harness() {
	struct prov_bearer_cb cb_funcs;
	cb_funcs.error = error;
	cb_funcs.link_opened = link_opened;
	cb_funcs.link_closed = link_closed;
	cb_funcs.recv = recv;
	extern struct pb_adv link;
	link.cb = &cb_funcs;

	uint16_t link_buf_len;
	struct net_buf_simple link_buf;
	link_buf.data = (uint8_t*) malloc(link_buf_len);
	link_buf.len = link_buf_len;
	link.rx.buf = &(link_buf);

	struct prov_rx rx;
	struct net_buf_simple buf;
	uint16_t len;
	__CPROVER_assume(len <= 100);
	buf.data = (uint8_t*) malloc(len);
	buf.len = len;

	gen_prov_cont(&rx, &buf);
}

int main() {

	harness();
	return 0;
}
