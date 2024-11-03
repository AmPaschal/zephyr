#include <stdint.h>
#include <stdlib.h>
#include "zephyr/net/dns_resolve.h"
#include "net/lib/dns/dns_pack.h"

// #include header files

int dns_validate_msg(struct dns_resolve_context *ctx,
		     struct dns_msg_t *dns_msg,
		     uint16_t *dns_id,
		     int *query_idx,
		     struct net_buf *dns_cname,
		     uint16_t *query_hash);

// int dns_unpack_answer(struct dns_msg_t *dns_msg, int dname_ptr, uint32_t *ttl, enum dns_rr_type *type) {

// 	uint32_t ttl_val;
// 	enum dns_rr_type type_val;

// 	*ttl = ttl_val;
// 	*type = type_val;

// 	int retVal;
// 	return retVal;
// }

static uint16_t max_size;

uint16_t net_buf_simple_max_len(const struct net_buf_simple *buf) {
	return max_size;
}

int harness() {

	// Model inputs
	struct dns_resolve_context ctx;

	struct dns_msg_t dns_msg;
	uint16_t msg_size;
	// __CPROVER_assume(msg_size >= 8);
	uint8_t *msg = malloc(msg_size);
	__CPROVER_assume(msg != NULL);
	dns_msg.msg = msg;
	dns_msg.msg_size = msg_size;

	__CPROVER_assume(dns_msg.query_offset < msg_size);

	uint16_t dns_id;
	int query_idx;
	__CPROVER_assume(query_idx < DNS_NUM_CONCUR_QUERIES);
	struct net_buf dns_cname;

	dns_cname.data = malloc(max_size);
	__CPROVER_assume(dns_cname.data != NULL);
	uint16_t query_hash;

	// Call target function
	dns_validate_msg(&ctx, &dns_msg, &dns_id, &query_idx, &dns_cname, &query_hash);
}

int main() {

	harness();
	return 0;
}
