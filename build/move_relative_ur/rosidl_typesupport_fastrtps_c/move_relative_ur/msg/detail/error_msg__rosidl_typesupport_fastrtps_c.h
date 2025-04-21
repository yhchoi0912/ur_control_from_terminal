// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice
#ifndef MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "move_relative_ur/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "move_relative_ur/msg/detail/error_msg__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
bool cdr_serialize_move_relative_ur__msg__ErrorMsg(
  const move_relative_ur__msg__ErrorMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
bool cdr_deserialize_move_relative_ur__msg__ErrorMsg(
  eprosima::fastcdr::Cdr &,
  move_relative_ur__msg__ErrorMsg * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
size_t get_serialized_size_move_relative_ur__msg__ErrorMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
size_t max_serialized_size_move_relative_ur__msg__ErrorMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
bool cdr_serialize_key_move_relative_ur__msg__ErrorMsg(
  const move_relative_ur__msg__ErrorMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
size_t get_serialized_size_key_move_relative_ur__msg__ErrorMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
size_t max_serialized_size_key_move_relative_ur__msg__ErrorMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_move_relative_ur
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, move_relative_ur, msg, ErrorMsg)();

#ifdef __cplusplus
}
#endif

#endif  // MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
