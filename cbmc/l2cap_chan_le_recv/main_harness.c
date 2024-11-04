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

static int recv(struct bt_l2cap_chan *chan, struct net_buf *buf) {
	int random;
	__CPROVER_assume(random <= 0);
	return random;
}

static struct net_buf* alloc_buf(struct bt_l2cap_chan *chan) {
	struct net_buf* buf = malloc(sizeof(struct net_buf));
	return buf;
}


int harness() {
	struct bt_l2cap_le_chan chan;
	struct net_buf buf;

	uint16_t buf_len;
	__CPROVER_assume(buf_len <= 100);
	uint8_t* buf_field = malloc(buf_len);
	buf.len = buf_len;
	buf.data = buf_field;

	struct bt_l2cap_chan_ops ops;
	ops.recv = recv;

	bool includeAllocBuf;
	if(includeAllocBuf) {
		//If this function is defined the target function returns early
		//So we need to have it be NULL sometimes to get 100% coverage
		ops.alloc_buf = alloc_buf;
	}
	else {
		ops.alloc_buf = NULL;
	}
	struct bt_l2cap_chan chan2;
	chan2.ops = &ops;
	chan.chan = chan2;

	l2cap_chan_le_recv(&chan, &buf);
}

int main() {

	harness();
	return 0;
}
