// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_move:action/Coordinate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_move/action/coordinate.h"


#ifndef ROBOT_MOVE__ACTION__DETAIL__COORDINATE__STRUCT_H_
#define ROBOT_MOVE__ACTION__DETAIL__COORDINATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_Goal
{
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
} robot_move__action__Coordinate_Goal;

// Struct for a sequence of robot_move__action__Coordinate_Goal.
typedef struct robot_move__action__Coordinate_Goal__Sequence
{
  robot_move__action__Coordinate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_Result
{
  float progress;
} robot_move__action__Coordinate_Result;

// Struct for a sequence of robot_move__action__Coordinate_Result.
typedef struct robot_move__action__Coordinate_Result__Sequence
{
  robot_move__action__Coordinate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_Feedback
{
  bool success;
} robot_move__action__Coordinate_Feedback;

// Struct for a sequence of robot_move__action__Coordinate_Feedback.
typedef struct robot_move__action__Coordinate_Feedback__Sequence
{
  robot_move__action__Coordinate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_move/action/detail/coordinate__struct.h"

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_move__action__Coordinate_Goal goal;
} robot_move__action__Coordinate_SendGoal_Request;

// Struct for a sequence of robot_move__action__Coordinate_SendGoal_Request.
typedef struct robot_move__action__Coordinate_SendGoal_Request__Sequence
{
  robot_move__action__Coordinate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_move__action__Coordinate_SendGoal_Response;

// Struct for a sequence of robot_move__action__Coordinate_SendGoal_Response.
typedef struct robot_move__action__Coordinate_SendGoal_Response__Sequence
{
  robot_move__action__Coordinate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_move__action__Coordinate_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_move__action__Coordinate_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_move__action__Coordinate_SendGoal_Request__Sequence request;
  robot_move__action__Coordinate_SendGoal_Response__Sequence response;
} robot_move__action__Coordinate_SendGoal_Event;

// Struct for a sequence of robot_move__action__Coordinate_SendGoal_Event.
typedef struct robot_move__action__Coordinate_SendGoal_Event__Sequence
{
  robot_move__action__Coordinate_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_move__action__Coordinate_GetResult_Request;

// Struct for a sequence of robot_move__action__Coordinate_GetResult_Request.
typedef struct robot_move__action__Coordinate_GetResult_Request__Sequence
{
  robot_move__action__Coordinate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_move/action/detail/coordinate__struct.h"

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_GetResult_Response
{
  int8_t status;
  robot_move__action__Coordinate_Result result;
} robot_move__action__Coordinate_GetResult_Response;

// Struct for a sequence of robot_move__action__Coordinate_GetResult_Response.
typedef struct robot_move__action__Coordinate_GetResult_Response__Sequence
{
  robot_move__action__Coordinate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_move__action__Coordinate_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_move__action__Coordinate_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_move__action__Coordinate_GetResult_Request__Sequence request;
  robot_move__action__Coordinate_GetResult_Response__Sequence response;
} robot_move__action__Coordinate_GetResult_Event;

// Struct for a sequence of robot_move__action__Coordinate_GetResult_Event.
typedef struct robot_move__action__Coordinate_GetResult_Event__Sequence
{
  robot_move__action__Coordinate_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_move/action/detail/coordinate__struct.h"

/// Struct defined in action/Coordinate in the package robot_move.
typedef struct robot_move__action__Coordinate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_move__action__Coordinate_Feedback feedback;
} robot_move__action__Coordinate_FeedbackMessage;

// Struct for a sequence of robot_move__action__Coordinate_FeedbackMessage.
typedef struct robot_move__action__Coordinate_FeedbackMessage__Sequence
{
  robot_move__action__Coordinate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_move__action__Coordinate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MOVE__ACTION__DETAIL__COORDINATE__STRUCT_H_
