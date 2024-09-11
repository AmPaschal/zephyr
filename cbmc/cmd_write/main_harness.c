#include <stdint.h>

#include "zephyr/settings/settings.h"
#include "zephyr/shell/shell.h"

extern struct settings_store *settings_save_dst;

void shell_error_impl(const struct shell *sh, const char *fmt, ...) {}

char *valid_string() {

	// Define string size:

	uint16_t size;

	// Won't be zero:

	__CPROVER_assume(size > 0);

	// Allocate data:

	char *data = malloc(size);

	// Put null character in final position:

	data[size - 1] = '\0';

	// Return the data:

	return data;
}

int harness() {

	settings_store_init();
	
	// Model input arguments:

	size_t argc;

	// Place a limit on the number of arguments:

	__CPROVER_assume(argc < 10 && argc > 0);

	// Create argument array:

	char *argv[argc];

	// Create valid string for each value in the arg array:

	for (int i = 0; i < argc; ++i) {

		argv[i] = valid_string();
	}

	// Unconstrained shell struct:

	const struct shell shell;

	int res = cmd_write(&shell, argc, argv);
}

int main() {

	harness();
	return 0;
}
