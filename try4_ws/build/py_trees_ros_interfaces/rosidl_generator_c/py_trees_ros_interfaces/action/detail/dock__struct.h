// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:action/Dock.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__ACTION__DETAIL__DOCK__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__ACTION__DETAIL__DOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Dock in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__action__Dock_Goal
{
  bool dock;
} py_trees_ros_interfaces__action__Dock_Goal;

// Struct for a sequence of py_trees_ros_interfaces__action__Dock_Goal.
typedef struct py_trees_ros_interfaces__action__Dock_Goal__Sequence
{
  py_trees_ros_interfaces__action__Dock_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__action__Dock_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/Dock in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__action__Dock_Result
{
  rosidl_runtime_c__String message;
} py_trees_ros_interfaces__action__Dock_Result;

// Struct for a sequence of py_trees_ros_interfaces__action__Dock_Result.
typedef struct py_trees_ros_interfaces__action__Dock_Result__Sequence
{
  py_trees_ros_interfaces__action__Dock_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__action__Dock_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Dock in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__action__Dock_Feedback
{
  float percentage_completed;
} py_trees_ros_interfaces__action__Dock_Feedback;

// Struct for a sequence of py_trees_ros_interfaces__action__Dock_Feedback.
typedef struct py_trees_ros_interfaces__action__Dock_Feedback__Sequence
{
  py_trees_ros_interfaces__action__Dock_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__action__Dock_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "py_trees_ros_interfaces/action/detail/dock__struct.h"

// Struct defined in action/Dock in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__action__Dock_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  py_trees_ros_interfaces__action__Dock_Goal goal;
} py_trees_ros_interfaces__action__Dock_SendGoal_Request;

// Struct for a sequence of py_trees_ros_interfaces__action__Dock_SendGoal_Request.
typedef struct py_trees_ros_interfaces__action__Dock_SendGoal_Request__Sequence
{
  py_trees_ros_interfaces__action__Dock_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__action__Dock_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Dock in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__action__Dock_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} py_trees_ros_interfaces__action__Dock_SendGoal_Response;

// Struct for a sequence of py_trees_ros_interfaces__action__Dock_SendGoal_Response.
typedef struct py_trees_ros_interfaces__action__Dock_SendGoal_Response__Sequence
{
  py_trees_ros_interfaces__action__Dock_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__action__Dock_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Dock in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__action__Dock_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} py_trees_ros_interfaces__action__Dock_GetResult_Request;

// Struct for a sequence of py_trees_ros_interfaces__action__Dock_GetResult_Request.
typedef struct py_trees_ros_interfaces__action__Dock_GetResult_Request__Sequence
{
  py_trees_ros_interfaces__action__Dock_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__action__Dock_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "py_trees_ros_interfaces/action/detail/dock__struct.h"

// Struct defined in action/Dock in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__action__Dock_GetResult_Response
{
  int8_t status;
  py_trees_ros_interfaces__action__Dock_Result result;
} py_trees_ros_interfaces__action__Dock_GetResult_Response;

// Struct for a sequence of py_trees_ros_interfaces__action__Dock_GetResult_Response.
typedef struct py_trees_ros_interfaces__action__Dock_GetResult_Response__Sequence
{
  py_trees_ros_interfaces__action__Dock_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__action__Dock_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "py_trees_ros_interfaces/action/detail/dock__struct.h"

// Struct defined in action/Dock in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__action__Dock_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  py_trees_ros_interfaces__action__Dock_Feedback feedback;
} py_trees_ros_interfaces__action__Dock_FeedbackMessage;

// Struct for a sequence of py_trees_ros_interfaces__action__Dock_FeedbackMessage.
typedef struct py_trees_ros_interfaces__action__Dock_FeedbackMessage__Sequence
{
  py_trees_ros_interfaces__action__Dock_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__action__Dock_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__ACTION__DETAIL__DOCK__STRUCT_H_
