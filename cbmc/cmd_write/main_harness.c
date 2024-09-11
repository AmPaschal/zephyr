#include <stdint.h>

#include "zephyr/shell/shell.h"

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

	// Model input arguments:

	size_t argc;

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
