// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice
#ifndef TIMING_NODES__MSG__DETAIL__TIMING__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TIMING_NODES__MSG__DETAIL__TIMING__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "timing_nodes/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "timing_nodes/msg/detail/timing__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_timing_nodes
bool cdr_serialize_timing_nodes__msg__Timing(
  const timing_nodes__msg__Timing * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_timing_nodes
bool cdr_deserialize_timing_nodes__msg__Timing(
  eprosima::fastcdr::Cdr &,
  timing_nodes__msg__Timing * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_timing_nodes
size_t get_serialized_size_timing_nodes__msg__Timing(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_timing_nodes
size_t max_serialized_size_timing_nodes__msg__Timing(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_timing_nodes
bool cdr_serialize_key_timing_nodes__msg__Timing(
  const timing_nodes__msg__Timing * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_timing_nodes
size_t get_serialized_size_key_timing_nodes__msg__Timing(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_timing_nodes
size_t max_serialized_size_key_timing_nodes__msg__Timing(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_timing_nodes
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, timing_nodes, msg, Timing)();

#ifdef __cplusplus
}
#endif

#endif  // TIMING_NODES__MSG__DETAIL__TIMING__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
