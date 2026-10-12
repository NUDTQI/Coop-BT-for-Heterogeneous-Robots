// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from py_trees_ros_interfaces:srv/CloseBlackboardStream.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__rosidl_typesupport_introspection_c.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__functions.h"
#include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__struct.h"


// Include directives for member types
// Member `topic_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__init(message_memory);
}

void CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_member_array[1] = {
  {
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__srv__CloseBlackboardStream_Request, topic_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_members = {
  "py_trees_ros_interfaces__srv",  // message namespace
  "CloseBlackboardStream_Request",  // message name
  1,  // number of fields
  sizeof(py_trees_ros_interfaces__srv__CloseBlackboardStream_Request),
  CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_member_array,  // message members
  CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_type_support_handle = {
  0,
  &CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, CloseBlackboardStream_Request)() {
  if (!CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_type_support_handle.typesupport_identifier) {
    CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CloseBlackboardStream_Request__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__rosidl_typesupport_introspection_c.h"
// already included above
// #include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__functions.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__init(message_memory);
}

void CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__srv__CloseBlackboardStream_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_members = {
  "py_trees_ros_interfaces__srv",  // message namespace
  "CloseBlackboardStream_Response",  // message name
  1,  // number of fields
  sizeof(py_trees_ros_interfaces__srv__CloseBlackboardStream_Response),
  CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_member_array,  // message members
  CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_type_support_handle = {
  0,
  &CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, CloseBlackboardStream_Response)() {
  if (!CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_type_support_handle.typesupport_identifier) {
    CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CloseBlackboardStream_Response__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_service_members = {
  "py_trees_ros_interfaces__srv",  // service namespace
  "CloseBlackboardStream",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_Request_message_type_support_handle,
  NULL  // response message
  // py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_Response_message_type_support_handle
};

static rosidl_service_type_support_t py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_service_type_support_handle = {
  0,
  &py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, CloseBlackboardStream_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, CloseBlackboardStream_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, CloseBlackboardStream)() {
  if (!py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_service_type_support_handle.typesupport_identifier) {
    py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, CloseBlackboardStream_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, CloseBlackboardStream_Response)()->data;
  }

  return &py_trees_ros_interfaces__srv__detail__close_blackboard_stream__rosidl_typesupport_introspection_c__CloseBlackboardStream_service_type_support_handle;
}
