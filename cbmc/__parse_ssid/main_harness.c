#include <stdint.h>
#include <stdlib.h>

int harness() {

	uint8_t str_size;
	__CPROVER_assume(str_size <= 20);
	char* str = malloc(str_size);
	_CPROVER_assume(str != NULL);
	__CPROVER_assume(str[str_size - 1] == '\0');
	uint8_t ssid_size;
	__CPROVER_assume(ssid_size <= 20);
	char* ssid = malloc(20);
	_CPROVER_assume(ssid != NULL);
	__CPROVER_assume(ssid[ssid_size - 1] == '\0');
	__parse_ssid(str, ssid);
}

int main() {

	harness();
	return 0;
}
