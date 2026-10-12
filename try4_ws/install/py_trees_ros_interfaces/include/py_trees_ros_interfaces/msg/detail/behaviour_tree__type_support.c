// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__rosidl_typesupport_introspection_c.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__functions.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__struct.h"


// Include directives for member types
// Member `behaviours`
#include "py_trees_ros_interfaces/msg/behaviour.h"
// Member `behaviours`
#include "py_trees_ros_interfaces/msg/detail/behaviour__rosidl_typesupport_introspection_c.h"
// Member `blackboard_on_visited_path`
#include "diagnostic_msgs/msg/key_value.h"
// Member `blackboard_on_visited_path`
#include "diagnostic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"
// Member `blackboard_activity`
#include "py_trees_ros_interfaces/msg/activity_item.h"
// Member `blackboard_activity`
#include "py_trees_ros_interfaces/msg/detail/activity_item__rosidl_typesupport_introspection_c.h"
// Member `statistics`
#include "py_trees_ros_interfaces/msg/statistics.h"
// Member `statistics`
#include "py_trees_ros_interfaces/msg/detail/statistics__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__msg__BehaviourTree__init(message_memory);
}

void BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__msg__BehaviourTree__fini(message_memory);
}

size_t BehaviourTree__rosidl_typesupport_introspection_c__size_function__Behaviour__behaviours(
  const void * untyped_member)
{
  const py_trees_ros_interfaces__msg__Behaviour__Sequence * member =
    (const py_trees_ros_interfaces__msg__Behaviour__Sequence *)(untyped_member);
  return member->size;
}

const void * BehaviourTree__rosidl_typesupport_introspection_c__get_const_function__Behaviour__behaviours(
  const void * untyped_member, size_t index)
{
  const py_trees_ros_interfaces__msg__Behaviour__Sequence * member =
    (const py_trees_ros_interfaces__msg__Behaviour__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BehaviourTree__rosidl_typesupport_introspection_c__get_function__Behaviour__behaviours(
  void * untyped_member, size_t index)
{
  py_trees_ros_interfaces__msg__Behaviour__Sequence * member =
    (py_trees_ros_interfaces__msg__Behaviour__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BehaviourTree__rosidl_typesupport_introspection_c__resize_function__Behaviour__behaviours(
  void * untyped_member, size_t size)
{
  py_trees_ros_interfaces__msg__Behaviour__Sequence * member =
    (py_trees_ros_interfaces__msg__Behaviour__Sequence *)(untyped_member);
  py_trees_ros_interfaces__msg__Behaviour__Sequence__fini(member);
  return py_trees_ros_interfaces__msg__Behaviour__Sequence__init(member, size);
}

size_t BehaviourTree__rosidl_typesupport_introspection_c__size_function__KeyValue__blackboard_on_visited_path(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__KeyValue__Sequence * member =
    (const diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * BehaviourTree__rosidl_typesupport_introspection_c__get_const_function__KeyValue__blackboard_on_visited_path(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__KeyValue__Sequence * member =
    (const diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BehaviourTree__rosidl_typesupport_introspection_c__get_function__KeyValue__blackboard_on_visited_path(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__KeyValue__Sequence * member =
    (diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BehaviourTree__rosidl_typesupport_introspection_c__resize_function__KeyValue__blackboard_on_visited_path(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__KeyValue__Sequence * member =
    (diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  diagnostic_msgs__msg__KeyValue__Sequence__fini(member);
  return diagnostic_msgs__msg__KeyValue__Sequence__init(member, size);
}

size_t BehaviourTree__rosidl_typesupport_introspection_c__size_function__ActivityItem__blackboard_activity(
  const void * untyped_member)
{
  const py_trees_ros_interfaces__msg__ActivityItem__Sequence * member =
    (const py_trees_ros_interfaces__msg__ActivityItem__Sequence *)(untyped_member);
  return member->size;
}

const void * BehaviourTree__rosidl_typesupport_introspection_c__get_const_function__ActivityItem__blackboard_activity(
  const void * untyped_member, size_t index)
{
  const py_trees_ros_interfaces__msg__ActivityItem__Sequence * member =
    (const py_trees_ros_interfaces__msg__ActivityItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BehaviourTree__rosidl_typesupport_introspection_c__get_function__ActivityItem__blackboard_activity(
  void * untyped_member, size_t index)
{
  py_trees_ros_interfaces__msg__ActivityItem__Sequence * member =
    (py_trees_ros_interfaces__msg__ActivityItem__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BehaviourTree__rosidl_typesupport_introspection_c__resize_function__ActivityItem__blackboard_activity(
  void * untyped_member, size_t size)
{
  py_trees_ros_interfaces__msg__ActivityItem__Sequence * member =
    (py_trees_ros_interfaces__msg__ActivityItem__Sequence *)(untyped_member);
  py_trees_ros_interfaces__msg__ActivityItem__Sequence__fini(member);
  return py_trees_ros_interfaces__msg__ActivityItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_member_array[5] = {
  {
    "behaviours",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__BehaviourTree, behaviours),  // bytes offset in struct
    NULL,  // default value
    BehaviourTree__rosidl_typesupport_introspection_c__size_function__Behaviour__behaviours,  // size() function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__get_const_function__Behaviour__behaviours,  // get_const(index) function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__get_function__Behaviour__behaviours,  // get(index) function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__resize_function__Behaviour__behaviours  // resize(index) function pointer
  },
  {
    "changed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__BehaviourTree, changed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blackboard_on_visited_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__BehaviourTree, blackboard_on_visited_path),  // bytes offset in struct
    NULL,  // default value
    BehaviourTree__rosidl_typesupport_introspection_c__size_function__KeyValue__blackboard_on_visited_path,  // size() function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__get_const_function__KeyValue__blackboard_on_visited_path,  // get_const(index) function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__get_function__KeyValue__blackboard_on_visited_path,  // get(index) function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__resize_function__KeyValue__blackboard_on_visited_path  // resize(index) function pointer
  },
  {
    "blackboard_activity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__BehaviourTree, blackboard_activity),  // bytes offset in struct
    NULL,  // default value
    BehaviourTree__rosidl_typesupport_introspection_c__size_function__ActivityItem__blackboard_activity,  // size() function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__get_const_function__ActivityItem__blackboard_activity,  // get_const(index) function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__get_function__ActivityItem__blackboard_activity,  // get(index) function pointer
    BehaviourTree__rosidl_typesupport_introspection_c__resize_function__ActivityItem__blackboard_activity  // resize(index) function pointer
  },
  {
    "statistics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__BehaviourTree, statistics),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_members = {
  "py_trees_ros_interfaces__msg",  // message namespace
  "BehaviourTree",  // message name
  5,  // number of fields
  sizeof(py_trees_ros_interfaces__msg__BehaviourTree),
  BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_member_array,  // message members
  BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_type_support_handle = {
  0,
  &BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, BehaviourTree)() {
  BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, Behaviour)();
  BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, KeyValue)();
  BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, ActivityItem)();
  BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, Statistics)();
  if (!BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_type_support_handle.typesupport_identifier) {
    BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BehaviourTree__rosidl_typesupport_introspection_c__BehaviourTree_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
