// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "timing_nodes/msg/timing.h"


#ifndef TIMING_NODES__MSG__DETAIL__TIMING__FUNCTIONS_H_
#define TIMING_NODES__MSG__DETAIL__TIMING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "timing_nodes/msg/rosidl_generator_c__visibility_control.h"

#include "timing_nodes/msg/detail/timing__struct.h"

/// Initialize msg/Timing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timing_nodes__msg__Timing
 * )) before or use
 * timing_nodes__msg__Timing__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
bool
timing_nodes__msg__Timing__init(timing_nodes__msg__Timing * msg);

/// Finalize msg/Timing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
void
timing_nodes__msg__Timing__fini(timing_nodes__msg__Timing * msg);

/// Create msg/Timing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timing_nodes__msg__Timing__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
timing_nodes__msg__Timing *
timing_nodes__msg__Timing__create(void);

/// Destroy msg/Timing message.
/**
 * It calls
 * timing_nodes__msg__Timing__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
void
timing_nodes__msg__Timing__destroy(timing_nodes__msg__Timing * msg);

/// Check for msg/Timing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
bool
timing_nodes__msg__Timing__are_equal(const timing_nodes__msg__Timing * lhs, const timing_nodes__msg__Timing * rhs);

/// Copy a msg/Timing message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
bool
timing_nodes__msg__Timing__copy(
  const timing_nodes__msg__Timing * input,
  timing_nodes__msg__Timing * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
const rosidl_type_hash_t *
timing_nodes__msg__Timing__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
const rosidl_runtime_c__type_description__TypeDescription *
timing_nodes__msg__Timing__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
const rosidl_runtime_c__type_description__TypeSource *
timing_nodes__msg__Timing__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
const rosidl_runtime_c__type_description__TypeSource__Sequence *
timing_nodes__msg__Timing__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Timing messages.
/**
 * It allocates the memory for the number of elements and calls
 * timing_nodes__msg__Timing__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
bool
timing_nodes__msg__Timing__Sequence__init(timing_nodes__msg__Timing__Sequence * array, size_t size);

/// Finalize array of msg/Timing messages.
/**
 * It calls
 * timing_nodes__msg__Timing__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
void
timing_nodes__msg__Timing__Sequence__fini(timing_nodes__msg__Timing__Sequence * array);

/// Create array of msg/Timing messages.
/**
 * It allocates the memory for the array and calls
 * timing_nodes__msg__Timing__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
timing_nodes__msg__Timing__Sequence *
timing_nodes__msg__Timing__Sequence__create(size_t size);

/// Destroy array of msg/Timing messages.
/**
 * It calls
 * timing_nodes__msg__Timing__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
void
timing_nodes__msg__Timing__Sequence__destroy(timing_nodes__msg__Timing__Sequence * array);

/// Check for msg/Timing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
bool
timing_nodes__msg__Timing__Sequence__are_equal(const timing_nodes__msg__Timing__Sequence * lhs, const timing_nodes__msg__Timing__Sequence * rhs);

/// Copy an array of msg/Timing messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_timing_nodes
bool
timing_nodes__msg__Timing__Sequence__copy(
  const timing_nodes__msg__Timing__Sequence * input,
  timing_nodes__msg__Timing__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIMING_NODES__MSG__DETAIL__TIMING__FUNCTIONS_H_
