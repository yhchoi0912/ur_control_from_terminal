// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "move_relative_ur/msg/error_msg.hpp"


#ifndef MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__BUILDER_HPP_
#define MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "move_relative_ur/msg/detail/error_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace move_relative_ur
{

namespace msg
{

namespace builder
{

class Init_ErrorMsg_message
{
public:
  Init_ErrorMsg_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_relative_ur::msg::ErrorMsg message(::move_relative_ur::msg::ErrorMsg::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_relative_ur::msg::ErrorMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_relative_ur::msg::ErrorMsg>()
{
  return move_relative_ur::msg::builder::Init_ErrorMsg_message();
}

}  // namespace move_relative_ur

#endif  // MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__BUILDER_HPP_
