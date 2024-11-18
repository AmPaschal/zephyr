#include <stdint.h>

#include <lwm2m/lwm2m_object.h>
#include <zephyr/net/lwm2m.h>



int harness() {
	struct lwm2m_message msg;
	struct lwm2m_ctx *ctx = malloc(sizeof(struct lwm2m_ctx));
	__CPROVER_assume(ctx != NULL);
	msg.ctx = ctx;

	struct lwm2m_block_context *block_ctx = malloc(sizeof(struct lwm2m_block_context));
	__CPROVER_assume(block_ctx != NULL);
	msg.in.block_ctx = block_ctx;

	do_write_op_tlv(&msg);
}

int main() {

	harness();
	return 0;
}
