// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "move_relative_ur/msg/error_msg.h"


#ifndef MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__STRUCT_H_
#define MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ErrorMsg in the package move_relative_ur.
typedef struct move_relative_ur__msg__ErrorMsg
{
  rosidl_runtime_c__String message;
} move_relative_ur__msg__ErrorMsg;

// Struct for a sequence of move_relative_ur__msg__ErrorMsg.
typedef struct move_relative_ur__msg__ErrorMsg__Sequence
{
  move_relative_ur__msg__ErrorMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_relative_ur__msg__ErrorMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__STRUCT_H_
