# Defines the root of the project.
# Be aware of how many directories deep you go!
ROOT = ../../../../..

# Defines file(s) to link to harness, MUST be a full path!
# (We recommend $(ROOT)/os/... for defining these paths)
# Each file is space seperated, and multiple can be defined
LINK = $(ROOT)/subsys/net/l2/ieee802154/ieee802154_6lo_fragment.c

# Harness to utilize, omit the extension!
H_ENTRY = fatc

# Extra CBMC flags to be passed during CBMC analysis
H_CBMCFLAGS = --nondet-static

# Extra header defintiions to be passed during compilation
H_DEF = -D"CONFIG_NET_L2_IEEE802154_FRAGMENT_REASS_CACHE_SIZE=2" -D"CONFIG_NET_L2_IEEE802154_REASSEMBLY_TIMEOUT=10"

# Extra CBMC includes to be passed during compilation
H_INC = -I"$(ROOT)/subsys/net/l2/ieee802154" -I"$(ROOT)/subsys/net/ip"

# Include our special build file
include ../../../../Makefile.include
