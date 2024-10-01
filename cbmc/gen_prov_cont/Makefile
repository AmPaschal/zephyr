# Defines the root of the project.
# Be aware of how many directories deep you go!
ROOT = /home/tlelievr/zephyrproject/zephyr

# Defines file(s) to link to harness, MUST be a full path!
# (We recommend $(ROOT)/os/... for defining these paths)
# Each file is space seperated, and multiple can be defined
LINK = $(ROOT)/subsys/bluetooth/mesh/pb_adv.c

# Harness to utilize, omit the extension!
H_ENTRY = main

# Extra CBMC flags to be passed during CBMC analysis
H_CBMCFLAGS = --nondet-static --unwind 1

# Extra header defintiions to be passed during compilation
H_DEF =

# Extra CBMC includes to be passed during compilation
H_INC = \
	-isystem $(ROOT)/lib/libc/minimal/include \
	-I$(ROOT)/subsys/bluetooth/mesh \
	-I$(ROOT)/include \
	-Ibuild/zephyr/include/generated

# Include our special build file
include ./Makefile.include
