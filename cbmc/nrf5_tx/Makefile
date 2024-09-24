# Defines the root of the project.
# Be aware of how many directories deep you go!
ROOT = /home/owen/zephyrproject/zephyr

# Defines file(s) to link to harness, MUST be a full path!
# (We recommend $(ROOT)/os/... for defining these paths)
# Each file is space seperated, and multiple can be defined
LINK = $(ROOT)/drivers/ieee802154/ieee802154_nrf5.c

# Harness to utilize, omit the extension!
H_ENTRY = main

# Extra CBMC flags to be passed during CBMC analysis
H_CBMCFLAGS = --nondet-static --unwind 1

# Extra header defintiions to be passed during compilation
H_DEF = -DCONFIG_BT_CTLR_COMPANY_ID=0x5F1 -DCONFIG_BT_CTLR_SUBVERSION_NUMBER=0xFFFF

# Extra CBMC includes to be passed during compilation
H_INC = \
	-isystem $(ROOT)/lib/libc/minimal/include \
	-I$(ROOT)/include \
	-I$(ROOT)/drivers \
	-Ibuild/zephyr/include/generated

# Include our special build file
include ./Makefile.include
