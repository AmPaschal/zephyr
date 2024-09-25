#include <stdint.h>

#include <fuse3/fuse.h>

#define PATH_MAX 4096 /* # chars in a path name including nul */

int add_entry(void *buf, const char *name, const struct stat *stbuf, off_t off, enum fuse_fill_dir_flags flags) {

	int res;

	return res;
}

char *dirname(char *path) {

	// Just allocate some data and return:

	uint16_t size;

	__CPROVER_assume(size <= PATH_MAX && size > 0);

	char *ret = malloc(sizeof(char) * size);

	// Determine if we need to add null character:

	ret[size - 1] = '\0';

	return ret;
}

int harness() {

	// Create valid path string:

	uint16_t psize;

	__CPROVER_assume(psize > 1 && psize <= PATH_MAX);

	char *path = malloc(psize);

	path[psize - 1] = '\0';

	// Allocate some junk data for the buffer

	uint16_t bsize;

	__CPROVER_assume(0 < bsize && bsize <= PATH_MAX);

	uint8_t* buf = malloc(bsize);

	// Unconstrained fuse file info:

	struct fuse_file_info ffi;

	// Unconstrained off value

	off_t off;

	int res = fuse_fs_access_readdir(path, buf, add_entry, off, &ffi);
}

int main() {

	harness();
	return 0;
}
