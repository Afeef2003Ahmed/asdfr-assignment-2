// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice

#ifndef TIMING_NODES__MSG__DETAIL__TIMING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TIMING_NODES__MSG__DETAIL__TIMING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "timing_nodes/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "timing_nodes/msg/detail/timing__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace timing_nodes
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_timing_nodes
cdr_serialize(
  const timing_nodes::msg::Timing & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_timing_nodes
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  timing_nodes::msg::Timing & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_timing_nodes
get_serialized_size(
  const timing_nodes::msg::Timing & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_timing_nodes
max_serialized_size_Timing(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_timing_nodes
cdr_serialize_key(
  const timing_nodes::msg::Timing & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_timing_nodes
get_serialized_size_key(
  const timing_nodes::msg::Timing & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_timing_nodes
max_serialized_size_key_Timing(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace timing_nodes

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_timing_nodes
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timing_nodes, msg, Timing)();

#ifdef __cplusplus
}
#endif

#endif  // TIMING_NODES__MSG__DETAIL__TIMING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
