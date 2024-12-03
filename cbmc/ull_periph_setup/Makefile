# Defines the root of the project.
# Be aware of how many directories deep you go!
ROOT = /home/pamusuo/research/cbmc-research/zephyrproject/zephyr

# Defines file(s) to link to harness, MUST be a full path!
# (We recommend $(ROOT)/os/... for defining these paths)
# Each file is space seperated, and multiple can be defined
LINK = \
	$(ROOT)/subsys/bluetooth/controller/ll_sw/ull_peripheral.c $(ROOT)/subsys/bluetooth/controller/ll_sw/ull_llcp.c

# Harness to utilize, omit the extension!
H_ENTRY = main

# Extra CBMC flags to be passed during CBMC analysis
H_CBMCFLAGS = --nondet-static --unwind 1 --verbosity 9

# Extra header defintiions to be passed during compilation
H_DEF = -DCONFIG_BT_PERIPHERAL=1 -DCONFIG_BT_BROADCASTER=1 -DCONFIG_BT_CONN=1 -DCONFIG_BT_MAX_CONN=1 -DCONFIG_BT_CTLR_LLL_PRIO=1 -DCONFIG_BT_CTLR_ULL_LOW_PRIO=1 \
		-DCONFIG_BT_CTLR_CHAN_SEL_2=1	-DCONFIG_BT_CTLR_EVENT_OVERHEAD_RESERVE_MAX=1 \
		-DCONFIG_BT_CTLR_COMPANY_ID=1 -DCONFIG_BT_CTLR_SUBVERSION_NUMBER=1 -DCONFIG_BT_CTLR_LLCP_REMOTE_PROC_CTX_BUF_NUM=1 \
		-DCONFIG_BT_CTLR_LLCP_TX_PER_CONN_TX_CTRL_BUF_NUM_MAX=1 -DCONFIG_BT_CTLR_LLCP_CONN=1 \
		-DCONFIG_BT_CTLR_LLCP_COMMON_TX_CTRL_BUF_NUM=1 -DCONFIG_BT_CTLR_LLCP_LOCAL_PROC_CTX_BUF_NUM=1 \ 


# Extra CBMC includes to be passed during compilation
H_INC = \
	-isystem $(ROOT)/lib/libc/minimal/include \
	-I$(ROOT)/subsys/bluetooth/controller/ll_sw \
	-I$(ROOT)/subsys/bluetooth/controller/include \
	-I$(ROOT)/subsys/bluetooth \
	-I$(ROOT)/subsys/bluetooth/controller \
	-I$(ROOT)/subsys/bluetooth/controller/util \
	-I$(ROOT)/subsys/bluetooth/controller/hal \
	-I$(ROOT)/include \
	-I$(ROOT)/tests/bluetooth/controller/mock_ctrl/include \
	-I$(ROOT)/subsys/bluetooth/controller/ll_sw/openisa \
	# -I$(ROOT)/include/zephyr/sys \
	-Ibuild/zephyr/include/generated

# Include our special build file
include ./Makefile.include
