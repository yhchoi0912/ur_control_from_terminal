// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice
#include "move_relative_ur/msg/detail/error_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
move_relative_ur__msg__ErrorMsg__init(move_relative_ur__msg__ErrorMsg * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    move_relative_ur__msg__ErrorMsg__fini(msg);
    return false;
  }
  return true;
}

void
move_relative_ur__msg__ErrorMsg__fini(move_relative_ur__msg__ErrorMsg * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
move_relative_ur__msg__ErrorMsg__are_equal(const move_relative_ur__msg__ErrorMsg * lhs, const move_relative_ur__msg__ErrorMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
move_relative_ur__msg__ErrorMsg__copy(
  const move_relative_ur__msg__ErrorMsg * input,
  move_relative_ur__msg__ErrorMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

move_relative_ur__msg__ErrorMsg *
move_relative_ur__msg__ErrorMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_relative_ur__msg__ErrorMsg * msg = (move_relative_ur__msg__ErrorMsg *)allocator.allocate(sizeof(move_relative_ur__msg__ErrorMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_relative_ur__msg__ErrorMsg));
  bool success = move_relative_ur__msg__ErrorMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
move_relative_ur__msg__ErrorMsg__destroy(move_relative_ur__msg__ErrorMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    move_relative_ur__msg__ErrorMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
move_relative_ur__msg__ErrorMsg__Sequence__init(move_relative_ur__msg__ErrorMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_relative_ur__msg__ErrorMsg * data = NULL;

  if (size) {
    data = (move_relative_ur__msg__ErrorMsg *)allocator.zero_allocate(size, sizeof(move_relative_ur__msg__ErrorMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_relative_ur__msg__ErrorMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_relative_ur__msg__ErrorMsg__fini(&data[i - 1]);
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
move_relative_ur__msg__ErrorMsg__Sequence__fini(move_relative_ur__msg__ErrorMsg__Sequence * array)
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
      move_relative_ur__msg__ErrorMsg__fini(&array->data[i]);
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

move_relative_ur__msg__ErrorMsg__Sequence *
move_relative_ur__msg__ErrorMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_relative_ur__msg__ErrorMsg__Sequence * array = (move_relative_ur__msg__ErrorMsg__Sequence *)allocator.allocate(sizeof(move_relative_ur__msg__ErrorMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = move_relative_ur__msg__ErrorMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
move_relative_ur__msg__ErrorMsg__Sequence__destroy(move_relative_ur__msg__ErrorMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    move_relative_ur__msg__ErrorMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
move_relative_ur__msg__ErrorMsg__Sequence__are_equal(const move_relative_ur__msg__ErrorMsg__Sequence * lhs, const move_relative_ur__msg__ErrorMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!move_relative_ur__msg__ErrorMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
move_relative_ur__msg__ErrorMsg__Sequence__copy(
  const move_relative_ur__msg__ErrorMsg__Sequence * input,
  move_relative_ur__msg__ErrorMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(move_relative_ur__msg__ErrorMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    move_relative_ur__msg__ErrorMsg * data =
      (move_relative_ur__msg__ErrorMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!move_relative_ur__msg__ErrorMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          move_relative_ur__msg__ErrorMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!move_relative_ur__msg__ErrorMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
