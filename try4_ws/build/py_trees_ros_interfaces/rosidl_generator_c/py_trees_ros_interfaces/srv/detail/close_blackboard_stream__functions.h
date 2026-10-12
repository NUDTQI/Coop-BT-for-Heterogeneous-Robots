// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from py_trees_ros_interfaces:srv/CloseBlackboardStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__FUNCTIONS_H_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "py_trees_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__struct.h"

/// Initialize srv/CloseBlackboardStream message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Request
 * )) before or use
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__init(py_trees_ros_interfaces__srv__CloseBlackboardStream_Request * msg);

/// Finalize srv/CloseBlackboardStream message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
void
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__fini(py_trees_ros_interfaces__srv__CloseBlackboardStream_Request * msg);

/// Create srv/CloseBlackboardStream message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request *
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__create();

/// Destroy srv/CloseBlackboardStream message.
/**
 * It calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
void
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__destroy(py_trees_ros_interfaces__srv__CloseBlackboardStream_Request * msg);

/// Check for srv/CloseBlackboardStream message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__are_equal(const py_trees_ros_interfaces__srv__CloseBlackboardStream_Request * lhs, const py_trees_ros_interfaces__srv__CloseBlackboardStream_Request * rhs);

/// Copy a srv/CloseBlackboardStream message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__copy(
  const py_trees_ros_interfaces__srv__CloseBlackboardStream_Request * input,
  py_trees_ros_interfaces__srv__CloseBlackboardStream_Request * output);

/// Initialize array of srv/CloseBlackboardStream messages.
/**
 * It allocates the memory for the number of elements and calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence__init(py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence * array, size_t size);

/// Finalize array of srv/CloseBlackboardStream messages.
/**
 * It calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
void
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence__fini(py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence * array);

/// Create array of srv/CloseBlackboardStream messages.
/**
 * It allocates the memory for the array and calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence *
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence__create(size_t size);

/// Destroy array of srv/CloseBlackboardStream messages.
/**
 * It calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
void
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence__destroy(py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence * array);

/// Check for srv/CloseBlackboardStream message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence__are_equal(const py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence * lhs, const py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence * rhs);

/// Copy an array of srv/CloseBlackboardStream messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence__copy(
  const py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence * input,
  py_trees_ros_interfaces__srv__CloseBlackboardStream_Request__Sequence * output);

/// Initialize srv/CloseBlackboardStream message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Response
 * )) before or use
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__init(py_trees_ros_interfaces__srv__CloseBlackboardStream_Response * msg);

/// Finalize srv/CloseBlackboardStream message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
void
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__fini(py_trees_ros_interfaces__srv__CloseBlackboardStream_Response * msg);

/// Create srv/CloseBlackboardStream message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response *
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__create();

/// Destroy srv/CloseBlackboardStream message.
/**
 * It calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
void
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__destroy(py_trees_ros_interfaces__srv__CloseBlackboardStream_Response * msg);

/// Check for srv/CloseBlackboardStream message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__are_equal(const py_trees_ros_interfaces__srv__CloseBlackboardStream_Response * lhs, const py_trees_ros_interfaces__srv__CloseBlackboardStream_Response * rhs);

/// Copy a srv/CloseBlackboardStream message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__copy(
  const py_trees_ros_interfaces__srv__CloseBlackboardStream_Response * input,
  py_trees_ros_interfaces__srv__CloseBlackboardStream_Response * output);

/// Initialize array of srv/CloseBlackboardStream messages.
/**
 * It allocates the memory for the number of elements and calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence__init(py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence * array, size_t size);

/// Finalize array of srv/CloseBlackboardStream messages.
/**
 * It calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
void
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence__fini(py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence * array);

/// Create array of srv/CloseBlackboardStream messages.
/**
 * It allocates the memory for the array and calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence *
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence__create(size_t size);

/// Destroy array of srv/CloseBlackboardStream messages.
/**
 * It calls
 * py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
void
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence__destroy(py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence * array);

/// Check for srv/CloseBlackboardStream message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence__are_equal(const py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence * lhs, const py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence * rhs);

/// Copy an array of srv/CloseBlackboardStream messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_py_trees_ros_interfaces
bool
py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence__copy(
  const py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence * input,
  py_trees_ros_interfaces__srv__CloseBlackboardStream_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__FUNCTIONS_H_
