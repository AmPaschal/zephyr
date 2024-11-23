#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int harness() {

	uint8_t str_size;
	__CPROVER_assume(str_size <= 20 && str_size > 0);
	char* str = malloc(str_size);
	__CPROVER_assume(str != NULL);
	__CPROVER_assume(str[str_size - 1] == '\0');
	uint8_t ssid_size;
	__CPROVER_assume(ssid_size <= 20 && ssid_size > 0);
	char* ssid = malloc(ssid_size);
	__CPROVER_assume(ssid != NULL);
	__CPROVER_assume(ssid[ssid_size - 1] == '\0');
	__parse_ssid(str, ssid);
}

int main() {

	harness();
	return 0;
}
