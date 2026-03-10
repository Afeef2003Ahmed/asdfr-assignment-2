// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "timing_nodes/msg/timing.hpp"


#ifndef TIMING_NODES__MSG__DETAIL__TIMING__STRUCT_HPP_
#define TIMING_NODES__MSG__DETAIL__TIMING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__timing_nodes__msg__Timing __attribute__((deprecated))
#else
# define DEPRECATED__timing_nodes__msg__Timing __declspec(deprecated)
#endif

namespace timing_nodes
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Timing_
{
  using Type = Timing_<ContainerAllocator>;

  explicit Timing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  explicit Timing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timing_nodes::msg::Timing_<ContainerAllocator> *;
  using ConstRawPtr =
    const timing_nodes::msg::Timing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timing_nodes::msg::Timing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timing_nodes::msg::Timing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timing_nodes::msg::Timing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timing_nodes::msg::Timing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timing_nodes::msg::Timing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timing_nodes::msg::Timing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timing_nodes::msg::Timing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timing_nodes::msg::Timing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timing_nodes__msg__Timing
    std::shared_ptr<timing_nodes::msg::Timing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timing_nodes__msg__Timing
    std::shared_ptr<timing_nodes::msg::Timing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timing_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timing_

// alias to use template instance with default allocator
using Timing =
  timing_nodes::msg::Timing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace timing_nodes

#endif  // TIMING_NODES__MSG__DETAIL__TIMING__STRUCT_HPP_
