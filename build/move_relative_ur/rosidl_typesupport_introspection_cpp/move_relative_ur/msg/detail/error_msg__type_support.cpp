// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "move_relative_ur/msg/detail/error_msg__functions.h"
#include "move_relative_ur/msg/detail/error_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace move_relative_ur
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ErrorMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) move_relative_ur::msg::ErrorMsg(_init);
}

void ErrorMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<move_relative_ur::msg::ErrorMsg *>(message_memory);
  typed_message->~ErrorMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ErrorMsg_message_member_array[1] = {
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_relative_ur::msg::ErrorMsg, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ErrorMsg_message_members = {
  "move_relative_ur::msg",  // message namespace
  "ErrorMsg",  // message name
  1,  // number of fields
  sizeof(move_relative_ur::msg::ErrorMsg),
  false,  // has_any_key_member_
  ErrorMsg_message_member_array,  // message members
  ErrorMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  ErrorMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ErrorMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ErrorMsg_message_members,
  get_message_typesupport_handle_function,
  &move_relative_ur__msg__ErrorMsg__get_type_hash,
  &move_relative_ur__msg__ErrorMsg__get_type_description,
  &move_relative_ur__msg__ErrorMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace move_relative_ur


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<move_relative_ur::msg::ErrorMsg>()
{
  return &::move_relative_ur::msg::rosidl_typesupport_introspection_cpp::ErrorMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, move_relative_ur, msg, ErrorMsg)() {
  return &::move_relative_ur::msg::rosidl_typesupport_introspection_cpp::ErrorMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
