// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "timing_nodes/msg/detail/timing__functions.h"
#include "timing_nodes/msg/detail/timing__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace timing_nodes
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Timing_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) timing_nodes::msg::Timing(_init);
}

void Timing_fini_function(void * message_memory)
{
  auto typed_message = static_cast<timing_nodes::msg::Timing *>(message_memory);
  typed_message->~Timing();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Timing_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timing_nodes::msg::Timing, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timing_nodes::msg::Timing, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Timing_message_members = {
  "timing_nodes::msg",  // message namespace
  "Timing",  // message name
  2,  // number of fields
  sizeof(timing_nodes::msg::Timing),
  false,  // has_any_key_member_
  Timing_message_member_array,  // message members
  Timing_init_function,  // function to initialize message memory (memory has to be allocated)
  Timing_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Timing_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Timing_message_members,
  get_message_typesupport_handle_function,
  &timing_nodes__msg__Timing__get_type_hash,
  &timing_nodes__msg__Timing__get_type_description,
  &timing_nodes__msg__Timing__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace timing_nodes


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timing_nodes::msg::Timing>()
{
  return &::timing_nodes::msg::rosidl_typesupport_introspection_cpp::Timing_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timing_nodes, msg, Timing)() {
  return &::timing_nodes::msg::rosidl_typesupport_introspection_cpp::Timing_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
