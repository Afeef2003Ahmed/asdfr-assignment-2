// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "timing_nodes/msg/timing.hpp"


#ifndef TIMING_NODES__MSG__DETAIL__TIMING__TRAITS_HPP_
#define TIMING_NODES__MSG__DETAIL__TIMING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "timing_nodes/msg/detail/timing__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace timing_nodes
{

namespace msg
{

inline void to_flow_style_yaml(
  const Timing & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timing & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timing & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace timing_nodes

namespace rosidl_generator_traits
{

[[deprecated("use timing_nodes::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timing_nodes::msg::Timing & msg,
  std::ostream & out, size_t indentation = 0)
{
  timing_nodes::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timing_nodes::msg::to_yaml() instead")]]
inline std::string to_yaml(const timing_nodes::msg::Timing & msg)
{
  return timing_nodes::msg::to_yaml(msg);
}

template<>
inline const char * data_type<timing_nodes::msg::Timing>()
{
  return "timing_nodes::msg::Timing";
}

template<>
inline const char * name<timing_nodes::msg::Timing>()
{
  return "timing_nodes/msg/Timing";
}

template<>
struct has_fixed_size<timing_nodes::msg::Timing>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<timing_nodes::msg::Timing>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<timing_nodes::msg::Timing>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIMING_NODES__MSG__DETAIL__TIMING__TRAITS_HPP_
