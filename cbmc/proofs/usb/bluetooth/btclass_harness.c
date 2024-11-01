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

    uint32_t len;
    __CPROVER_assume(len > 0 && len < 100);
    
    uint8_t *data = malloc(len);
    __CPROVER_assume(data != NULL);

    bluetooth_class_handler(&setup, &len, &data);

}