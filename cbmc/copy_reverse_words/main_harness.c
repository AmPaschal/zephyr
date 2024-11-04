#include <stdint.h>

int harness() {

	int dst_len;
	uint8_t* dst_buf = malloc(dst_len);

	int src_len;
	uint8_t* src_buf = malloc(src_len);

	copy_reverse_words(dst_buf, dst_len, src_buf, src_len);
}

int main() {

	harness();
	return 0;
}
