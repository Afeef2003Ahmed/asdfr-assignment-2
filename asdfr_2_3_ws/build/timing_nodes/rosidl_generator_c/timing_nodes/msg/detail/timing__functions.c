// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from timing_nodes:msg/Timing.idl
// generated code does not contain a copyright notice
#include "timing_nodes/msg/detail/timing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
timing_nodes__msg__Timing__init(timing_nodes__msg__Timing * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    timing_nodes__msg__Timing__fini(msg);
    return false;
  }
  return true;
}

void
timing_nodes__msg__Timing__fini(timing_nodes__msg__Timing * msg)
{
  if (!msg) {
    return;
  }
  // id
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
timing_nodes__msg__Timing__are_equal(const timing_nodes__msg__Timing * lhs, const timing_nodes__msg__Timing * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
timing_nodes__msg__Timing__copy(
  const timing_nodes__msg__Timing * input,
  timing_nodes__msg__Timing * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

timing_nodes__msg__Timing *
timing_nodes__msg__Timing__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timing_nodes__msg__Timing * msg = (timing_nodes__msg__Timing *)allocator.allocate(sizeof(timing_nodes__msg__Timing), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timing_nodes__msg__Timing));
  bool success = timing_nodes__msg__Timing__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timing_nodes__msg__Timing__destroy(timing_nodes__msg__Timing * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timing_nodes__msg__Timing__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timing_nodes__msg__Timing__Sequence__init(timing_nodes__msg__Timing__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timing_nodes__msg__Timing * data = NULL;

  if (size) {
    data = (timing_nodes__msg__Timing *)allocator.zero_allocate(size, sizeof(timing_nodes__msg__Timing), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timing_nodes__msg__Timing__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timing_nodes__msg__Timing__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
timing_nodes__msg__Timing__Sequence__fini(timing_nodes__msg__Timing__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      timing_nodes__msg__Timing__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

timing_nodes__msg__Timing__Sequence *
timing_nodes__msg__Timing__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timing_nodes__msg__Timing__Sequence * array = (timing_nodes__msg__Timing__Sequence *)allocator.allocate(sizeof(timing_nodes__msg__Timing__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timing_nodes__msg__Timing__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timing_nodes__msg__Timing__Sequence__destroy(timing_nodes__msg__Timing__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timing_nodes__msg__Timing__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timing_nodes__msg__Timing__Sequence__are_equal(const timing_nodes__msg__Timing__Sequence * lhs, const timing_nodes__msg__Timing__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timing_nodes__msg__Timing__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timing_nodes__msg__Timing__Sequence__copy(
  const timing_nodes__msg__Timing__Sequence * input,
  timing_nodes__msg__Timing__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timing_nodes__msg__Timing);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timing_nodes__msg__Timing * data =
      (timing_nodes__msg__Timing *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timing_nodes__msg__Timing__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timing_nodes__msg__Timing__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timing_nodes__msg__Timing__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
