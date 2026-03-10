// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "timing_nodes/msg/timing.h"


#ifndef TIMING_NODES__MSG__DETAIL__TIMING__STRUCT_H_
#define TIMING_NODES__MSG__DETAIL__TIMING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Timing in the package timing_nodes.
typedef struct timing_nodes__msg__Timing
{
  int64_t id;
  builtin_interfaces__msg__Time timestamp;
} timing_nodes__msg__Timing;

// Struct for a sequence of timing_nodes__msg__Timing.
typedef struct timing_nodes__msg__Timing__Sequence
{
  timing_nodes__msg__Timing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timing_nodes__msg__Timing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIMING_NODES__MSG__DETAIL__TIMING__STRUCT_H_
