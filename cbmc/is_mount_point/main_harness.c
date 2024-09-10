#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define PATH_MAX        4096	/* # chars in a path name including nul */

char* dirname(char* path) {

	// Just allocate some data and return:

	uint16_t size;

	__CPROVER_assume(size <= PATH_MAX && size > 0);

	char* ret = malloc(sizeof(char) * size);

	// Determine if we need to add null character:

	ret[size - 1] = '\0';

	return ret;
}

bool is_mount_point(const char *path)
{
	char dir_path[PATH_MAX];
	size_t len;

	len = strlen(path);
	if (len >=  sizeof(dir_path)) {
		return false;
	}

	memcpy(dir_path, path, len);
	dir_path[len] = '\0';
	return strcmp(dirname(dir_path), "/") == 0;
}

int harness() {

	// Allocate some data:

	uint16_t size;

	// Size will not be zero:

	__CPROVER_assume(size > 0);

	char* path = malloc(sizeof(char) * size);

	// Need to add null character to string:

	path[size - 1] = '\0';

	bool res = is_mount_point(path);
}

int main() {

	harness();
	return 0;
}
