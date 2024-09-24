/**
 * @file btclass_harness.c
 * @author Taylor Le Lievre (tlelievr@purdue.edu)
 * @brief Harness for bluetooth_class_handler
 * @version 0.1
 * @date 2024-09-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <stdlib.h>

#include "zephyr/kernel.h"
#include "zephyr/net/buf.h"
#include "zephyr/usb/usb_ch9.h"

void harness() {
    struct usb_setup_packet setup;

    int32_t len;
    uint8_t *data = malloc(sizeof(uint8_t) * len);

    bluetooth_class_handler(&setup, &len, &data);

}