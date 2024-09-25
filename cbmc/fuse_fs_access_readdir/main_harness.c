#include <stdint.h>

#include <fuse3/fuse.h>

int add_entry(void *buf, const char *name, const struct stat *stbuf, off_t off, enum fuse_fill_dir_flags flags) {

	int res;

	return res;
}

int harness() {

	// Create valid path string:

	uint16_t psize;

	__CPROVER_assume(psize > 1 && psize < 100);

	char *path = malloc(psize);

	path[psize - 1] = '\0';

	// Allocate some junk data for the buffer

	uint16_t bsize;

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
