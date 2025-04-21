// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robot_move:action/Coordinate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robot_move/action/detail/coordinate__functions.h"
#include "robot_move/action/detail/coordinate__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_Goal_type_support_ids_t;

static const _Coordinate_Goal_type_support_ids_t _Coordinate_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_Goal_type_support_symbol_names_t _Coordinate_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_Goal)),
  }
};

typedef struct _Coordinate_Goal_type_support_data_t
{
  void * data[2];
} _Coordinate_Goal_type_support_data_t;

static _Coordinate_Goal_type_support_data_t _Coordinate_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_Goal_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_Goal__get_type_hash,
  &robot_move__action__Coordinate_Goal__get_type_description,
  &robot_move__action__Coordinate_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_Goal>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_Goal)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_Result_type_support_ids_t;

static const _Coordinate_Result_type_support_ids_t _Coordinate_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_Result_type_support_symbol_names_t _Coordinate_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_Result)),
  }
};

typedef struct _Coordinate_Result_type_support_data_t
{
  void * data[2];
} _Coordinate_Result_type_support_data_t;

static _Coordinate_Result_type_support_data_t _Coordinate_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_Result_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_Result__get_type_hash,
  &robot_move__action__Coordinate_Result__get_type_description,
  &robot_move__action__Coordinate_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_Result>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_Result)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_Feedback_type_support_ids_t;

static const _Coordinate_Feedback_type_support_ids_t _Coordinate_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_Feedback_type_support_symbol_names_t _Coordinate_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_Feedback)),
  }
};

typedef struct _Coordinate_Feedback_type_support_data_t
{
  void * data[2];
} _Coordinate_Feedback_type_support_data_t;

static _Coordinate_Feedback_type_support_data_t _Coordinate_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_Feedback_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_Feedback__get_type_hash,
  &robot_move__action__Coordinate_Feedback__get_type_description,
  &robot_move__action__Coordinate_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_Feedback>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_Feedback)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_SendGoal_Request_type_support_ids_t;

static const _Coordinate_SendGoal_Request_type_support_ids_t _Coordinate_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_SendGoal_Request_type_support_symbol_names_t _Coordinate_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_SendGoal_Request)),
  }
};

typedef struct _Coordinate_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Coordinate_SendGoal_Request_type_support_data_t;

static _Coordinate_SendGoal_Request_type_support_data_t _Coordinate_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_SendGoal_Request_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_SendGoal_Request__get_type_hash,
  &robot_move__action__Coordinate_SendGoal_Request__get_type_description,
  &robot_move__action__Coordinate_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Request>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_SendGoal_Request)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_SendGoal_Response_type_support_ids_t;

static const _Coordinate_SendGoal_Response_type_support_ids_t _Coordinate_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_SendGoal_Response_type_support_symbol_names_t _Coordinate_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_SendGoal_Response)),
  }
};

typedef struct _Coordinate_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Coordinate_SendGoal_Response_type_support_data_t;

static _Coordinate_SendGoal_Response_type_support_data_t _Coordinate_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_SendGoal_Response_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_SendGoal_Response__get_type_hash,
  &robot_move__action__Coordinate_SendGoal_Response__get_type_description,
  &robot_move__action__Coordinate_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Response>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_SendGoal_Response)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_SendGoal_Event_type_support_ids_t;

static const _Coordinate_SendGoal_Event_type_support_ids_t _Coordinate_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_SendGoal_Event_type_support_symbol_names_t _Coordinate_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_SendGoal_Event)),
  }
};

typedef struct _Coordinate_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Coordinate_SendGoal_Event_type_support_data_t;

static _Coordinate_SendGoal_Event_type_support_data_t _Coordinate_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_SendGoal_Event_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_SendGoal_Event__get_type_hash,
  &robot_move__action__Coordinate_SendGoal_Event__get_type_description,
  &robot_move__action__Coordinate_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Event>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_SendGoal_Event)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_SendGoal_type_support_ids_t;

static const _Coordinate_SendGoal_type_support_ids_t _Coordinate_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_SendGoal_type_support_symbol_names_t _Coordinate_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_SendGoal)),
  }
};

typedef struct _Coordinate_SendGoal_type_support_data_t
{
  void * data[2];
} _Coordinate_SendGoal_type_support_data_t;

static _Coordinate_SendGoal_type_support_data_t _Coordinate_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_SendGoal_service_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Coordinate_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_move::action::Coordinate_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robot_move::action::Coordinate_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robot_move::action::Coordinate_SendGoal>,
  &robot_move__action__Coordinate_SendGoal__get_type_hash,
  &robot_move__action__Coordinate_SendGoal__get_type_description,
  &robot_move__action__Coordinate_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_move::action::Coordinate_SendGoal>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robot_move::action::Coordinate_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_GetResult_Request_type_support_ids_t;

static const _Coordinate_GetResult_Request_type_support_ids_t _Coordinate_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_GetResult_Request_type_support_symbol_names_t _Coordinate_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_GetResult_Request)),
  }
};

typedef struct _Coordinate_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Coordinate_GetResult_Request_type_support_data_t;

static _Coordinate_GetResult_Request_type_support_data_t _Coordinate_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_GetResult_Request_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_GetResult_Request__get_type_hash,
  &robot_move__action__Coordinate_GetResult_Request__get_type_description,
  &robot_move__action__Coordinate_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Request>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_GetResult_Request)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_GetResult_Response_type_support_ids_t;

static const _Coordinate_GetResult_Response_type_support_ids_t _Coordinate_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_GetResult_Response_type_support_symbol_names_t _Coordinate_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_GetResult_Response)),
  }
};

typedef struct _Coordinate_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Coordinate_GetResult_Response_type_support_data_t;

static _Coordinate_GetResult_Response_type_support_data_t _Coordinate_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_GetResult_Response_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_GetResult_Response__get_type_hash,
  &robot_move__action__Coordinate_GetResult_Response__get_type_description,
  &robot_move__action__Coordinate_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Response>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_GetResult_Response)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_GetResult_Event_type_support_ids_t;

static const _Coordinate_GetResult_Event_type_support_ids_t _Coordinate_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_GetResult_Event_type_support_symbol_names_t _Coordinate_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_GetResult_Event)),
  }
};

typedef struct _Coordinate_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Coordinate_GetResult_Event_type_support_data_t;

static _Coordinate_GetResult_Event_type_support_data_t _Coordinate_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_GetResult_Event_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_GetResult_Event__get_type_hash,
  &robot_move__action__Coordinate_GetResult_Event__get_type_description,
  &robot_move__action__Coordinate_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Event>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_GetResult_Event)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_GetResult_type_support_ids_t;

static const _Coordinate_GetResult_type_support_ids_t _Coordinate_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_GetResult_type_support_symbol_names_t _Coordinate_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_GetResult)),
  }
};

typedef struct _Coordinate_GetResult_type_support_data_t
{
  void * data[2];
} _Coordinate_GetResult_type_support_data_t;

static _Coordinate_GetResult_type_support_data_t _Coordinate_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_GetResult_service_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Coordinate_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_move::action::Coordinate_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robot_move::action::Coordinate_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robot_move::action::Coordinate_GetResult>,
  &robot_move__action__Coordinate_GetResult__get_type_hash,
  &robot_move__action__Coordinate_GetResult__get_type_description,
  &robot_move__action__Coordinate_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_move::action::Coordinate_GetResult>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robot_move::action::Coordinate_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_move/action/detail/coordinate__functions.h"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Coordinate_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Coordinate_FeedbackMessage_type_support_ids_t;

static const _Coordinate_FeedbackMessage_type_support_ids_t _Coordinate_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Coordinate_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Coordinate_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Coordinate_FeedbackMessage_type_support_symbol_names_t _Coordinate_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_move, action, Coordinate_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_move, action, Coordinate_FeedbackMessage)),
  }
};

typedef struct _Coordinate_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Coordinate_FeedbackMessage_type_support_data_t;

static _Coordinate_FeedbackMessage_type_support_data_t _Coordinate_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Coordinate_FeedbackMessage_message_typesupport_map = {
  2,
  "robot_move",
  &_Coordinate_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Coordinate_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Coordinate_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Coordinate_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Coordinate_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_move__action__Coordinate_FeedbackMessage__get_type_hash,
  &robot_move__action__Coordinate_FeedbackMessage__get_type_description,
  &robot_move__action__Coordinate_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_move::action::Coordinate_FeedbackMessage>()
{
  return &::robot_move::action::rosidl_typesupport_cpp::Coordinate_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate_FeedbackMessage)() {
  return get_message_type_support_handle<robot_move::action::Coordinate_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "robot_move/action/detail/coordinate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace robot_move
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Coordinate_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &robot_move__action__Coordinate__get_type_hash,
  &robot_move__action__Coordinate__get_type_description,
  &robot_move__action__Coordinate__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_move

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<robot_move::action::Coordinate>()
{
  using ::robot_move::action::rosidl_typesupport_cpp::Coordinate_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Coordinate_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::robot_move::action::Coordinate::Impl::SendGoalService>();
  Coordinate_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::robot_move::action::Coordinate::Impl::GetResultService>();
  Coordinate_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::robot_move::action::Coordinate::Impl::CancelGoalService>();
  Coordinate_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::robot_move::action::Coordinate::Impl::FeedbackMessage>();
  Coordinate_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::robot_move::action::Coordinate::Impl::GoalStatusMessage>();
  return &Coordinate_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, robot_move, action, Coordinate)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<robot_move::action::Coordinate>();
}

#ifdef __cplusplus
}
#endif
