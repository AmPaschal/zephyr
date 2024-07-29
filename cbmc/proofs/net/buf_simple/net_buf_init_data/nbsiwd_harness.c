/**
 * @file nbsiwd_harness.c
 * @author Owen Cochell (owencochell@gmail.com)
 * @brief Harness for net_buf_simple_init_with_data
 * @version 0.1
 * @date 2024-07-22
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdlib.h>

#include <zephyr/kernel.h>
#include "zephyr/net/buf.h"

void harness() {

    // Create a buffer struct:

    struct net_buf_simple sbuf;

    // Determine size of data to allocate:

    uint16_t size;

    // Determine length (won't exceed size):

    uint16_t length;

    __CPROVER_assume(length <= size);

    // Allocate data:

    uint8_t* data = (uint8_t*)malloc(sizeof(uint8_t) * size);

    // Call function:

    net_buf_simple_init_with_data(&sbuf, data, size);

    // Ensure values are correct:

    assert(sbuf.data == data);
    assert(sbuf.len == size);
    assert(sbuf.size == size);
    assert(sbuf.__buf == data);
}
