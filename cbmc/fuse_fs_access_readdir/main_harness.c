#include <stdint.h>

#include <fuse3/fuse.h>

#include <zephyr/fs/fs.h>

#define PATH_MAX 256 /* # chars in a path name including nul */

int add_entry(void *buf, const char *name, off_t off, enum fuse_fill_dir_flags flags) {

	int res;

	return res;
}

int fs_opendir(struct fs_dir_t *zdp, const char *path) {

	int val;

	return val;
}

int fs_closedir(struct fs_dir_t *zdp) {

	int val;

	return val;
}

unsigned int getuid() {

	unsigned int val;

	return val;
}

unsigned int getgid() {

	unsigned int val;

	return val;
}

int fs_readdir(struct fs_dir_t *zdp, struct fs_dirent *entry) {

	// Create fs_dirent struct:

	struct fs_dirent centry;

	// Copy into the destination:

	*entry = centry;

	// Create unconstrained int:

	int val;

	return val;
}

int fs_readmount(int *index, const char **name) {
	
	// Create unconstrained string:

	uint16_t ssize;

	__CPROVER_assume(0 < ssize && ssize < 10);

	*name = malloc(ssize);

	// Return unconstrained int

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

	__CPROVER_assume(psize > 0 && psize <= PATH_MAX + 10);

	char *path = malloc(psize);

	path[psize - 1] = '\0';

	// Allocate some junk data for the buffer

	uint16_t bsize;

	__CPROVER_assume(0 < bsize && bsize <= PATH_MAX + 10);

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
