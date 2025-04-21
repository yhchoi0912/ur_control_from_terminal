// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "move_relative_ur/msg/error_msg.hpp"


#ifndef MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__STRUCT_HPP_
#define MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__move_relative_ur__msg__ErrorMsg __attribute__((deprecated))
#else
# define DEPRECATED__move_relative_ur__msg__ErrorMsg __declspec(deprecated)
#endif

namespace move_relative_ur
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorMsg_
{
  using Type = ErrorMsg_<ContainerAllocator>;

  explicit ErrorMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit ErrorMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_relative_ur::msg::ErrorMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_relative_ur::msg::ErrorMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_relative_ur::msg::ErrorMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_relative_ur::msg::ErrorMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_relative_ur::msg::ErrorMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_relative_ur::msg::ErrorMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_relative_ur::msg::ErrorMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_relative_ur::msg::ErrorMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_relative_ur::msg::ErrorMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_relative_ur::msg::ErrorMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_relative_ur__msg__ErrorMsg
    std::shared_ptr<move_relative_ur::msg::ErrorMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_relative_ur__msg__ErrorMsg
    std::shared_ptr<move_relative_ur::msg::ErrorMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorMsg_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorMsg_

// alias to use template instance with default allocator
using ErrorMsg =
  move_relative_ur::msg::ErrorMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace move_relative_ur

#endif  // MOVE_RELATIVE_UR__MSG__DETAIL__ERROR_MSG__STRUCT_HPP_
