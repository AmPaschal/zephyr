# Defines the root of the project.
# Be aware of how many directories deep you go!
ROOT = /home/owen/zephyrproject/zephyr

# Defines file(s) to link to harness, MUST be a full path!
# (We recommend $(ROOT)/os/... for defining these paths)
# Each file is space seperated, and multiple can be defined
LINK = $(ROOT)/subsys/net/lib/dns/resolve.c  $(ROOT)/subsys/net/lib/dns/dns_pack.c

# Harness to utilize, omit the extension!
H_ENTRY = main

# Include directories when compiling
H_INC = \
	-isystem $(ROOT)/lib/libc/minimal/include \
	-I$(ROOT)/subsys/bluetooth \
	-I$(ROOT)/subsys/bluetooth/controller/include \
	-I$(ROOT)/subsys/bluetooth/shell \
	-I$(ROOT)/subsys/bluetooth/controller/ll_sw \
	-I$(ROOT)/subsys/bluetooth/controller/ll_sw/nordic \
	-I$(ROOT)/subsys/bluetooth/controller \
	-I$(ROOT)/subsys \
	-I$(ROOT)/include \
	-Ibuild/zephyr/include/generated

include ./Makefile.include