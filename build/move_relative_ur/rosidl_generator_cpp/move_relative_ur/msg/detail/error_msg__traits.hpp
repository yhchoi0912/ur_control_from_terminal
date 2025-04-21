// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "move_relative_ur/msg/error_msg.hpp"


#ifndef MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__TRAITS_HPP_
#define MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "move_relative_ur/msg/detail/error_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace move_relative_ur
{

namespace msg
{

inline void to_flow_style_yaml(
  const ErrorMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ErrorMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ErrorMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace move_relative_ur

namespace rosidl_generator_traits
{

[[deprecated("use move_relative_ur::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_relative_ur::msg::ErrorMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_relative_ur::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_relative_ur::msg::to_yaml() instead")]]
inline std::string to_yaml(const move_relative_ur::msg::ErrorMsg & msg)
{
  return move_relative_ur::msg::to_yaml(msg);
}

template<>
inline const char * data_type<move_relative_ur::msg::ErrorMsg>()
{
  return "move_relative_ur::msg::ErrorMsg";
}

template<>
inline const char * name<move_relative_ur::msg::ErrorMsg>()
{
  return "move_relative_ur/msg/ErrorMsg";
}

template<>
struct has_fixed_size<move_relative_ur::msg::ErrorMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<move_relative_ur::msg::ErrorMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<move_relative_ur::msg::ErrorMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__TRAITS_HPP_
