#include <stdint.h>
#include <stdlib.h>

#include <zephyr/net/dns_resolve.h>
#include <dns_pack.h>

int dns_validate_msg(struct dns_resolve_context *ctx, struct dns_msg_t *dns_msg, uint16_t *dns_id,
		     int *query_idx, struct net_buf *dns_cname, uint16_t *query_hash);

int main() {

    // Model inputs:

    // Query IDX MUST be negative:

    int query_idx = -1;

    // Model network buffer:

    struct net_buf dns_cname;

    // Define the DNS resolve context:

    struct dns_resolve_context ctx;

    // Model DNS message:

    struct dns_msg_t dns_msg;

    // Set the message size:

    dns_msg.msg_size = 10;

    // Set the query offset to be big, past bounds:

    dns_msg.query_offset = 15;

    // Allocate the size amount:

    dns_msg.msg = malloc(dns_msg.msg_size);

    // We want to skip the while loop, so the 6th value MUST be zero

    dns_msg.msg[6] = 0;

    // The below can be arbitrary:

    uint16_t dns_id = 0;
    uint16_t query_hash = 0;

    // Call function:

    int res = dns_validate_msg(&ctx, &dns_msg, &dns_id, &query_idx, &dns_cname, &query_hash);
}
