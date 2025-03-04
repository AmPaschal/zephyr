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

static int recv(struct bt_l2cap_chan *chan, struct net_buf *buf) {
	int random;
	return random;
}

static struct net_buf* alloc_buf(struct bt_l2cap_chan *chan) {
	uint8_t sdubuflen;
	__CPROVER_assume(sdubuflen > sizeof(struct net_buf) + sizeof(uint16_t));
	struct net_buf* buf = malloc(sdubuflen);
	return buf;
}


int harness() {
	struct bt_l2cap_le_chan *chan = malloc(sizeof(struct bt_l2cap_le_chan));
	struct net_buf *buf = malloc(sizeof(struct net_buf));

	__CPROVER_assume(chan != NULL);
	__CPROVER_assume(buf != NULL);

	uint16_t buf_len;
	uint8_t* buf_field = malloc(buf_len);
	buf->len = buf_len;
	buf->data = buf_field;

	struct bt_l2cap_chan_ops *ops = malloc(sizeof(struct bt_l2cap_chan_ops));
	__CPROVER_assume(ops != NULL);
	ops->recv = recv;

	bool includeAllocBuf;
	if(includeAllocBuf) {
		//If this function is defined the target function returns early
		//So we need to have it be NULL sometimes to get 100% coverage
		ops->alloc_buf = alloc_buf;
	}
	else {
		ops->alloc_buf = NULL;
	}
	chan->chan.ops = ops;

	uint8_t sdubuflen;
	__CPROVER_assume(sdubuflen > sizeof(struct net_buf) + sizeof(uint16_t));
	struct net_buf *sdubuf = malloc(sdubuflen);
	chan->_sdu = sdubuf;

	l2cap_chan_le_recv(chan, buf);
}

int main() {

	harness();
	return 0;
}
