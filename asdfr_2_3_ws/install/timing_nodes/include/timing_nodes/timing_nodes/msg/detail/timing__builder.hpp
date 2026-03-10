// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "timing_nodes/msg/timing.hpp"


#ifndef TIMING_NODES__MSG__DETAIL__TIMING__BUILDER_HPP_
#define TIMING_NODES__MSG__DETAIL__TIMING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "timing_nodes/msg/detail/timing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace timing_nodes
{

namespace msg
{

namespace builder
{

class Init_Timing_timestamp
{
public:
  explicit Init_Timing_timestamp(::timing_nodes::msg::Timing & msg)
  : msg_(msg)
  {}
  ::timing_nodes::msg::Timing timestamp(::timing_nodes::msg::Timing::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timing_nodes::msg::Timing msg_;
};

class Init_Timing_id
{
public:
  Init_Timing_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timing_timestamp id(::timing_nodes::msg::Timing::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Timing_timestamp(msg_);
  }

private:
  ::timing_nodes::msg::Timing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::timing_nodes::msg::Timing>()
{
  return timing_nodes::msg::builder::Init_Timing_id();
}

}  // namespace timing_nodes

#endif  // TIMING_NODES__MSG__DETAIL__TIMING__BUILDER_HPP_
