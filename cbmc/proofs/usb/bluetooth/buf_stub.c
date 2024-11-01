
#include "zephyr/net/buf.h"
#include <stdlib.h>
#include <string.h>

struct net_buf *net_buf_alloc_fixed(struct net_buf_pool *pool,
				    k_timeout_t timeout)
{
	struct net_buf *buf = malloc(sizeof(struct net_buf));
    __CPROVER_assume(buf != NULL);

    uint16_t size;
    __CPROVER_assume(size > 0 && size < 100);
    uint8_t *data = malloc(size);   
    __CPROVER_assume(data != NULL);

    // bool union_decider;

    // if (union_decider)

    buf->b.data = data;
    buf->b.len = 0;
    buf->b.size = size;
    buf->b.__buf = data;


    // buf->__buf = data;
    // buf->data = buf->__buf;
    // buf->size = size;
    // buf->len = 0;
    buf->ref   = 1U;
	buf->flags = 0U;
	buf->frags = NULL;

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

// size_t net_buf_simple_tailroom(const struct net_buf_simple *buf)
// {
// 	return buf->size - net_buf_simple_headroom(buf) - buf->len;
// }

// void *net_buf_simple_add(struct net_buf_simple *buf, size_t len)
// {
// 	uint8_t *tail = net_buf_simple_tail(buf);

// 	__CPROVER_assert(net_buf_simple_tailroom(buf) >= len, "Not enough tailroom in buf");

// 	buf->len += len;
// 	return tail;
// }

// void *net_buf_simple_add_mem(struct net_buf_simple *buf, const void *mem,
// 			     size_t len)
// {

// 	return memcpy(net_buf_simple_add(buf, len), mem, len);
// }