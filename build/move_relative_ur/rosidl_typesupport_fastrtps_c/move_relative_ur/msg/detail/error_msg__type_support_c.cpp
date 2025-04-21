// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice
#include "move_relative_ur/msg/detail/error_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "move_relative_ur/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "move_relative_ur/msg/detail/error_msg__struct.h"
#include "move_relative_ur/msg/detail/error_msg__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _ErrorMsg__ros_msg_type = move_relative_ur__msg__ErrorMsg;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
bool cdr_serialize_move_relative_ur__msg__ErrorMsg(
  const move_relative_ur__msg__ErrorMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
bool cdr_deserialize_move_relative_ur__msg__ErrorMsg(
  eprosima::fastcdr::Cdr & cdr,
  move_relative_ur__msg__ErrorMsg * ros_message)
{
  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
size_t get_serialized_size_move_relative_ur__msg__ErrorMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ErrorMsg__ros_msg_type * ros_message = static_cast<const _ErrorMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
size_t max_serialized_size_move_relative_ur__msg__ErrorMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = move_relative_ur__msg__ErrorMsg;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
bool cdr_serialize_key_move_relative_ur__msg__ErrorMsg(
  const move_relative_ur__msg__ErrorMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
size_t get_serialized_size_key_move_relative_ur__msg__ErrorMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ErrorMsg__ros_msg_type * ros_message = static_cast<const _ErrorMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
size_t max_serialized_size_key_move_relative_ur__msg__ErrorMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = move_relative_ur__msg__ErrorMsg;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ErrorMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const move_relative_ur__msg__ErrorMsg * ros_message = static_cast<const move_relative_ur__msg__ErrorMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_move_relative_ur__msg__ErrorMsg(ros_message, cdr);
}

static bool _ErrorMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  move_relative_ur__msg__ErrorMsg * ros_message = static_cast<move_relative_ur__msg__ErrorMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_move_relative_ur__msg__ErrorMsg(cdr, ros_message);
}

static uint32_t _ErrorMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_move_relative_ur__msg__ErrorMsg(
      untyped_ros_message, 0));
}

static size_t _ErrorMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_move_relative_ur__msg__ErrorMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ErrorMsg = {
  "move_relative_ur::msg",
  "ErrorMsg",
  _ErrorMsg__cdr_serialize,
  _ErrorMsg__cdr_deserialize,
  _ErrorMsg__get_serialized_size,
  _ErrorMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ErrorMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ErrorMsg,
  get_message_typesupport_handle_function,
  &move_relative_ur__msg__ErrorMsg__get_type_hash,
  &move_relative_ur__msg__ErrorMsg__get_type_description,
  &move_relative_ur__msg__ErrorMsg__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, move_relative_ur, msg, ErrorMsg)() {
  return &_ErrorMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
