// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_move:action/Coordinate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_move/action/coordinate.hpp"


#ifndef ROBOT_MOVE__ACTION__DETAIL__COORDINATE__BUILDER_HPP_
#define ROBOT_MOVE__ACTION__DETAIL__COORDINATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_move/action/detail/coordinate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_Goal_orientation
{
public:
  explicit Init_Coordinate_Goal_orientation(::robot_move::action::Coordinate_Goal & msg)
  : msg_(msg)
  {}
  ::robot_move::action::Coordinate_Goal orientation(::robot_move::action::Coordinate_Goal::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_Goal msg_;
};

class Init_Coordinate_Goal_position
{
public:
  Init_Coordinate_Goal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_Goal_orientation position(::robot_move::action::Coordinate_Goal::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Coordinate_Goal_orientation(msg_);
  }

private:
  ::robot_move::action::Coordinate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_Goal>()
{
  return robot_move::action::builder::Init_Coordinate_Goal_position();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_Result_progress
{
public:
  Init_Coordinate_Result_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_move::action::Coordinate_Result progress(::robot_move::action::Coordinate_Result::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_Result>()
{
  return robot_move::action::builder::Init_Coordinate_Result_progress();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_Feedback_success
{
public:
  Init_Coordinate_Feedback_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_move::action::Coordinate_Feedback success(::robot_move::action::Coordinate_Feedback::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_Feedback>()
{
  return robot_move::action::builder::Init_Coordinate_Feedback_success();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_SendGoal_Request_goal
{
public:
  explicit Init_Coordinate_SendGoal_Request_goal(::robot_move::action::Coordinate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_move::action::Coordinate_SendGoal_Request goal(::robot_move::action::Coordinate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_SendGoal_Request msg_;
};

class Init_Coordinate_SendGoal_Request_goal_id
{
public:
  Init_Coordinate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_SendGoal_Request_goal goal_id(::robot_move::action::Coordinate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Coordinate_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_move::action::Coordinate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_SendGoal_Request>()
{
  return robot_move::action::builder::Init_Coordinate_SendGoal_Request_goal_id();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_SendGoal_Response_stamp
{
public:
  explicit Init_Coordinate_SendGoal_Response_stamp(::robot_move::action::Coordinate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_move::action::Coordinate_SendGoal_Response stamp(::robot_move::action::Coordinate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_SendGoal_Response msg_;
};

class Init_Coordinate_SendGoal_Response_accepted
{
public:
  Init_Coordinate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_SendGoal_Response_stamp accepted(::robot_move::action::Coordinate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Coordinate_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_move::action::Coordinate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_SendGoal_Response>()
{
  return robot_move::action::builder::Init_Coordinate_SendGoal_Response_accepted();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_SendGoal_Event_response
{
public:
  explicit Init_Coordinate_SendGoal_Event_response(::robot_move::action::Coordinate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::robot_move::action::Coordinate_SendGoal_Event response(::robot_move::action::Coordinate_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_SendGoal_Event msg_;
};

class Init_Coordinate_SendGoal_Event_request
{
public:
  explicit Init_Coordinate_SendGoal_Event_request(::robot_move::action::Coordinate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Coordinate_SendGoal_Event_response request(::robot_move::action::Coordinate_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Coordinate_SendGoal_Event_response(msg_);
  }

private:
  ::robot_move::action::Coordinate_SendGoal_Event msg_;
};

class Init_Coordinate_SendGoal_Event_info
{
public:
  Init_Coordinate_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_SendGoal_Event_request info(::robot_move::action::Coordinate_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Coordinate_SendGoal_Event_request(msg_);
  }

private:
  ::robot_move::action::Coordinate_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_SendGoal_Event>()
{
  return robot_move::action::builder::Init_Coordinate_SendGoal_Event_info();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_GetResult_Request_goal_id
{
public:
  Init_Coordinate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_move::action::Coordinate_GetResult_Request goal_id(::robot_move::action::Coordinate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_GetResult_Request>()
{
  return robot_move::action::builder::Init_Coordinate_GetResult_Request_goal_id();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_GetResult_Response_result
{
public:
  explicit Init_Coordinate_GetResult_Response_result(::robot_move::action::Coordinate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_move::action::Coordinate_GetResult_Response result(::robot_move::action::Coordinate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_GetResult_Response msg_;
};

class Init_Coordinate_GetResult_Response_status
{
public:
  Init_Coordinate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_GetResult_Response_result status(::robot_move::action::Coordinate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Coordinate_GetResult_Response_result(msg_);
  }

private:
  ::robot_move::action::Coordinate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_GetResult_Response>()
{
  return robot_move::action::builder::Init_Coordinate_GetResult_Response_status();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_GetResult_Event_response
{
public:
  explicit Init_Coordinate_GetResult_Event_response(::robot_move::action::Coordinate_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::robot_move::action::Coordinate_GetResult_Event response(::robot_move::action::Coordinate_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_GetResult_Event msg_;
};

class Init_Coordinate_GetResult_Event_request
{
public:
  explicit Init_Coordinate_GetResult_Event_request(::robot_move::action::Coordinate_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Coordinate_GetResult_Event_response request(::robot_move::action::Coordinate_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Coordinate_GetResult_Event_response(msg_);
  }

private:
  ::robot_move::action::Coordinate_GetResult_Event msg_;
};

class Init_Coordinate_GetResult_Event_info
{
public:
  Init_Coordinate_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_GetResult_Event_request info(::robot_move::action::Coordinate_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Coordinate_GetResult_Event_request(msg_);
  }

private:
  ::robot_move::action::Coordinate_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_GetResult_Event>()
{
  return robot_move::action::builder::Init_Coordinate_GetResult_Event_info();
}

}  // namespace robot_move


namespace robot_move
{

namespace action
{

namespace builder
{

class Init_Coordinate_FeedbackMessage_feedback
{
public:
  explicit Init_Coordinate_FeedbackMessage_feedback(::robot_move::action::Coordinate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_move::action::Coordinate_FeedbackMessage feedback(::robot_move::action::Coordinate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_move::action::Coordinate_FeedbackMessage msg_;
};

class Init_Coordinate_FeedbackMessage_goal_id
{
public:
  Init_Coordinate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_FeedbackMessage_feedback goal_id(::robot_move::action::Coordinate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Coordinate_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_move::action::Coordinate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_move::action::Coordinate_FeedbackMessage>()
{
  return robot_move::action::builder::Init_Coordinate_FeedbackMessage_goal_id();
}

}  // namespace robot_move

#endif  // ROBOT_MOVE__ACTION__DETAIL__COORDINATE__BUILDER_HPP_
