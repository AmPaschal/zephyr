# Defines the root of the project.
# Be aware of how many directories deep you go!
ROOT = /home/pamusuo/research/cbmc-research/zephyrproject/zephyr

# Defines file(s) to link to harness, MUST be a full path!
# (We recommend $(ROOT)/os/... for defining these paths)
# Each file is space seperated, and multiple can be defined
LINK = $(ROOT)/subsys/net/l2/ieee802154/ieee802154_6lo_fragment.c $(ROOT)/cbmc/fragment_add_to_cache/buf_stub.c

# Harness to utilize, omit the extension!
H_ENTRY = main

# Extra CBMC flags to be passed during CBMC analysis
H_CBMCFLAGS = --nondet-static --verbosity 9 --unwind 1 --unwindset fragment_reconstruct_packet.0:2 --unwindset fragment_remove_headers.0:2 #--unwindset get_reass_cache.0:2 --unwindset set_reass_cache.0:2 --unwindset fragment_cached_pkt_len.0:3 --unwindset clear_reass_cache.0:2

# Extra header defintiions to be passed during compilation
H_DEF = -DCONFIG_BT_ID_MAX=62 -DCONFIG_BT_MAX_CONN=62 -DCONFIG_BT_GATT_CLIENT=1 -DCONFIG_BT_MAX_PAIRED=62 -DCONFIG_BT_BUF_ACL_RX_SIZE=255 -DCONFIG_BT_L2CAP_TX_MTU=247 \
		-DCONFIG_NET_L2_IEEE802154_FRAGMENT_REASS_CACHE_SIZE=1

# Extra CBMC includes to be passed during compilation
H_INC = \
	-isystem $(ROOT)/lib/libc/minimal/include \
	-I$(ROOT)/subsys/bluetooth \
	-I$(ROOT)/subsys/bluetooth/controller/include \
	-I$(ROOT)/subsys/bluetooth/shell \
	-I$(ROOT)/subsys/bluetooth/controller/ll_sw \
	-I$(ROOT)/subsys/bluetooth/controller/ll_sw/nordic \
	-I$(ROOT)/subsys/bluetooth/controller \
	-I$(ROOT)/include \
	-Ibuild/zephyr/include/generated \
	-I$(ROOT)/subsys/net/ip \

# Include our special build file
include ./Makefile.include
