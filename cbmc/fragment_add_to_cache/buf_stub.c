
#include "zephyr/net/buf.h"
#include "zephyr/net/net_pkt.h"
#include <stdlib.h>
#include <string.h>
#include "6lo_private.h"

struct net_buf *net_buf_alloc_fixed(struct net_buf_pool *pool,
				    k_timeout_t timeout)
{

    uint8_t net_buf_size;
    __CPROVER_assume(net_buf_size > sizeof(struct net_buf));
	struct net_buf *buf = malloc(net_buf_size);
    __CPROVER_assume(buf != NULL);

    buf->user_data_size = net_buf_size - sizeof(struct net_buf);

    uint16_t size;
    __CPROVER_assume(size > 0 && size < 100);
    uint8_t *data = malloc(size);   
    __CPROVER_assume(data != NULL);

    buf->__buf = data;
    buf->data = buf->__buf;
    buf->size = size;
    buf->len = 0;

    buf->ref   = 1U;
	buf->flags = 0U;
	buf->frags = NULL;

    return buf;

}

struct net_buf *net_buf_alloc_stub(bool filled)
{

    uint8_t net_buf_size;
    __CPROVER_assume(net_buf_size > sizeof(struct net_buf));
	struct net_buf *buf = malloc(net_buf_size);
    __CPROVER_assume(buf != NULL);

    buf->user_data_size = net_buf_size - sizeof(struct net_buf);

    uint16_t size;
    __CPROVER_assume(size > 0 && size < 100);
    uint8_t *data = malloc(size);   
    __CPROVER_assume(data != NULL);

    buf->__buf = data;
    buf->data = buf->__buf;
    buf->size = size;

    if (filled) {
        uint16_t len;
        __CPROVER_assume(len > NET_6LO_FRAGN_HDR_LEN && len <= size);
        buf->len = len;
    } else {
        buf->len = 0;
    }

    buf->ref   = 1U;
	buf->flags = 0U;
	buf->frags = NULL;

    return buf;

}


void net_buf_simple_reserve(struct net_buf_simple *buf, size_t reserve)
{
	__CPROVER_assert(buf, "buf is Null");
	__CPROVER_assert(buf->len == 0U, "buf is not empty");

	buf->data = buf->__buf + reserve;
}

size_t net_buf_simple_headroom(const struct net_buf_simple *buf)
{
	return buf->data - buf->__buf;
}

size_t net_buf_simple_tailroom(const struct net_buf_simple *buf)
{
	return buf->size - net_buf_simple_headroom(buf) - buf->len;
}

void *net_buf_simple_add(struct net_buf_simple *buf, size_t len)
{
	uint8_t *tail = net_buf_simple_tail(buf);

	__CPROVER_assert(net_buf_simple_tailroom(buf) >= len, "Not enough tailroom in buf");

	buf->len += len;
	return tail;
}

void *net_buf_simple_add_mem(struct net_buf_simple *buf, const void *mem,
			     size_t len)
{

	return memcpy(net_buf_simple_add(buf, len), mem, len);
}

void net_buf_unref(struct net_buf *buf) {

    free(buf->__buf);
    buf->data = NULL;
    free(buf);

}

struct net_buf *net_buf_frag_last(struct net_buf *buf)
{
	__CPROVER_assert(buf != NULL, "buf is Null");

	while (buf->frags) {
		buf = buf->frags;
	}

	return buf;
}

void net_buf_frag_insert(struct net_buf *parent, struct net_buf *frag)
{
	__CPROVER_assert(parent != NULL, "parent is Null");
	__CPROVER_assert(frag != NULL, "frag is Null");

	if (parent->frags) {
		net_buf_frag_last(frag)->frags = parent->frags;
	}
	/* Take ownership of the fragment reference */
	parent->frags = frag;
}

void net_pkt_append_buffer(struct net_pkt *pkt, struct net_buf *buffer)
{
	if (!pkt->buffer) {
		pkt->buffer = buffer;
		net_pkt_cursor_init(pkt);
	} else {
		net_buf_frag_insert(net_buf_frag_last(pkt->buffer), buffer);
	}
}