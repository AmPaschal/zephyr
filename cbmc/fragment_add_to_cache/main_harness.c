#include "zephyr/net/net_pkt.h"
#include <stdint.h>
#include <stdlib.h>

// #include header files

enum net_verdict fragment_add_to_cache(struct net_pkt *pkt);

int harness() {

	// Model inputs
	struct net_pkt *pkt = (struct net_pkt *) malloc(sizeof(struct net_pkt));
	__CPROVER_assume(pkt != NULL);

	// Call target function
	fragment_add_to_cache(pkt);
}

int main() {

	harness();
	return 0;
}
