// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from py_trees_ros_interfaces:srv/StatusReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "py_trees_ros_interfaces/srv/detail/status_report__rosidl_typesupport_introspection_c.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "py_trees_ros_interfaces/srv/detail/status_report__functions.h"
#include "py_trees_ros_interfaces/srv/detail/status_report__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__srv__StatusReport_Request__init(message_memory);
}

void StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__srv__StatusReport_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__srv__StatusReport_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_message_members = {
  "py_trees_ros_interfaces__srv",  // message namespace
  "StatusReport_Request",  // message name
  1,  // number of fields
  sizeof(py_trees_ros_interfaces__srv__StatusReport_Request),
  StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_message_member_array,  // message members
  StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_message_type_support_handle = {
  0,
  &StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, StatusReport_Request)() {
  if (!StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_message_type_support_handle.typesupport_identifier) {
    StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StatusReport_Request__rosidl_typesupport_introspection_c__StatusReport_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "py_trees_ros_interfaces/srv/detail/status_report__rosidl_typesupport_introspection_c.h"
// already included above
// #include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/status_report__functions.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/status_report__struct.h"


// Include directives for member types
// Member `report`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__srv__StatusReport_Response__init(message_memory);
}

void StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__srv__StatusReport_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_message_member_array[1] = {
  {
    "report",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__srv__StatusReport_Response, report),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_message_members = {
  "py_trees_ros_interfaces__srv",  // message namespace
  "StatusReport_Response",  // message name
  1,  // number of fields
  sizeof(py_trees_ros_interfaces__srv__StatusReport_Response),
  StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_message_member_array,  // message members
  StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_message_type_support_handle = {
  0,
  &StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, StatusReport_Response)() {
  if (!StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_message_type_support_handle.typesupport_identifier) {
    StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StatusReport_Response__rosidl_typesupport_introspection_c__StatusReport_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/status_report__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_service_members = {
  "py_trees_ros_interfaces__srv",  // service namespace
  "StatusReport",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_Request_message_type_support_handle,
  NULL  // response message
  // py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_Response_message_type_support_handle
};

static rosidl_service_type_support_t py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_service_type_support_handle = {
  0,
  &py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, StatusReport_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, StatusReport_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, StatusReport)() {
  if (!py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_service_type_support_handle.typesupport_identifier) {
    py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, StatusReport_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, srv, StatusReport_Response)()->data;
  }

  return &py_trees_ros_interfaces__srv__detail__status_report__rosidl_typesupport_introspection_c__StatusReport_service_type_support_handle;
}
