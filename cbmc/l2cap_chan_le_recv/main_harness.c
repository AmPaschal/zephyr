#include <stdint.h>

#include "zephyr/net/buf.h"
#include "zephyr/bluetooth/l2cap.h"

int bt_l2cap_chan_disconnect(struct bt_l2cap_chan *chan) {
	//This either returns 0 or an error code for the sake of logging so it doesn't really matter what this returns
	int random;
	return random;
}

void l2cap_chan_send_credits(struct bt_l2cap_le_chan *chan,
				    uint16_t credits)
{
	return;
}

void l2cap_chan_le_recv_seg(struct bt_l2cap_le_chan *chan,
				   struct net_buf *buf) {
					return;
				   }

bool test_and_dec(atomic_t *target) {
	bool random;
	return random;
}

int recv(struct bt_l2cap_chan *chan, struct net_buf *buf) {
	//Returns either 0 or -115
	bool random;
	if(random) {
		return 0;
	}
	else {
		return -115;
	}
}

int harness() {
	struct bt_l2cap_le_chan chan;
	struct net_buf buf;

	uint16_t buf_len;
	__CPROVER_assume(buf_len <= 100);
	uint8_t* buf_field = malloc(buf_len);
	buf.len = buf_len;
	buf.data = buf_field;

	struct bt_l2cap_chan_ops *ops = malloc(sizeof(struct bt_l2cap_chan_ops));
	ops -> recv = recv;
	struct bt_l2cap_chan chan2;
	chan2.ops = ops;
	chan.chan = chan2;

	l2cap_chan_le_recv(&chan, &buf);
}

int main() {

	harness();
	return 0;
}
