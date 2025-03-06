#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// tag-_slist
// file ../../include/zephyr/sys/slist.h line 42
struct _slist;

// tag-_snode
// file ../../include/zephyr/sys/slist.h line 33
struct _snode;

// tag-coap_block_context
// file ../../include/zephyr/net/coap.h line 750
struct coap_block_context;

// tag-coap_block_size
// file ../../include/zephyr/net/coap.h line 702
enum coap_block_size { COAP_BLOCK_16=0, COAP_BLOCK_32=1, COAP_BLOCK_64=2, COAP_BLOCK_128=3, COAP_BLOCK_256=4, COAP_BLOCK_512=5, COAP_BLOCK_1024=6 };

// tag-coap_packet
// file ../../include/zephyr/net/coap.h line 235
struct coap_packet;

// tag-coap_pending
// file ../../include/zephyr/net/coap.h line 236
struct coap_pending;

// tag-coap_reply
// file ../../include/zephyr/net/coap.h line 237
struct coap_reply;

// tag-coap_transmission_parameters
// file ../../include/zephyr/net/coap.h line 340
struct coap_transmission_parameters;

// tag-log_source_const_data
// file ../../include/zephyr/logging/log_instance.h line 17
struct log_source_const_data;

// tag-log_source_dynamic_data
// file ../../include/zephyr/logging/log_instance.h line 30
struct log_source_dynamic_data;

// tag-lwm2m_block_context
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 440
struct lwm2m_block_context;

// tag-lwm2m_ctx
// file ../../include/zephyr/net/lwm2m.h line 128
struct lwm2m_ctx;

// tag-lwm2m_engine_obj
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 157
struct lwm2m_engine_obj;

// tag-lwm2m_engine_obj_field
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 182
struct lwm2m_engine_obj_field;

// tag-lwm2m_engine_obj_inst
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 188
struct lwm2m_engine_obj_inst;

// tag-lwm2m_engine_res
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 396
struct lwm2m_engine_res;

// tag-lwm2m_engine_res_inst
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 388
struct lwm2m_engine_res_inst;

// tag-lwm2m_input_context
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 462
struct lwm2m_input_context;

// tag-lwm2m_message
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 158
struct lwm2m_message;

// tag-lwm2m_obj_path
// file ../../include/zephyr/net/lwm2m.h line 96
struct lwm2m_obj_path;

// tag-lwm2m_objlnk
// file ../../include/zephyr/net/lwm2m.h line 742
struct lwm2m_objlnk;

// tag-lwm2m_observe_event
// file ../../include/zephyr/net/lwm2m.h line 107
enum lwm2m_observe_event { LWM2M_OBSERVE_EVENT_OBSERVER_ADDED=0, LWM2M_OBSERVE_EVENT_OBSERVER_REMOVED=1, LWM2M_OBSERVE_EVENT_NOTIFY_ACK=2, LWM2M_OBSERVE_EVENT_NOTIFY_TIMEOUT=3 };

// tag-lwm2m_opaque_context
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 435
struct lwm2m_opaque_context;

// tag-lwm2m_output_context
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 449
struct lwm2m_output_context;

// tag-lwm2m_rd_client_event
// file ../../include/zephyr/net/lwm2m.h line 129
enum lwm2m_rd_client_event { LWM2M_RD_CLIENT_EVENT_NONE=0, LWM2M_RD_CLIENT_EVENT_BOOTSTRAP_REG_FAILURE=1, LWM2M_RD_CLIENT_EVENT_BOOTSTRAP_REG_COMPLETE=2, LWM2M_RD_CLIENT_EVENT_BOOTSTRAP_TRANSFER_COMPLETE=3, LWM2M_RD_CLIENT_EVENT_REGISTRATION_FAILURE=4, LWM2M_RD_CLIENT_EVENT_REGISTRATION_COMPLETE=5, LWM2M_RD_CLIENT_EVENT_REG_TIMEOUT=6, LWM2M_RD_CLIENT_EVENT_REG_UPDATE_COMPLETE=7, LWM2M_RD_CLIENT_EVENT_DEREGISTER_FAILURE=8, LWM2M_RD_CLIENT_EVENT_DISCONNECT=9, LWM2M_RD_CLIENT_EVENT_QUEUE_MODE_RX_OFF=10, LWM2M_RD_CLIENT_EVENT_ENGINE_SUSPENDED=11, LWM2M_RD_CLIENT_EVENT_NETWORK_ERROR=12, LWM2M_RD_CLIENT_EVENT_REG_UPDATE=13, LWM2M_RD_CLIENT_EVENT_DEREGISTER=14, LWM2M_RD_CLIENT_EVENT_SERVER_DISABLED=15 };

// tag-lwm2m_reader
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 463
struct lwm2m_reader;

// tag-lwm2m_send_status
// file ../../include/zephyr/net/lwm2m.h line 1568
enum lwm2m_send_status { LWM2M_SEND_STATUS_SUCCESS=0, LWM2M_SEND_STATUS_FAILURE=1, LWM2M_SEND_STATUS_TIMEOUT=2 };

// tag-lwm2m_socket_states
// file ../../include/zephyr/net/lwm2m.h line 149
enum lwm2m_socket_states { LWM2M_SOCKET_STATE_ONGOING=0, LWM2M_SOCKET_STATE_ONE_RESPONSE=1, LWM2M_SOCKET_STATE_LAST=2, LWM2M_SOCKET_STATE_NO_DATA=3 };

// tag-lwm2m_writer
// file ../../subsys/net/lib/lwm2m/lwm2m_object.h line 450
struct lwm2m_writer;

// tag-oma_tlv
// file ../../subsys/net/lib/lwm2m/lwm2m_rw_oma_tlv.c line 82
struct oma_tlv;

// tag-tlv_out_formatter_data
// file ../../subsys/net/lib/lwm2m/lwm2m_rw_oma_tlv.h line 52
struct tlv_out_formatter_data;


typedef void *atomic_ptr_t;
typedef signed long int atomic_t;
typedef signed int (*coap_reply_t)(const struct coap_packet *, struct coap_reply *, const struct sockaddr *);
typedef signed short int int16_t;
typedef signed int int32_t;
typedef signed long long int int64_t;
typedef signed char int8_t;
typedef void (*lwm2m_ctx_event_cb_t)(struct lwm2m_ctx *, enum lwm2m_rd_client_event);
typedef void (*lwm2m_message_timeout_cb_t)(struct lwm2m_message *);
typedef void (*lwm2m_observe_cb_t)(enum lwm2m_observe_event, struct lwm2m_obj_path *, void *);
typedef void (*lwm2m_send_cb_t)(enum lwm2m_send_status);
typedef void (*lwm2m_socket_fault_cb_t)(signed int);
typedef unsigned short int sa_family_t;
typedef unsigned int size_t;
typedef struct _slist sys_slist_t;
typedef struct _snode sys_snode_t;
typedef signed long long int time_t;
typedef unsigned short int uint16_t;
typedef void * (*lwm2m_engine_get_data_cb_t)(uint16_t, uint16_t, uint16_t, size_t *);
typedef struct lwm2m_engine_obj_inst * (*lwm2m_engine_obj_create_cb_t)(uint16_t);
typedef signed int (*lwm2m_engine_user_cb_t)(uint16_t);
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
typedef unsigned char uint8_t;
typedef signed int (*lwm2m_engine_execute_cb_t)(uint16_t, uint8_t *, uint16_t);
typedef signed int (*lwm2m_engine_set_data_cb_t)(uint16_t, uint16_t, uint16_t, uint8_t *, uint16_t, _Bool, size_t, size_t);

// __atomic_compare_exchange_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 26 function atomic_cas
_Bool __atomic_compare_exchange_S32(atomic_t *p_0, atomic_t *p_1, atomic_t *p_2, _Bool p_3, signed int p_4, signed int p_5);
// __atomic_compare_exchange__ptr_start_sub_V_end_sub_
// file ../../include/zephyr/sys/atomic_builtin.h line 34 function atomic_ptr_cas
_Bool __atomic_compare_exchange__ptr_start_sub_V_end_sub_(atomic_ptr_t *p_0, atomic_ptr_t *p_1, atomic_ptr_t *p_2, _Bool p_3, signed int p_4, signed int p_5);
// __atomic_compare_exchange_n_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 26 function atomic_cas
_Bool __atomic_compare_exchange_n_S32(atomic_t *p_0, atomic_t *p_1, atomic_t p_2, _Bool p_3, signed int p_4, signed int p_5);
// __atomic_compare_exchange_n__ptr_start_sub_V_end_sub_
// file ../../include/zephyr/sys/atomic_builtin.h line 34 function atomic_ptr_cas
_Bool __atomic_compare_exchange_n__ptr_start_sub_V_end_sub_(atomic_ptr_t *p_0, atomic_ptr_t *p_1, atomic_ptr_t p_2, _Bool p_3, signed int p_4, signed int p_5);
// __atomic_exchange_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 75 function atomic_set
void __atomic_exchange_S32(atomic_t *p_0, atomic_t *p_1, atomic_t *p_2, signed int p_3);
// __atomic_exchange__ptr_start_sub_V_end_sub_
// file ../../include/zephyr/sys/atomic_builtin.h line 80 function atomic_ptr_set
void __atomic_exchange__ptr_start_sub_V_end_sub_(atomic_ptr_t *p_0, atomic_ptr_t *p_1, atomic_ptr_t *p_2, signed int p_3);
// __atomic_exchange_n_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 75 function atomic_set
atomic_t __atomic_exchange_n_S32(atomic_t *p_0, atomic_t p_1, signed int p_2);
// __atomic_exchange_n__ptr_start_sub_V_end_sub_
// file ../../include/zephyr/sys/atomic_builtin.h line 80 function atomic_ptr_set
atomic_ptr_t __atomic_exchange_n__ptr_start_sub_V_end_sub_(atomic_ptr_t *p_0, atomic_ptr_t p_1, signed int p_2);
// __atomic_fetch_add_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 41 function atomic_add
atomic_t __atomic_fetch_add_S32(atomic_t *p_0, atomic_t p_1, signed int p_2);
// __atomic_fetch_and_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 105 function atomic_and
atomic_t __atomic_fetch_and_S32(atomic_t *p_0, atomic_t p_1, signed int p_2);
// __atomic_fetch_nand_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 110 function atomic_nand
atomic_t __atomic_fetch_nand_S32(atomic_t *p_0, atomic_t p_1, signed int p_2);
// __atomic_fetch_or_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 95 function atomic_or
atomic_t __atomic_fetch_or_S32(atomic_t *p_0, atomic_t p_1, signed int p_2);
// __atomic_fetch_sub_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 46 function atomic_sub
atomic_t __atomic_fetch_sub_S32(atomic_t *p_0, atomic_t p_1, signed int p_2);
// __atomic_fetch_xor_S32
// file ../../include/zephyr/sys/atomic_builtin.h line 100 function atomic_xor
atomic_t __atomic_fetch_xor_S32(atomic_t *p_0, atomic_t p_1, signed int p_2);
// __atomic_load_cS32
// file ../../include/zephyr/sys/atomic_builtin.h line 61 function atomic_get
void __atomic_load_cS32(const atomic_t *p_0, const atomic_t *p_1, signed int p_2);
// __atomic_load_c_ptr_start_sub_V_end_sub_
// file ../../include/zephyr/sys/atomic_builtin.h line 66 function atomic_ptr_get
void __atomic_load_c_ptr_start_sub_V_end_sub_(const atomic_ptr_t *p_0, const atomic_ptr_t *p_1, signed int p_2);
// __atomic_load_n_cS32
// file ../../include/zephyr/sys/atomic_builtin.h line 61 function atomic_get
const atomic_t __atomic_load_n_cS32(const atomic_t *p_0, signed int p_1);
// __atomic_load_n_c_ptr_start_sub_V_end_sub_
// file ../../include/zephyr/sys/atomic_builtin.h line 66 function atomic_ptr_get
const atomic_ptr_t __atomic_load_n_c_ptr_start_sub_V_end_sub_(const atomic_ptr_t *p_0, signed int p_1);
// __atomic_thread_fence
// file <builtin-architecture-strings> line 20
void __atomic_thread_fence(signed int);
// do_read_op_tlv
// file ../../subsys/net/lib/lwm2m/lwm2m_rw_oma_tlv.c line 807
signed int do_read_op_tlv(struct lwm2m_message *msg, signed int content_format);
// do_write_op_tlv
// file ../../subsys/net/lib/lwm2m/lwm2m_rw_oma_tlv.c line 955
signed int do_write_op_tlv(struct lwm2m_message *msg);
// engine_trigger_update
// file ../../subsys/net/lib/lwm2m/lwm2m_rd_client.h line 44
void engine_trigger_update(_Bool);
// harness
// 
void harness(void);
// lwm2m_b32_to_float
// file ../../subsys/net/lib/lwm2m/lwm2m_util.h line 17
signed int lwm2m_b32_to_float(uint8_t *, size_t, double *);
// lwm2m_b64_to_float
// file ../../subsys/net/lib/lwm2m/lwm2m_util.h line 18
signed int lwm2m_b64_to_float(uint8_t *, size_t, double *);
// lwm2m_create_obj_inst
// file ../../subsys/net/lib/lwm2m/lwm2m_registry.h line 20
signed int lwm2m_create_obj_inst(uint16_t, uint16_t, struct lwm2m_engine_obj_inst **);
// lwm2m_engine_get_create_res_inst
// file ../../subsys/net/lib/lwm2m/lwm2m_registry.h line 68
signed int lwm2m_engine_get_create_res_inst(const struct lwm2m_obj_path *, struct lwm2m_engine_res **, struct lwm2m_engine_res_inst **);
// lwm2m_engine_get_opaque_more
// file ../../subsys/net/lib/lwm2m/lwm2m_registry.h line 194
size_t lwm2m_engine_get_opaque_more(struct lwm2m_input_context *, uint8_t *, size_t, struct lwm2m_opaque_context *, _Bool *);
// lwm2m_engine_validate_write_access
// file ../../subsys/net/lib/lwm2m/lwm2m_engine.h line 103
signed int lwm2m_engine_validate_write_access(struct lwm2m_message *, struct lwm2m_engine_obj_inst *, struct lwm2m_engine_obj_field **);
// lwm2m_float_to_b64
// file ../../subsys/net/lib/lwm2m/lwm2m_util.h line 14
signed int lwm2m_float_to_b64(double *, uint8_t *, size_t);
// lwm2m_get_or_create_engine_obj
// file ../../subsys/net/lib/lwm2m/lwm2m_registry.h line 41
signed int lwm2m_get_or_create_engine_obj(struct lwm2m_message *, struct lwm2m_engine_obj_inst **, uint8_t *);
// lwm2m_perform_read_op
// file ../../subsys/net/lib/lwm2m/lwm2m_message_handling.h line 62
signed int lwm2m_perform_read_op(struct lwm2m_message *, uint16_t);
// lwm2m_write_handler
// file ../../subsys/net/lib/lwm2m/lwm2m_message_handling.h line 72
signed int lwm2m_write_handler(struct lwm2m_engine_obj_inst *, struct lwm2m_engine_res *, struct lwm2m_engine_res_inst *, struct lwm2m_engine_obj_field *, struct lwm2m_message *);
// memcpy
// file ../../lib/libc/minimal/include/string.h line 42
extern void * memcpy(void *, const void *, size_t);
// memmove
// file ../../lib/libc/minimal/include/string.h line 41
extern void * memmove(void *, const void *, size_t);
// type_constructor_
// 
void type_constructor_(signed int depth_, _Bool *result_);
// type_constructor__0
// 
void type_constructor__0(signed int depth_$0, enum coap_block_size *result_$0);
// type_constructor__1
// 
void type_constructor__1(signed int depth_$1, _Bool *result_$1 : 1);
// type_constructor_arr_char_22
// 
void type_constructor_arr_char_22(signed int depth_arr_char_22, char (*result_arr_char_22)[22]);
// type_constructor_arr_tag_coap_pending_6
// 
void type_constructor_arr_tag_coap_pending_6(signed int depth_arr_tag_coap_pending_6, struct coap_pending (*result_arr_tag_coap_pending_6)[6]);
// type_constructor_arr_tag_coap_reply_6
// 
void type_constructor_arr_tag_coap_reply_6(signed int depth_arr_tag_coap_reply_6, struct coap_reply (*result_arr_tag_coap_reply_6)[6]);
// type_constructor_arr_uint_304
// 
void type_constructor_arr_uint_304(signed int depth_arr_uint_304, uint8_t (*result_arr_uint_304)[304]);
// type_constructor_arr_uint_64
// 
void type_constructor_arr_uint_64(signed int depth_arr_uint_64, uint8_t (*result_arr_uint_64)[64]);
// type_constructor_arr_uint_8
// 
void type_constructor_arr_uint_8(signed int depth_arr_uint_8, uint8_t (*result_arr_uint_8)[8]);
// type_constructor_char
// 
void type_constructor_char(signed int depth_char, char *result_char);
// type_constructor_int
// 
void type_constructor_int(signed int depth_int, int64_t *result_int);
// type_constructor_int_0
// 
void type_constructor_int_0(signed int depth_int$0, signed int *result_int$0);
// type_constructor_ptr_
// 
void type_constructor_ptr_(signed int depth_ptr_, coap_reply_t *result_ptr_);
// type_constructor_ptr__0
// 
void type_constructor_ptr__0(signed int depth_ptr_$0, void **result_ptr_$0);
// type_constructor_ptr__1
// 
void type_constructor_ptr__1(signed int depth_ptr_$1, signed int (**result_ptr_$1)(struct lwm2m_ctx *));
// type_constructor_ptr__10
// 
void type_constructor_ptr__10(signed int depth_ptr_$10, signed int (**result_ptr_$10)(struct lwm2m_input_context *, _Bool *));
// type_constructor_ptr__11
// 
void type_constructor_ptr__11(signed int depth_ptr_$11, signed int (**result_ptr_$11)(struct lwm2m_input_context *, uint8_t *, size_t, struct lwm2m_opaque_context *, _Bool *));
// type_constructor_ptr__12
// 
void type_constructor_ptr__12(signed int depth_ptr_$12, signed int (**result_ptr_$12)(struct lwm2m_input_context *, struct lwm2m_objlnk *));
// type_constructor_ptr__13
// 
void type_constructor_ptr__13(signed int depth_ptr_$13, signed int (**result_ptr_$13)(struct lwm2m_output_context *, struct lwm2m_obj_path *));
// type_constructor_ptr__14
// 
void type_constructor_ptr__14(signed int depth_ptr_$14, signed int (**result_ptr_$14)(struct lwm2m_output_context *, time_t));
// type_constructor_ptr__15
// 
void type_constructor_ptr__15(signed int depth_ptr_$15, signed int (**result_ptr_$15)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int8_t));
// type_constructor_ptr__16
// 
void type_constructor_ptr__16(signed int depth_ptr_$16, signed int (**result_ptr_$16)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int16_t));
// type_constructor_ptr__17
// 
void type_constructor_ptr__17(signed int depth_ptr_$17, signed int (**result_ptr_$17)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int32_t));
// type_constructor_ptr__18
// 
void type_constructor_ptr__18(signed int depth_ptr_$18, signed int (**result_ptr_$18)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int64_t));
// type_constructor_ptr__19
// 
void type_constructor_ptr__19(signed int depth_ptr_$19, signed int (**result_ptr_$19)(struct lwm2m_output_context *, struct lwm2m_obj_path *, char *, size_t));
// type_constructor_ptr__2
// 
void type_constructor_ptr__2(signed int depth_ptr_$2, lwm2m_socket_fault_cb_t *result_ptr_$2);
// type_constructor_ptr__20
// 
void type_constructor_ptr__20(signed int depth_ptr_$20, signed int (**result_ptr_$20)(struct lwm2m_output_context *, struct lwm2m_obj_path *, double *));
// type_constructor_ptr__21
// 
void type_constructor_ptr__21(signed int depth_ptr_$21, signed int (**result_ptr_$21)(struct lwm2m_output_context *, struct lwm2m_obj_path *, _Bool));
// type_constructor_ptr__22
// 
void type_constructor_ptr__22(signed int depth_ptr_$22, signed int (**result_ptr_$22)(struct lwm2m_output_context *, struct lwm2m_obj_path *, struct lwm2m_objlnk *));
// type_constructor_ptr__23
// 
void type_constructor_ptr__23(signed int depth_ptr_$23, lwm2m_message_timeout_cb_t *result_ptr_$23);
// type_constructor_ptr__24
// 
void type_constructor_ptr__24(signed int depth_ptr_$24, lwm2m_send_cb_t *result_ptr_$24);
// type_constructor_ptr__3
// 
void type_constructor_ptr__3(signed int depth_ptr_$3, lwm2m_observe_cb_t *result_ptr_$3);
// type_constructor_ptr__4
// 
void type_constructor_ptr__4(signed int depth_ptr_$4, lwm2m_ctx_event_cb_t *result_ptr_$4);
// type_constructor_ptr__5
// 
void type_constructor_ptr__5(signed int depth_ptr_$5, void (**result_ptr_$5)(signed int, enum lwm2m_socket_states));
// type_constructor_ptr__6
// 
void type_constructor_ptr__6(signed int depth_ptr_$6, signed int (**result_ptr_$6)(struct lwm2m_input_context *, int32_t *));
// type_constructor_ptr__7
// 
void type_constructor_ptr__7(signed int depth_ptr_$7, signed int (**result_ptr_$7)(struct lwm2m_input_context *, int64_t *));
// type_constructor_ptr__8
// 
void type_constructor_ptr__8(signed int depth_ptr_$8, signed int (**result_ptr_$8)(struct lwm2m_input_context *, uint8_t *, size_t));
// type_constructor_ptr__9
// 
void type_constructor_ptr__9(signed int depth_ptr_$9, signed int (**result_ptr_$9)(struct lwm2m_input_context *, double *));
// type_constructor_ptr_char
// 
void type_constructor_ptr_char(signed int depth_ptr_char, char **result_ptr_char);
// type_constructor_ptr_tag__snode
// 
void type_constructor_ptr_tag__snode(signed int depth_ptr_tag__snode, struct _snode **result_ptr_tag__snode);
// type_constructor_ptr_tag_coap_packet
// 
void type_constructor_ptr_tag_coap_packet(signed int depth_ptr_tag_coap_packet, struct coap_packet **result_ptr_tag_coap_packet);
// type_constructor_ptr_tag_coap_pending
// 
void type_constructor_ptr_tag_coap_pending(signed int depth_ptr_tag_coap_pending, struct coap_pending **result_ptr_tag_coap_pending);
// type_constructor_ptr_tag_coap_reply
// 
void type_constructor_ptr_tag_coap_reply(signed int depth_ptr_tag_coap_reply, struct coap_reply **result_ptr_tag_coap_reply);
// type_constructor_ptr_tag_lwm2m_block_context
// 
void type_constructor_ptr_tag_lwm2m_block_context(signed int depth_ptr_tag_lwm2m_block_context, struct lwm2m_block_context **result_ptr_tag_lwm2m_block_context);
// type_constructor_ptr_tag_lwm2m_ctx
// 
void type_constructor_ptr_tag_lwm2m_ctx(signed int depth_ptr_tag_lwm2m_ctx, struct lwm2m_ctx **result_ptr_tag_lwm2m_ctx);
// type_constructor_ptr_tag_lwm2m_message
// 
void type_constructor_ptr_tag_lwm2m_message(signed int depth_ptr_tag_lwm2m_message, struct lwm2m_message **result_ptr_tag_lwm2m_message);
// type_constructor_ptr_tag_lwm2m_reader
// 
void type_constructor_ptr_tag_lwm2m_reader(signed int depth_ptr_tag_lwm2m_reader, const struct lwm2m_reader **result_ptr_tag_lwm2m_reader);
// type_constructor_ptr_tag_lwm2m_writer
// 
void type_constructor_ptr_tag_lwm2m_writer(signed int depth_ptr_tag_lwm2m_writer, const struct lwm2m_writer **result_ptr_tag_lwm2m_writer);
// type_constructor_ptr_uint
// 
void type_constructor_ptr_uint(signed int depth_ptr_uint, uint8_t **result_ptr_uint);
// type_constructor_tag__slist
// 
void type_constructor_tag__slist(signed int depth_tag__slist, sys_slist_t *result_tag__slist);
// type_constructor_tag__snode
// 
void type_constructor_tag__snode(signed int depth_tag__snode, sys_snode_t *result_tag__snode);
// type_constructor_tag_coap_block_context
// 
void type_constructor_tag_coap_block_context(signed int depth_tag_coap_block_context, struct coap_block_context *result_tag_coap_block_context);
// type_constructor_tag_coap_packet
// 
void type_constructor_tag_coap_packet(signed int depth_tag_coap_packet, struct coap_packet *result_tag_coap_packet);
// type_constructor_tag_coap_pending
// 
void type_constructor_tag_coap_pending(signed int depth_tag_coap_pending, struct coap_pending *result_tag_coap_pending);
// type_constructor_tag_coap_reply
// 
void type_constructor_tag_coap_reply(signed int depth_tag_coap_reply, struct coap_reply *result_tag_coap_reply);
// type_constructor_tag_coap_transmission_parameters
// 
void type_constructor_tag_coap_transmission_parameters(signed int depth_tag_coap_transmission_parameters, struct coap_transmission_parameters *result_tag_coap_transmission_parameters);
// type_constructor_tag_lwm2m_block_context
// 
void type_constructor_tag_lwm2m_block_context(signed int depth_tag_lwm2m_block_context, struct lwm2m_block_context *result_tag_lwm2m_block_context);
// type_constructor_tag_lwm2m_ctx
// 
void type_constructor_tag_lwm2m_ctx(signed int depth_tag_lwm2m_ctx, struct lwm2m_ctx *result_tag_lwm2m_ctx);
// type_constructor_tag_lwm2m_input_context
// 
void type_constructor_tag_lwm2m_input_context(signed int depth_tag_lwm2m_input_context, struct lwm2m_input_context *result_tag_lwm2m_input_context);
// type_constructor_tag_lwm2m_message
// 
void type_constructor_tag_lwm2m_message(signed int depth_tag_lwm2m_message, struct lwm2m_message *result_tag_lwm2m_message);
// type_constructor_tag_lwm2m_obj_path
// 
void type_constructor_tag_lwm2m_obj_path(signed int depth_tag_lwm2m_obj_path, struct lwm2m_obj_path *result_tag_lwm2m_obj_path);
// type_constructor_tag_lwm2m_opaque_context
// 
void type_constructor_tag_lwm2m_opaque_context(signed int depth_tag_lwm2m_opaque_context, struct lwm2m_opaque_context *result_tag_lwm2m_opaque_context);
// type_constructor_tag_lwm2m_output_context
// 
void type_constructor_tag_lwm2m_output_context(signed int depth_tag_lwm2m_output_context, struct lwm2m_output_context *result_tag_lwm2m_output_context);
// type_constructor_tag_lwm2m_reader
// 
void type_constructor_tag_lwm2m_reader(signed int depth_tag_lwm2m_reader, struct lwm2m_reader *result_tag_lwm2m_reader);
// type_constructor_tag_lwm2m_writer
// 
void type_constructor_tag_lwm2m_writer(signed int depth_tag_lwm2m_writer, struct lwm2m_writer *result_tag_lwm2m_writer);
// type_constructor_tag_sockaddr
// 
void type_constructor_tag_sockaddr(signed int depth_tag_sockaddr, struct sockaddr *result_tag_sockaddr);
// type_constructor_uint
// 
void type_constructor_uint(signed int depth_uint, sa_family_t *result_uint);
// type_constructor_uint_0
// 
void type_constructor_uint_0(signed int depth_uint$0, uint32_t *result_uint$0);
// type_constructor_uint_1
// 
void type_constructor_uint_1(signed int depth_uint$1, uint8_t *result_uint$1);
// z_log_minimal_printk
// file ../../include/zephyr/logging/log_core.h line 161
void z_log_minimal_printk(const char *, ...);
// z_log_msg_runtime_vcreate
// file ../../include/zephyr/logging/log_msg.h line 678
void z_log_msg_runtime_vcreate(uint8_t, const void *, uint8_t, const void *, size_t, uint32_t, const char *, va_list);

struct _slist
{
  // head
  sys_snode_t *head;
  // tail
  sys_snode_t *tail;
};

struct _snode
{
  // next
  struct _snode *next;
};

struct coap_block_context
{
  // total_size
  size_t total_size;
  // current
  size_t current;
  // block_size
  enum coap_block_size block_size;
};

struct coap_packet
{
  // data
  uint8_t *data;
  // offset
  uint16_t offset;
  // max_len
  uint16_t max_len;
  // hdr_len
  uint8_t hdr_len;
  // opt_len
  uint16_t opt_len;
  // delta
  uint16_t delta;
};

struct coap_transmission_parameters
{
  // ack_timeout
  uint32_t ack_timeout;
  // coap_backoff_percent
  uint16_t coap_backoff_percent;
  // max_retransmission
  uint8_t max_retransmission;
};

struct coap_pending
{
  // addr
  struct sockaddr addr;
  // t0
  int64_t t0;
  // timeout
  uint32_t timeout;
  // id
  uint16_t id;
  // data
  uint8_t *data;
  // len
  uint16_t len;
  // retries
  uint8_t retries;
  // params
  struct coap_transmission_parameters params;
};

struct coap_reply
{
  // reply
  coap_reply_t reply;
  // user_data
  void *user_data;
  // age
  signed int age;
  // id
  uint16_t id;
  // token
  uint8_t token[8];
  // tkl
  uint8_t tkl;
};

struct log_source_const_data
{
  // name
  const char *name;
  // level
  uint8_t level;
};

struct log_source_dynamic_data
{
  // filters
  uint32_t filters;
};

struct lwm2m_opaque_context
{
  // len
  size_t len;
  // remaining
  size_t remaining;
};

struct lwm2m_obj_path
{
  // obj_id
  uint16_t obj_id;
  // obj_inst_id
  uint16_t obj_inst_id;
  // res_id
  uint16_t res_id;
  // res_inst_id
  uint16_t res_inst_id;
  // level
  uint8_t level;
};

struct lwm2m_block_context
{
  // ctx
  struct coap_block_context ctx;
  // opaque
  struct lwm2m_opaque_context opaque;
  // timestamp
  int64_t timestamp;
  // expected
  uint32_t expected;
  // last_block
  _Bool last_block : 1;
  // path
  struct lwm2m_obj_path path;
};

struct lwm2m_ctx
{
  // remote_addr
  struct sockaddr remote_addr;
  // pendings
  struct coap_pending pendings[6];
  // replies
  struct coap_reply replies[6];
  // pending_sends
  sys_slist_t pending_sends;
  // queued_messages
  sys_slist_t queued_messages;
  // observer
  sys_slist_t observer;
  // processed_req
  void *processed_req;
  // tls_tag
  signed int tls_tag;
  // desthostname
  char *desthostname;
  // desthostnamelen
  uint16_t desthostnamelen;
  // hostname_verify
  _Bool hostname_verify;
  // load_credentials
  signed int (*load_credentials)(struct lwm2m_ctx *);
  // set_socketoptions
  signed int (*set_socketoptions)(struct lwm2m_ctx *);
  // use_dtls
  _Bool use_dtls;
  // connection_suspended
  _Bool connection_suspended;
  // buffer_client_messages
  _Bool buffer_client_messages;
  // sec_obj_inst
  signed int sec_obj_inst;
  // srv_obj_inst
  signed int srv_obj_inst;
  // bootstrap_mode
  _Bool bootstrap_mode;
  // sock_fd
  signed int sock_fd;
  // fault_cb
  lwm2m_socket_fault_cb_t fault_cb;
  // observe_cb
  lwm2m_observe_cb_t observe_cb;
  // event_cb
  lwm2m_ctx_event_cb_t event_cb;
  // validate_buf
  uint8_t validate_buf[64];
  // set_socket_state
  void (*set_socket_state)(signed int, enum lwm2m_socket_states);
};

struct lwm2m_engine_obj
{
  // node
  sys_snode_t node;
  // fields
  struct lwm2m_engine_obj_field *fields;
  // create_cb
  lwm2m_engine_obj_create_cb_t create_cb;
  // delete_cb
  lwm2m_engine_user_cb_t delete_cb;
  // user_create_cb
  lwm2m_engine_user_cb_t user_create_cb;
  // user_delete_cb
  lwm2m_engine_user_cb_t user_delete_cb;
  // obj_id
  uint16_t obj_id;
  // field_count
  uint16_t field_count;
  // instance_count
  uint16_t instance_count;
  // max_instance_count
  uint16_t max_instance_count;
  // version_major
  uint8_t version_major;
  // version_minor
  uint8_t version_minor;
  // is_core
  _Bool is_core : 1;
};

struct lwm2m_engine_obj_field
{
  // res_id
  uint16_t res_id;
  // permissions
  uint8_t permissions;
  // data_type
  uint8_t data_type;
};

struct lwm2m_engine_obj_inst
{
  // node
  sys_snode_t node;
  // obj
  struct lwm2m_engine_obj *obj;
  // resources
  struct lwm2m_engine_res *resources;
  // obj_inst_id
  uint16_t obj_inst_id;
  // resource_count
  uint16_t resource_count;
};

struct lwm2m_engine_res
{
  // read_cb
  lwm2m_engine_get_data_cb_t read_cb;
  // pre_write_cb
  lwm2m_engine_get_data_cb_t pre_write_cb;
  // validate_cb
  lwm2m_engine_set_data_cb_t validate_cb;
  // post_write_cb
  lwm2m_engine_set_data_cb_t post_write_cb;
  // execute_cb
  lwm2m_engine_execute_cb_t execute_cb;
  // res_instances
  struct lwm2m_engine_res_inst *res_instances;
  // res_id
  uint16_t res_id;
  // res_inst_count
  uint8_t res_inst_count;
  // multi_res_inst
  _Bool multi_res_inst;
};

struct lwm2m_engine_res_inst
{
  // data_ptr
  void *data_ptr;
  // max_data_len
  uint16_t max_data_len;
  // data_len
  uint16_t data_len;
  // res_inst_id
  uint16_t res_inst_id;
  // data_flags
  uint8_t data_flags;
};

struct lwm2m_input_context
{
  // reader
  const struct lwm2m_reader *reader;
  // in_cpkt
  struct coap_packet *in_cpkt;
  // offset
  uint16_t offset;
  // block_ctx
  struct lwm2m_block_context *block_ctx;
  // user_data
  void *user_data;
};

struct lwm2m_output_context
{
  // writer
  const struct lwm2m_writer *writer;
  // out_cpkt
  struct coap_packet *out_cpkt;
  // user_data
  void *user_data;
};

struct lwm2m_message
{
  // node
  sys_snode_t node;
  // ctx
  struct lwm2m_ctx *ctx;
  // in
  struct lwm2m_input_context in;
  // out
  struct lwm2m_output_context out;
  // path
  struct lwm2m_obj_path path;
  // cpkt
  struct coap_packet cpkt;
  // msg_data
  uint8_t msg_data[304];
  // pending
  struct coap_pending *pending;
  // reply
  struct coap_reply *reply;
  // token
  uint8_t *token;
  // reply_cb
  coap_reply_t reply_cb;
  // message_timeout_cb
  lwm2m_message_timeout_cb_t message_timeout_cb;
  // send_status_cb
  lwm2m_send_cb_t send_status_cb;
  // mid
  uint16_t mid;
  // type
  uint8_t type;
  // code
  uint8_t code;
  // tkl
  uint8_t tkl;
  // operation
  uint8_t operation;
  // acknowledged
  _Bool acknowledged : 1;
  // block_send
  _Bool block_send : 1;
};

struct lwm2m_objlnk
{
  // obj_id
  uint16_t obj_id;
  // obj_inst
  uint16_t obj_inst;
};

struct lwm2m_reader
{
  // get_s32
  signed int (*get_s32)(struct lwm2m_input_context *, int32_t *);
  // get_s64
  signed int (*get_s64)(struct lwm2m_input_context *, int64_t *);
  // get_time
  signed int (*get_time)(struct lwm2m_input_context *, time_t *);
  // get_string
  signed int (*get_string)(struct lwm2m_input_context *, uint8_t *, size_t);
  // get_float
  signed int (*get_float)(struct lwm2m_input_context *, double *);
  // get_bool
  signed int (*get_bool)(struct lwm2m_input_context *, _Bool *);
  // get_opaque
  signed int (*get_opaque)(struct lwm2m_input_context *, uint8_t *, size_t, struct lwm2m_opaque_context *, _Bool *);
  // get_objlnk
  signed int (*get_objlnk)(struct lwm2m_input_context *, struct lwm2m_objlnk *);
};

struct lwm2m_writer
{
  // put_begin
  signed int (*put_begin)(struct lwm2m_output_context *, struct lwm2m_obj_path *);
  // put_end
  signed int (*put_end)(struct lwm2m_output_context *, struct lwm2m_obj_path *);
  // put_begin_oi
  signed int (*put_begin_oi)(struct lwm2m_output_context *, struct lwm2m_obj_path *);
  // put_end_oi
  signed int (*put_end_oi)(struct lwm2m_output_context *, struct lwm2m_obj_path *);
  // put_begin_r
  signed int (*put_begin_r)(struct lwm2m_output_context *, struct lwm2m_obj_path *);
  // put_end_r
  signed int (*put_end_r)(struct lwm2m_output_context *, struct lwm2m_obj_path *);
  // put_begin_ri
  signed int (*put_begin_ri)(struct lwm2m_output_context *, struct lwm2m_obj_path *);
  // put_end_ri
  signed int (*put_end_ri)(struct lwm2m_output_context *, struct lwm2m_obj_path *);
  // put_data_timestamp
  signed int (*put_data_timestamp)(struct lwm2m_output_context *, time_t);
  // put_s8
  signed int (*put_s8)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int8_t);
  // put_s16
  signed int (*put_s16)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int16_t);
  // put_s32
  signed int (*put_s32)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int32_t);
  // put_s64
  signed int (*put_s64)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int64_t);
  // put_time
  signed int (*put_time)(struct lwm2m_output_context *, struct lwm2m_obj_path *, time_t);
  // put_string
  signed int (*put_string)(struct lwm2m_output_context *, struct lwm2m_obj_path *, char *, size_t);
  // put_float
  signed int (*put_float)(struct lwm2m_output_context *, struct lwm2m_obj_path *, double *);
  // put_bool
  signed int (*put_bool)(struct lwm2m_output_context *, struct lwm2m_obj_path *, _Bool);
  // put_opaque
  signed int (*put_opaque)(struct lwm2m_output_context *, struct lwm2m_obj_path *, char *, size_t);
  // put_objlnk
  signed int (*put_objlnk)(struct lwm2m_output_context *, struct lwm2m_obj_path *, struct lwm2m_objlnk *);
  // put_corelink
  signed int (*put_corelink)(struct lwm2m_output_context *, const struct lwm2m_obj_path *);
};

struct oma_tlv
{
  // type
  uint8_t type;
  // id
  uint16_t id;
  // length
  uint32_t length;
};

struct tlv_out_formatter_data
{
  // mark_pos
  uint16_t mark_pos;
  // mark_pos_oi
  uint16_t mark_pos_oi;
  // mark_pos_ri
  uint16_t mark_pos_ri;
  // writer_flags
  uint8_t writer_flags;
};


// __GOTO_HARNESS::has_seen_tag__snode
// file __GOTO_HARNESSharness.c
signed int has_seen_tag__snode=0;
// __GOTO_HARNESS::has_seen_tag_coap_packet
// file __GOTO_HARNESSharness.c
signed int has_seen_tag_coap_packet=0;
// __GOTO_HARNESS::has_seen_tag_coap_pending
// file __GOTO_HARNESSharness.c
signed int has_seen_tag_coap_pending=0;
// __GOTO_HARNESS::has_seen_tag_coap_reply
// file __GOTO_HARNESSharness.c
signed int has_seen_tag_coap_reply=0;
// __GOTO_HARNESS::has_seen_tag_lwm2m_block_context
// file __GOTO_HARNESSharness.c
signed int has_seen_tag_lwm2m_block_context=0;
// __GOTO_HARNESS::has_seen_tag_lwm2m_ctx
// file __GOTO_HARNESSharness.c
signed int has_seen_tag_lwm2m_ctx=0;
// __GOTO_HARNESS::has_seen_tag_lwm2m_message
// file __GOTO_HARNESSharness.c
signed int has_seen_tag_lwm2m_message=0;
// __GOTO_HARNESS::has_seen_tag_lwm2m_reader
// file __GOTO_HARNESSharness.c
signed int has_seen_tag_lwm2m_reader=0;
// __GOTO_HARNESS::has_seen_tag_lwm2m_writer
// file __GOTO_HARNESSharness.c
signed int has_seen_tag_lwm2m_writer=0;
// __GOTO_HARNESS::max_depth
// file __GOTO_HARNESSharness.c
signed int max_depth=2;
// __GOTO_HARNESS::min_depth
// file __GOTO_HARNESSharness.c
signed int min_depth=1;
// log_const_net_lwm2m_oma_tlv
// file ../../subsys/net/lib/lwm2m/lwm2m_rw_oma_tlv.c line 64
extern const struct log_source_const_data log_const_net_lwm2m_oma_tlv;
// log_dynamic_net_lwm2m_oma_tlv
// file ../../subsys/net/lib/lwm2m/lwm2m_rw_oma_tlv.c line 64
extern struct log_source_dynamic_data log_dynamic_net_lwm2m_oma_tlv;
// oma_tlv_reader
// file ../../subsys/net/lib/lwm2m/lwm2m_rw_oma_tlv.c line 796
extern const struct lwm2m_reader oma_tlv_reader;
// oma_tlv_writer
// file ../../subsys/net/lib/lwm2m/lwm2m_rw_oma_tlv.c line 779
extern const struct lwm2m_writer oma_tlv_writer;

// harness
// 
void harness(void)
{
  struct lwm2m_message *msg;
  type_constructor_ptr_tag_lwm2m_message(0, &msg);
  do_write_op_tlv(msg);
  free(msg);
}

// type_constructor_
// 
void type_constructor_(signed int depth_, _Bool *result_)
{
  _Bool nondet$5;
  *result_ = nondet$5;
}

// type_constructor__0
// 
void type_constructor__0(signed int depth_$0, enum coap_block_size *result_$0)
{
  enum coap_block_size nondet$6;
  *result_$0 = nondet$6;
}

// type_constructor__1
// 
void type_constructor__1(signed int depth_$1, _Bool *result_$1 : 1)
{
  _Bool nondet$7;
  *result_$1 = nondet$7;
}

// type_constructor_arr_char_22
// 
void type_constructor_arr_char_22(signed int depth_arr_char_22, char (*result_arr_char_22)[22])
{
  type_constructor_char(depth_arr_char_22, *result_arr_char_22);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[1u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[2u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[3u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[4u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[5u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[6u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[7u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[8u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[9u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[10u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[11u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[12u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[13u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[14u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[15u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[16u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[17u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[18u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[19u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[20u]);
  type_constructor_char(depth_arr_char_22, &(*result_arr_char_22)[21u]);
}

// type_constructor_arr_tag_coap_pending_6
// 
void type_constructor_arr_tag_coap_pending_6(signed int depth_arr_tag_coap_pending_6, struct coap_pending (*result_arr_tag_coap_pending_6)[6])
{
  type_constructor_tag_coap_pending(depth_arr_tag_coap_pending_6, *result_arr_tag_coap_pending_6);
  type_constructor_tag_coap_pending(depth_arr_tag_coap_pending_6, &(*result_arr_tag_coap_pending_6)[1u]);
  type_constructor_tag_coap_pending(depth_arr_tag_coap_pending_6, &(*result_arr_tag_coap_pending_6)[2u]);
  type_constructor_tag_coap_pending(depth_arr_tag_coap_pending_6, &(*result_arr_tag_coap_pending_6)[3u]);
  type_constructor_tag_coap_pending(depth_arr_tag_coap_pending_6, &(*result_arr_tag_coap_pending_6)[4u]);
  type_constructor_tag_coap_pending(depth_arr_tag_coap_pending_6, &(*result_arr_tag_coap_pending_6)[5u]);
}

// type_constructor_arr_tag_coap_reply_6
// 
void type_constructor_arr_tag_coap_reply_6(signed int depth_arr_tag_coap_reply_6, struct coap_reply (*result_arr_tag_coap_reply_6)[6])
{
  type_constructor_tag_coap_reply(depth_arr_tag_coap_reply_6, *result_arr_tag_coap_reply_6);
  type_constructor_tag_coap_reply(depth_arr_tag_coap_reply_6, &(*result_arr_tag_coap_reply_6)[1u]);
  type_constructor_tag_coap_reply(depth_arr_tag_coap_reply_6, &(*result_arr_tag_coap_reply_6)[2u]);
  type_constructor_tag_coap_reply(depth_arr_tag_coap_reply_6, &(*result_arr_tag_coap_reply_6)[3u]);
  type_constructor_tag_coap_reply(depth_arr_tag_coap_reply_6, &(*result_arr_tag_coap_reply_6)[4u]);
  type_constructor_tag_coap_reply(depth_arr_tag_coap_reply_6, &(*result_arr_tag_coap_reply_6)[5u]);
}

// type_constructor_arr_uint_304
// 
void type_constructor_arr_uint_304(signed int depth_arr_uint_304, uint8_t (*result_arr_uint_304)[304])
{
  type_constructor_uint_1(depth_arr_uint_304, *result_arr_uint_304);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[1u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[2u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[3u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[4u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[5u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[6u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[7u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[8u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[9u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[10u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[11u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[12u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[13u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[14u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[15u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[16u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[17u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[18u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[19u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[20u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[21u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[22u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[23u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[24u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[25u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[26u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[27u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[28u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[29u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[30u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[31u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[32u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[33u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[34u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[35u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[36u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[37u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[38u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[39u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[40u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[41u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[42u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[43u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[44u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[45u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[46u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[47u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[48u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[49u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[50u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[51u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[52u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[53u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[54u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[55u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[56u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[57u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[58u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[59u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[60u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[61u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[62u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[63u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[64u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[65u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[66u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[67u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[68u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[69u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[70u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[71u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[72u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[73u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[74u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[75u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[76u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[77u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[78u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[79u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[80u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[81u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[82u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[83u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[84u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[85u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[86u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[87u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[88u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[89u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[90u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[91u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[92u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[93u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[94u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[95u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[96u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[97u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[98u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[99u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[100u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[101u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[102u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[103u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[104u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[105u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[106u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[107u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[108u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[109u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[110u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[111u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[112u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[113u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[114u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[115u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[116u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[117u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[118u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[119u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[120u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[121u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[122u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[123u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[124u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[125u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[126u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[127u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[128u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[129u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[130u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[131u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[132u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[133u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[134u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[135u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[136u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[137u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[138u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[139u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[140u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[141u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[142u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[143u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[144u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[145u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[146u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[147u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[148u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[149u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[150u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[151u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[152u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[153u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[154u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[155u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[156u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[157u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[158u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[159u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[160u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[161u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[162u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[163u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[164u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[165u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[166u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[167u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[168u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[169u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[170u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[171u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[172u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[173u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[174u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[175u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[176u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[177u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[178u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[179u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[180u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[181u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[182u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[183u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[184u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[185u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[186u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[187u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[188u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[189u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[190u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[191u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[192u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[193u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[194u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[195u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[196u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[197u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[198u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[199u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[200u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[201u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[202u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[203u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[204u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[205u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[206u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[207u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[208u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[209u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[210u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[211u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[212u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[213u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[214u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[215u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[216u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[217u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[218u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[219u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[220u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[221u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[222u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[223u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[224u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[225u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[226u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[227u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[228u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[229u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[230u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[231u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[232u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[233u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[234u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[235u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[236u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[237u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[238u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[239u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[240u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[241u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[242u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[243u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[244u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[245u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[246u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[247u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[248u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[249u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[250u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[251u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[252u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[253u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[254u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[255u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[256u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[257u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[258u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[259u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[260u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[261u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[262u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[263u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[264u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[265u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[266u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[267u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[268u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[269u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[270u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[271u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[272u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[273u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[274u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[275u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[276u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[277u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[278u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[279u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[280u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[281u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[282u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[283u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[284u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[285u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[286u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[287u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[288u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[289u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[290u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[291u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[292u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[293u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[294u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[295u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[296u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[297u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[298u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[299u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[300u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[301u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[302u]);
  type_constructor_uint_1(depth_arr_uint_304, &(*result_arr_uint_304)[303u]);
}

// type_constructor_arr_uint_64
// 
void type_constructor_arr_uint_64(signed int depth_arr_uint_64, uint8_t (*result_arr_uint_64)[64])
{
  type_constructor_uint_1(depth_arr_uint_64, *result_arr_uint_64);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[1u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[2u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[3u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[4u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[5u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[6u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[7u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[8u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[9u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[10u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[11u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[12u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[13u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[14u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[15u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[16u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[17u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[18u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[19u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[20u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[21u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[22u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[23u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[24u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[25u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[26u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[27u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[28u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[29u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[30u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[31u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[32u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[33u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[34u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[35u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[36u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[37u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[38u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[39u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[40u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[41u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[42u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[43u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[44u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[45u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[46u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[47u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[48u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[49u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[50u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[51u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[52u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[53u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[54u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[55u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[56u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[57u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[58u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[59u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[60u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[61u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[62u]);
  type_constructor_uint_1(depth_arr_uint_64, &(*result_arr_uint_64)[63u]);
}

// type_constructor_arr_uint_8
// 
void type_constructor_arr_uint_8(signed int depth_arr_uint_8, uint8_t (*result_arr_uint_8)[8])
{
  type_constructor_uint_1(depth_arr_uint_8, *result_arr_uint_8);
  type_constructor_uint_1(depth_arr_uint_8, &(*result_arr_uint_8)[1u]);
  type_constructor_uint_1(depth_arr_uint_8, &(*result_arr_uint_8)[2u]);
  type_constructor_uint_1(depth_arr_uint_8, &(*result_arr_uint_8)[3u]);
  type_constructor_uint_1(depth_arr_uint_8, &(*result_arr_uint_8)[4u]);
  type_constructor_uint_1(depth_arr_uint_8, &(*result_arr_uint_8)[5u]);
  type_constructor_uint_1(depth_arr_uint_8, &(*result_arr_uint_8)[6u]);
  type_constructor_uint_1(depth_arr_uint_8, &(*result_arr_uint_8)[7u]);
}

// type_constructor_char
// 
void type_constructor_char(signed int depth_char, char *result_char)
{
  char nondet$0;
  *result_char = nondet$0;
}

// type_constructor_int
// 
void type_constructor_int(signed int depth_int, int64_t *result_int)
{
  int64_t nondet$1;
  *result_int = nondet$1;
}

// type_constructor_int_0
// 
void type_constructor_int_0(signed int depth_int$0, signed int *result_int$0)
{
  signed int nondet$4;
  *result_int$0 = nondet$4;
}

// type_constructor_ptr_
// 
void type_constructor_ptr_(signed int depth_ptr_, coap_reply_t *result_ptr_)
{
  signed int function_pointer_selector;
}

// type_constructor_ptr__0
// 
void type_constructor_ptr__0(signed int depth_ptr_$0, void **result_ptr_$0)
{
  *result_ptr_$0 = NULL;
}

// type_constructor_ptr__1
// 
void type_constructor_ptr__1(signed int depth_ptr_$1, signed int (**result_ptr_$1)(struct lwm2m_ctx *))
{
  signed int function_pointer_selector$0;
}

// type_constructor_ptr__10
// 
void type_constructor_ptr__10(signed int depth_ptr_$10, signed int (**result_ptr_$10)(struct lwm2m_input_context *, _Bool *))
{
  signed int function_pointer_selector$9;
}

// type_constructor_ptr__11
// 
void type_constructor_ptr__11(signed int depth_ptr_$11, signed int (**result_ptr_$11)(struct lwm2m_input_context *, uint8_t *, size_t, struct lwm2m_opaque_context *, _Bool *))
{
  signed int function_pointer_selector$10;
}

// type_constructor_ptr__12
// 
void type_constructor_ptr__12(signed int depth_ptr_$12, signed int (**result_ptr_$12)(struct lwm2m_input_context *, struct lwm2m_objlnk *))
{
  signed int function_pointer_selector$11;
}

// type_constructor_ptr__13
// 
void type_constructor_ptr__13(signed int depth_ptr_$13, signed int (**result_ptr_$13)(struct lwm2m_output_context *, struct lwm2m_obj_path *))
{
  signed int function_pointer_selector$12;
}

// type_constructor_ptr__14
// 
void type_constructor_ptr__14(signed int depth_ptr_$14, signed int (**result_ptr_$14)(struct lwm2m_output_context *, time_t))
{
  signed int function_pointer_selector$13;
}

// type_constructor_ptr__15
// 
void type_constructor_ptr__15(signed int depth_ptr_$15, signed int (**result_ptr_$15)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int8_t))
{
  signed int function_pointer_selector$14;
}

// type_constructor_ptr__16
// 
void type_constructor_ptr__16(signed int depth_ptr_$16, signed int (**result_ptr_$16)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int16_t))
{
  signed int function_pointer_selector$15;
}

// type_constructor_ptr__17
// 
void type_constructor_ptr__17(signed int depth_ptr_$17, signed int (**result_ptr_$17)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int32_t))
{
  signed int function_pointer_selector$16;
}

// type_constructor_ptr__18
// 
void type_constructor_ptr__18(signed int depth_ptr_$18, signed int (**result_ptr_$18)(struct lwm2m_output_context *, struct lwm2m_obj_path *, int64_t))
{
  signed int function_pointer_selector$17;
}

// type_constructor_ptr__19
// 
void type_constructor_ptr__19(signed int depth_ptr_$19, signed int (**result_ptr_$19)(struct lwm2m_output_context *, struct lwm2m_obj_path *, char *, size_t))
{
  signed int function_pointer_selector$18;
}

// type_constructor_ptr__2
// 
void type_constructor_ptr__2(signed int depth_ptr_$2, lwm2m_socket_fault_cb_t *result_ptr_$2)
{
  signed int function_pointer_selector$1;
  *result_ptr_$2 = __atomic_thread_fence;
}

// type_constructor_ptr__20
// 
void type_constructor_ptr__20(signed int depth_ptr_$20, signed int (**result_ptr_$20)(struct lwm2m_output_context *, struct lwm2m_obj_path *, double *))
{
  signed int function_pointer_selector$19;
}

// type_constructor_ptr__21
// 
void type_constructor_ptr__21(signed int depth_ptr_$21, signed int (**result_ptr_$21)(struct lwm2m_output_context *, struct lwm2m_obj_path *, _Bool))
{
  signed int function_pointer_selector$20;
}

// type_constructor_ptr__22
// 
void type_constructor_ptr__22(signed int depth_ptr_$22, signed int (**result_ptr_$22)(struct lwm2m_output_context *, struct lwm2m_obj_path *, struct lwm2m_objlnk *))
{
  signed int function_pointer_selector$21;
}

// type_constructor_ptr__23
// 
void type_constructor_ptr__23(signed int depth_ptr_$23, lwm2m_message_timeout_cb_t *result_ptr_$23)
{
  signed int function_pointer_selector$22;
}

// type_constructor_ptr__24
// 
void type_constructor_ptr__24(signed int depth_ptr_$24, lwm2m_send_cb_t *result_ptr_$24)
{
  signed int function_pointer_selector$23;
}

// type_constructor_ptr__3
// 
void type_constructor_ptr__3(signed int depth_ptr_$3, lwm2m_observe_cb_t *result_ptr_$3)
{
  signed int function_pointer_selector$2;
}

// type_constructor_ptr__4
// 
void type_constructor_ptr__4(signed int depth_ptr_$4, lwm2m_ctx_event_cb_t *result_ptr_$4)
{
  signed int function_pointer_selector$3;
}

// type_constructor_ptr__5
// 
void type_constructor_ptr__5(signed int depth_ptr_$5, void (**result_ptr_$5)(signed int, enum lwm2m_socket_states))
{
  signed int function_pointer_selector$4;
}

// type_constructor_ptr__6
// 
void type_constructor_ptr__6(signed int depth_ptr_$6, signed int (**result_ptr_$6)(struct lwm2m_input_context *, int32_t *))
{
  signed int function_pointer_selector$5;
}

// type_constructor_ptr__7
// 
void type_constructor_ptr__7(signed int depth_ptr_$7, signed int (**result_ptr_$7)(struct lwm2m_input_context *, int64_t *))
{
  signed int function_pointer_selector$6;
}

// type_constructor_ptr__8
// 
void type_constructor_ptr__8(signed int depth_ptr_$8, signed int (**result_ptr_$8)(struct lwm2m_input_context *, uint8_t *, size_t))
{
  signed int function_pointer_selector$7;
}

// type_constructor_ptr__9
// 
void type_constructor_ptr__9(signed int depth_ptr_$9, signed int (**result_ptr_$9)(struct lwm2m_input_context *, double *))
{
  signed int function_pointer_selector$8;
}

// type_constructor_ptr_char
// 
void type_constructor_ptr_char(signed int depth_ptr_char, char **result_ptr_char)
{
  if(depth_ptr_char >= max_depth)
    *result_ptr_char = ((char *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$3;
    if(!(depth_ptr_char >= min_depth) || should_recurse_nondet$3)
    {
      char *local_result$3=malloc(1u);
      type_constructor_char(depth_ptr_char + 1, &(*local_result$3));
      *result_ptr_char = local_result$3;
    }

    else
      *result_ptr_char = ((char *)NULL);
  }
}

// type_constructor_ptr_tag__snode
// 
void type_constructor_ptr_tag__snode(signed int depth_ptr_tag__snode, struct _snode **result_ptr_tag__snode)
{
  if(depth_ptr_tag__snode >= max_depth && has_seen_tag__snode == 1)
    *result_ptr_tag__snode = ((struct _snode *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$0;
    if(!(depth_ptr_tag__snode >= min_depth) || should_recurse_nondet$0)
    {
      signed int has_seen_prev_tag__snode=has_seen_tag__snode;
      has_seen_tag__snode = 1;
      struct _snode *local_result$0=malloc(4u);
      type_constructor_tag__snode(depth_ptr_tag__snode + 1, &(*local_result$0));
      *result_ptr_tag__snode = local_result$0;
      has_seen_tag__snode = has_seen_prev_tag__snode;
    }

    else
      *result_ptr_tag__snode = ((struct _snode *)NULL);
  }
}

// type_constructor_ptr_tag_coap_packet
// 
void type_constructor_ptr_tag_coap_packet(signed int depth_ptr_tag_coap_packet, struct coap_packet **result_ptr_tag_coap_packet)
{
  if(depth_ptr_tag_coap_packet >= max_depth && has_seen_tag_coap_packet == 1)
    *result_ptr_tag_coap_packet = ((struct coap_packet *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$5;
    if(!(depth_ptr_tag_coap_packet >= min_depth) || should_recurse_nondet$5)
    {
      signed int has_seen_prev_tag_coap_packet=has_seen_tag_coap_packet;
      has_seen_tag_coap_packet = 1;
      struct coap_packet *local_result$5=malloc(16u);
      type_constructor_tag_coap_packet(depth_ptr_tag_coap_packet + 1, &(*local_result$5));
      *result_ptr_tag_coap_packet = local_result$5;
      has_seen_tag_coap_packet = has_seen_prev_tag_coap_packet;
    }

    else
      *result_ptr_tag_coap_packet = ((struct coap_packet *)NULL);
  }
}

// type_constructor_ptr_tag_coap_pending
// 
void type_constructor_ptr_tag_coap_pending(signed int depth_ptr_tag_coap_pending, struct coap_pending **result_ptr_tag_coap_pending)
{
  if(depth_ptr_tag_coap_pending >= max_depth && has_seen_tag_coap_pending == 1)
    *result_ptr_tag_coap_pending = ((struct coap_pending *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$8;
    if(!(depth_ptr_tag_coap_pending >= min_depth) || should_recurse_nondet$8)
    {
      signed int has_seen_prev_tag_coap_pending=has_seen_tag_coap_pending;
      has_seen_tag_coap_pending = 1;
      struct coap_pending *local_result$8=malloc(56u);
      type_constructor_tag_coap_pending(depth_ptr_tag_coap_pending + 1, &(*local_result$8));
      *result_ptr_tag_coap_pending = local_result$8;
      has_seen_tag_coap_pending = has_seen_prev_tag_coap_pending;
    }

    else
      *result_ptr_tag_coap_pending = ((struct coap_pending *)NULL);
  }
}

// type_constructor_ptr_tag_coap_reply
// 
void type_constructor_ptr_tag_coap_reply(signed int depth_ptr_tag_coap_reply, struct coap_reply **result_ptr_tag_coap_reply)
{
  if(depth_ptr_tag_coap_reply >= max_depth && has_seen_tag_coap_reply == 1)
    *result_ptr_tag_coap_reply = ((struct coap_reply *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$9;
    if(!(depth_ptr_tag_coap_reply >= min_depth) || should_recurse_nondet$9)
    {
      signed int has_seen_prev_tag_coap_reply=has_seen_tag_coap_reply;
      has_seen_tag_coap_reply = 1;
      struct coap_reply *local_result$9=malloc(24u);
      type_constructor_tag_coap_reply(depth_ptr_tag_coap_reply + 1, &(*local_result$9));
      *result_ptr_tag_coap_reply = local_result$9;
      has_seen_tag_coap_reply = has_seen_prev_tag_coap_reply;
    }

    else
      *result_ptr_tag_coap_reply = ((struct coap_reply *)NULL);
  }
}

// type_constructor_ptr_tag_lwm2m_block_context
// 
void type_constructor_ptr_tag_lwm2m_block_context(signed int depth_ptr_tag_lwm2m_block_context, struct lwm2m_block_context **result_ptr_tag_lwm2m_block_context)
{
  if(depth_ptr_tag_lwm2m_block_context >= max_depth && has_seen_tag_lwm2m_block_context == 1)
    *result_ptr_tag_lwm2m_block_context = ((struct lwm2m_block_context *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$6;
    if(!(depth_ptr_tag_lwm2m_block_context >= min_depth) || should_recurse_nondet$6)
    {
      signed int has_seen_prev_tag_lwm2m_block_context=has_seen_tag_lwm2m_block_context;
      has_seen_tag_lwm2m_block_context = 1;
      struct lwm2m_block_context *local_result$6=malloc(48u);
      type_constructor_tag_lwm2m_block_context(depth_ptr_tag_lwm2m_block_context + 1, &(*local_result$6));
      *result_ptr_tag_lwm2m_block_context = local_result$6;
      has_seen_tag_lwm2m_block_context = has_seen_prev_tag_lwm2m_block_context;
    }

    else
      *result_ptr_tag_lwm2m_block_context = ((struct lwm2m_block_context *)NULL);
  }
}

// type_constructor_ptr_tag_lwm2m_ctx
// 
void type_constructor_ptr_tag_lwm2m_ctx(signed int depth_ptr_tag_lwm2m_ctx, struct lwm2m_ctx **result_ptr_tag_lwm2m_ctx)
{
  if(depth_ptr_tag_lwm2m_ctx >= max_depth && has_seen_tag_lwm2m_ctx == 1)
    *result_ptr_tag_lwm2m_ctx = ((struct lwm2m_ctx *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$1;
    if(!(depth_ptr_tag_lwm2m_ctx >= min_depth) || should_recurse_nondet$1)
    {
      signed int has_seen_prev_tag_lwm2m_ctx=has_seen_tag_lwm2m_ctx;
      has_seen_tag_lwm2m_ctx = 1;
      struct lwm2m_ctx *local_result$1=malloc(656u);
      type_constructor_tag_lwm2m_ctx(depth_ptr_tag_lwm2m_ctx + 1, &(*local_result$1));
      *result_ptr_tag_lwm2m_ctx = local_result$1;
      has_seen_tag_lwm2m_ctx = has_seen_prev_tag_lwm2m_ctx;
    }

    else
      *result_ptr_tag_lwm2m_ctx = ((struct lwm2m_ctx *)NULL);
  }
}

// type_constructor_ptr_tag_lwm2m_message
// 
void type_constructor_ptr_tag_lwm2m_message(signed int depth_ptr_tag_lwm2m_message, struct lwm2m_message **result_ptr_tag_lwm2m_message)
{
  if(depth_ptr_tag_lwm2m_message >= max_depth && has_seen_tag_lwm2m_message == 1)
    *result_ptr_tag_lwm2m_message = ((struct lwm2m_message *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet;
    if(!(depth_ptr_tag_lwm2m_message >= min_depth) || should_recurse_nondet)
    {
      signed int has_seen_prev_tag_lwm2m_message=has_seen_tag_lwm2m_message;
      has_seen_tag_lwm2m_message = 1;
      struct lwm2m_message *local_result=malloc(404u);
      type_constructor_tag_lwm2m_message(depth_ptr_tag_lwm2m_message + 1, &(*local_result));
      *result_ptr_tag_lwm2m_message = local_result;
      has_seen_tag_lwm2m_message = has_seen_prev_tag_lwm2m_message;
    }

    else
      *result_ptr_tag_lwm2m_message = ((struct lwm2m_message *)NULL);
  }
}

// type_constructor_ptr_tag_lwm2m_reader
// 
void type_constructor_ptr_tag_lwm2m_reader(signed int depth_ptr_tag_lwm2m_reader, const struct lwm2m_reader **result_ptr_tag_lwm2m_reader)
{
  if(depth_ptr_tag_lwm2m_reader >= max_depth && has_seen_tag_lwm2m_reader == 1)
    *result_ptr_tag_lwm2m_reader = ((const struct lwm2m_reader *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$4;
    if(!(depth_ptr_tag_lwm2m_reader >= min_depth) || should_recurse_nondet$4)
    {
      signed int has_seen_prev_tag_lwm2m_reader=has_seen_tag_lwm2m_reader;
      has_seen_tag_lwm2m_reader = 1;
      struct lwm2m_reader *local_result$4=malloc(32u);
      type_constructor_tag_lwm2m_reader(depth_ptr_tag_lwm2m_reader + 1, &(*local_result$4));
      *result_ptr_tag_lwm2m_reader = local_result$4;
      has_seen_tag_lwm2m_reader = has_seen_prev_tag_lwm2m_reader;
    }

    else
      *result_ptr_tag_lwm2m_reader = ((const struct lwm2m_reader *)NULL);
  }
}

// type_constructor_ptr_tag_lwm2m_writer
// 
void type_constructor_ptr_tag_lwm2m_writer(signed int depth_ptr_tag_lwm2m_writer, const struct lwm2m_writer **result_ptr_tag_lwm2m_writer)
{
  if(depth_ptr_tag_lwm2m_writer >= max_depth && has_seen_tag_lwm2m_writer == 1)
    *result_ptr_tag_lwm2m_writer = ((const struct lwm2m_writer *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$7;
    if(!(depth_ptr_tag_lwm2m_writer >= min_depth) || should_recurse_nondet$7)
    {
      signed int has_seen_prev_tag_lwm2m_writer=has_seen_tag_lwm2m_writer;
      has_seen_tag_lwm2m_writer = 1;
      struct lwm2m_writer *local_result$7=malloc(80u);
      type_constructor_tag_lwm2m_writer(depth_ptr_tag_lwm2m_writer + 1, &(*local_result$7));
      *result_ptr_tag_lwm2m_writer = local_result$7;
      has_seen_tag_lwm2m_writer = has_seen_prev_tag_lwm2m_writer;
    }

    else
      *result_ptr_tag_lwm2m_writer = ((const struct lwm2m_writer *)NULL);
  }
}

// type_constructor_ptr_uint
// 
void type_constructor_ptr_uint(signed int depth_ptr_uint, uint8_t **result_ptr_uint)
{
  if(depth_ptr_uint >= max_depth)
    *result_ptr_uint = ((uint8_t *)NULL);

  else
  {
    __CPROVER_bool should_recurse_nondet$2;
    if(!(depth_ptr_uint >= min_depth) || should_recurse_nondet$2)
    {
      uint8_t *local_result$2=malloc(1u);
      type_constructor_uint_1(depth_ptr_uint + 1, &(*local_result$2));
      *result_ptr_uint = local_result$2;
    }

    else
      *result_ptr_uint = ((uint8_t *)NULL);
  }
}

// type_constructor_tag__slist
// 
void type_constructor_tag__slist(signed int depth_tag__slist, sys_slist_t *result_tag__slist)
{
  type_constructor_ptr_tag__snode(depth_tag__slist, &result_tag__slist->head);
  type_constructor_ptr_tag__snode(depth_tag__slist, &result_tag__slist->tail);
}

// type_constructor_tag__snode
// 
void type_constructor_tag__snode(signed int depth_tag__snode, sys_snode_t *result_tag__snode)
{
  type_constructor_ptr_tag__snode(depth_tag__snode, &result_tag__snode->next);
}

// type_constructor_tag_coap_block_context
// 
void type_constructor_tag_coap_block_context(signed int depth_tag_coap_block_context, struct coap_block_context *result_tag_coap_block_context)
{
  type_constructor_uint_0(depth_tag_coap_block_context, &result_tag_coap_block_context->total_size);
  type_constructor_uint_0(depth_tag_coap_block_context, &result_tag_coap_block_context->current);
  type_constructor__0(depth_tag_coap_block_context, &result_tag_coap_block_context->block_size);
}

// type_constructor_tag_coap_packet
// 
void type_constructor_tag_coap_packet(signed int depth_tag_coap_packet, struct coap_packet *result_tag_coap_packet)
{
  type_constructor_ptr_uint(depth_tag_coap_packet, &result_tag_coap_packet->data);
  type_constructor_uint(depth_tag_coap_packet, &result_tag_coap_packet->offset);
  type_constructor_uint(depth_tag_coap_packet, &result_tag_coap_packet->max_len);
  type_constructor_uint_1(depth_tag_coap_packet, &result_tag_coap_packet->hdr_len);
  type_constructor_uint(depth_tag_coap_packet, &result_tag_coap_packet->opt_len);
  type_constructor_uint(depth_tag_coap_packet, &result_tag_coap_packet->delta);
}

// type_constructor_tag_coap_pending
// 
void type_constructor_tag_coap_pending(signed int depth_tag_coap_pending, struct coap_pending *result_tag_coap_pending)
{
  type_constructor_tag_sockaddr(depth_tag_coap_pending, &result_tag_coap_pending->addr);
  type_constructor_int(depth_tag_coap_pending, &result_tag_coap_pending->t0);
  type_constructor_uint_0(depth_tag_coap_pending, &result_tag_coap_pending->timeout);
  type_constructor_uint(depth_tag_coap_pending, &result_tag_coap_pending->id);
  type_constructor_ptr_uint(depth_tag_coap_pending, &result_tag_coap_pending->data);
  type_constructor_uint(depth_tag_coap_pending, &result_tag_coap_pending->len);
  type_constructor_uint_1(depth_tag_coap_pending, &result_tag_coap_pending->retries);
  type_constructor_tag_coap_transmission_parameters(depth_tag_coap_pending, &result_tag_coap_pending->params);
}

// type_constructor_tag_coap_reply
// 
void type_constructor_tag_coap_reply(signed int depth_tag_coap_reply, struct coap_reply *result_tag_coap_reply)
{
  type_constructor_ptr_(depth_tag_coap_reply, &result_tag_coap_reply->reply);
  type_constructor_ptr__0(depth_tag_coap_reply, &result_tag_coap_reply->user_data);
  type_constructor_int_0(depth_tag_coap_reply, &result_tag_coap_reply->age);
  type_constructor_uint(depth_tag_coap_reply, &result_tag_coap_reply->id);
  type_constructor_arr_uint_8(depth_tag_coap_reply, &result_tag_coap_reply->token);
  type_constructor_uint_1(depth_tag_coap_reply, &result_tag_coap_reply->tkl);
}

// type_constructor_tag_coap_transmission_parameters
// 
void type_constructor_tag_coap_transmission_parameters(signed int depth_tag_coap_transmission_parameters, struct coap_transmission_parameters *result_tag_coap_transmission_parameters)
{
  type_constructor_uint_0(depth_tag_coap_transmission_parameters, &result_tag_coap_transmission_parameters->ack_timeout);
  type_constructor_uint(depth_tag_coap_transmission_parameters, &result_tag_coap_transmission_parameters->coap_backoff_percent);
  type_constructor_uint_1(depth_tag_coap_transmission_parameters, &result_tag_coap_transmission_parameters->max_retransmission);
}

// type_constructor_tag_lwm2m_block_context
// 
void type_constructor_tag_lwm2m_block_context(signed int depth_tag_lwm2m_block_context, struct lwm2m_block_context *result_tag_lwm2m_block_context)
{
  type_constructor_tag_coap_block_context(depth_tag_lwm2m_block_context, &result_tag_lwm2m_block_context->ctx);
  type_constructor_tag_lwm2m_opaque_context(depth_tag_lwm2m_block_context, &result_tag_lwm2m_block_context->opaque);
  type_constructor_int(depth_tag_lwm2m_block_context, &result_tag_lwm2m_block_context->timestamp);
  type_constructor_uint_0(depth_tag_lwm2m_block_context, &result_tag_lwm2m_block_context->expected);
  type_constructor__1(depth_tag_lwm2m_block_context, &result_tag_lwm2m_block_context->last_block);
  type_constructor_tag_lwm2m_obj_path(depth_tag_lwm2m_block_context, &result_tag_lwm2m_block_context->path);
}

// type_constructor_tag_lwm2m_ctx
// 
void type_constructor_tag_lwm2m_ctx(signed int depth_tag_lwm2m_ctx, struct lwm2m_ctx *result_tag_lwm2m_ctx)
{
  type_constructor_tag_sockaddr(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->remote_addr);
  type_constructor_arr_tag_coap_pending_6(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->pendings);
  type_constructor_arr_tag_coap_reply_6(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->replies);
  type_constructor_tag__slist(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->pending_sends);
  type_constructor_tag__slist(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->queued_messages);
  type_constructor_tag__slist(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->observer);
  type_constructor_ptr__0(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->processed_req);
  type_constructor_int_0(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->tls_tag);
  type_constructor_ptr_char(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->desthostname);
  type_constructor_uint(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->desthostnamelen);
  type_constructor_(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->hostname_verify);
  type_constructor_ptr__1(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->load_credentials);
  type_constructor_ptr__1(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->set_socketoptions);
  type_constructor_(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->use_dtls);
  type_constructor_(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->connection_suspended);
  type_constructor_(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->buffer_client_messages);
  type_constructor_int_0(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->sec_obj_inst);
  type_constructor_int_0(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->srv_obj_inst);
  type_constructor_(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->bootstrap_mode);
  type_constructor_int_0(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->sock_fd);
  type_constructor_ptr__2(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->fault_cb);
  type_constructor_ptr__3(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->observe_cb);
  type_constructor_ptr__4(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->event_cb);
  type_constructor_arr_uint_64(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->validate_buf);
  type_constructor_ptr__5(depth_tag_lwm2m_ctx, &result_tag_lwm2m_ctx->set_socket_state);
}

// type_constructor_tag_lwm2m_input_context
// 
void type_constructor_tag_lwm2m_input_context(signed int depth_tag_lwm2m_input_context, struct lwm2m_input_context *result_tag_lwm2m_input_context)
{
  type_constructor_ptr_tag_lwm2m_reader(depth_tag_lwm2m_input_context, &result_tag_lwm2m_input_context->reader);
  type_constructor_ptr_tag_coap_packet(depth_tag_lwm2m_input_context, &result_tag_lwm2m_input_context->in_cpkt);
  type_constructor_uint(depth_tag_lwm2m_input_context, &result_tag_lwm2m_input_context->offset);
  type_constructor_ptr_tag_lwm2m_block_context(depth_tag_lwm2m_input_context, &result_tag_lwm2m_input_context->block_ctx);
  type_constructor_ptr__0(depth_tag_lwm2m_input_context, &result_tag_lwm2m_input_context->user_data);
}

// type_constructor_tag_lwm2m_message
// 
void type_constructor_tag_lwm2m_message(signed int depth_tag_lwm2m_message, struct lwm2m_message *result_tag_lwm2m_message)
{
  type_constructor_tag__snode(depth_tag_lwm2m_message, &result_tag_lwm2m_message->node);
  type_constructor_ptr_tag_lwm2m_ctx(depth_tag_lwm2m_message, &result_tag_lwm2m_message->ctx);
  type_constructor_tag_lwm2m_input_context(depth_tag_lwm2m_message, &result_tag_lwm2m_message->in);
  type_constructor_tag_lwm2m_output_context(depth_tag_lwm2m_message, &result_tag_lwm2m_message->out);
  type_constructor_tag_lwm2m_obj_path(depth_tag_lwm2m_message, &result_tag_lwm2m_message->path);
  type_constructor_tag_coap_packet(depth_tag_lwm2m_message, &result_tag_lwm2m_message->cpkt);
  type_constructor_arr_uint_304(depth_tag_lwm2m_message, &result_tag_lwm2m_message->msg_data);
  type_constructor_ptr_tag_coap_pending(depth_tag_lwm2m_message, &result_tag_lwm2m_message->pending);
  type_constructor_ptr_tag_coap_reply(depth_tag_lwm2m_message, &result_tag_lwm2m_message->reply);
  type_constructor_ptr_uint(depth_tag_lwm2m_message, &result_tag_lwm2m_message->token);
  type_constructor_ptr_(depth_tag_lwm2m_message, &result_tag_lwm2m_message->reply_cb);
  type_constructor_ptr__23(depth_tag_lwm2m_message, &result_tag_lwm2m_message->message_timeout_cb);
  type_constructor_ptr__24(depth_tag_lwm2m_message, &result_tag_lwm2m_message->send_status_cb);
  type_constructor_uint(depth_tag_lwm2m_message, &result_tag_lwm2m_message->mid);
  type_constructor_uint_1(depth_tag_lwm2m_message, &result_tag_lwm2m_message->type);
  type_constructor_uint_1(depth_tag_lwm2m_message, &result_tag_lwm2m_message->code);
  type_constructor_uint_1(depth_tag_lwm2m_message, &result_tag_lwm2m_message->tkl);
  type_constructor_uint_1(depth_tag_lwm2m_message, &result_tag_lwm2m_message->operation);
  type_constructor__1(depth_tag_lwm2m_message, &result_tag_lwm2m_message->acknowledged);
  type_constructor__1(depth_tag_lwm2m_message, &result_tag_lwm2m_message->block_send);
}

// type_constructor_tag_lwm2m_obj_path
// 
void type_constructor_tag_lwm2m_obj_path(signed int depth_tag_lwm2m_obj_path, struct lwm2m_obj_path *result_tag_lwm2m_obj_path)
{
  type_constructor_uint(depth_tag_lwm2m_obj_path, &result_tag_lwm2m_obj_path->obj_id);
  type_constructor_uint(depth_tag_lwm2m_obj_path, &result_tag_lwm2m_obj_path->obj_inst_id);
  type_constructor_uint(depth_tag_lwm2m_obj_path, &result_tag_lwm2m_obj_path->res_id);
  type_constructor_uint(depth_tag_lwm2m_obj_path, &result_tag_lwm2m_obj_path->res_inst_id);
  type_constructor_uint_1(depth_tag_lwm2m_obj_path, &result_tag_lwm2m_obj_path->level);
}

// type_constructor_tag_lwm2m_opaque_context
// 
void type_constructor_tag_lwm2m_opaque_context(signed int depth_tag_lwm2m_opaque_context, struct lwm2m_opaque_context *result_tag_lwm2m_opaque_context)
{
  type_constructor_uint_0(depth_tag_lwm2m_opaque_context, &result_tag_lwm2m_opaque_context->len);
  type_constructor_uint_0(depth_tag_lwm2m_opaque_context, &result_tag_lwm2m_opaque_context->remaining);
}

// type_constructor_tag_lwm2m_output_context
// 
void type_constructor_tag_lwm2m_output_context(signed int depth_tag_lwm2m_output_context, struct lwm2m_output_context *result_tag_lwm2m_output_context)
{
  type_constructor_ptr_tag_lwm2m_writer(depth_tag_lwm2m_output_context, &result_tag_lwm2m_output_context->writer);
  type_constructor_ptr_tag_coap_packet(depth_tag_lwm2m_output_context, &result_tag_lwm2m_output_context->out_cpkt);
  type_constructor_ptr__0(depth_tag_lwm2m_output_context, &result_tag_lwm2m_output_context->user_data);
}

// type_constructor_tag_lwm2m_reader
// 
void type_constructor_tag_lwm2m_reader(signed int depth_tag_lwm2m_reader, struct lwm2m_reader *result_tag_lwm2m_reader)
{
  type_constructor_ptr__6(depth_tag_lwm2m_reader, &result_tag_lwm2m_reader->get_s32);
  type_constructor_ptr__7(depth_tag_lwm2m_reader, &result_tag_lwm2m_reader->get_s64);
  type_constructor_ptr__7(depth_tag_lwm2m_reader, &result_tag_lwm2m_reader->get_time);
  type_constructor_ptr__8(depth_tag_lwm2m_reader, &result_tag_lwm2m_reader->get_string);
  type_constructor_ptr__9(depth_tag_lwm2m_reader, &result_tag_lwm2m_reader->get_float);
  type_constructor_ptr__10(depth_tag_lwm2m_reader, &result_tag_lwm2m_reader->get_bool);
  type_constructor_ptr__11(depth_tag_lwm2m_reader, &result_tag_lwm2m_reader->get_opaque);
  type_constructor_ptr__12(depth_tag_lwm2m_reader, &result_tag_lwm2m_reader->get_objlnk);
}

// type_constructor_tag_lwm2m_writer
// 
void type_constructor_tag_lwm2m_writer(signed int depth_tag_lwm2m_writer, struct lwm2m_writer *result_tag_lwm2m_writer)
{
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_begin);
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_end);
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_begin_oi);
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_end_oi);
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_begin_r);
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_end_r);
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_begin_ri);
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_end_ri);
  type_constructor_ptr__14(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_data_timestamp);
  type_constructor_ptr__15(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_s8);
  type_constructor_ptr__16(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_s16);
  type_constructor_ptr__17(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_s32);
  type_constructor_ptr__18(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_s64);
  type_constructor_ptr__18(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_time);
  type_constructor_ptr__19(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_string);
  type_constructor_ptr__20(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_float);
  type_constructor_ptr__21(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_bool);
  type_constructor_ptr__19(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_opaque);
  type_constructor_ptr__22(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_objlnk);
  type_constructor_ptr__13(depth_tag_lwm2m_writer, &result_tag_lwm2m_writer->put_corelink);
}

// type_constructor_tag_sockaddr
// 
void type_constructor_tag_sockaddr(signed int depth_tag_sockaddr, struct sockaddr *result_tag_sockaddr)
{
  type_constructor_uint(depth_tag_sockaddr, &result_tag_sockaddr->sa_family);
  type_constructor_arr_char_22(depth_tag_sockaddr, &result_tag_sockaddr->data);
}

// type_constructor_uint
// 
void type_constructor_uint(signed int depth_uint, sa_family_t *result_uint)
{
  sa_family_t nondet;
  *result_uint = nondet;
}

// type_constructor_uint_0
// 
void type_constructor_uint_0(signed int depth_uint$0, uint32_t *result_uint$0)
{
  uint32_t nondet$2;
  *result_uint$0 = nondet$2;
}

// type_constructor_uint_1
// 
void type_constructor_uint_1(signed int depth_uint$1, uint8_t *result_uint$1)
{
  uint8_t nondet$3;
  *result_uint$1 = nondet$3;
}

