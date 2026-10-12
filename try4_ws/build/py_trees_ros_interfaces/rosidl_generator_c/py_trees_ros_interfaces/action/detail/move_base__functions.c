// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:action/MoveBase.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/action/detail/move_base__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
py_trees_ros_interfaces__action__MoveBase_Goal__init(py_trees_ros_interfaces__action__MoveBase_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    py_trees_ros_interfaces__action__MoveBase_Goal__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_Goal__fini(py_trees_ros_interfaces__action__MoveBase_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
}

bool
py_trees_ros_interfaces__action__MoveBase_Goal__are_equal(const py_trees_ros_interfaces__action__MoveBase_Goal * lhs, const py_trees_ros_interfaces__action__MoveBase_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_Goal__copy(
  const py_trees_ros_interfaces__action__MoveBase_Goal * input,
  py_trees_ros_interfaces__action__MoveBase_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__action__MoveBase_Goal *
py_trees_ros_interfaces__action__MoveBase_Goal__create()
{
  py_trees_ros_interfaces__action__MoveBase_Goal * msg = (py_trees_ros_interfaces__action__MoveBase_Goal *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__action__MoveBase_Goal));
  bool success = py_trees_ros_interfaces__action__MoveBase_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__action__MoveBase_Goal__destroy(py_trees_ros_interfaces__action__MoveBase_Goal * msg)
{
  if (msg) {
    py_trees_ros_interfaces__action__MoveBase_Goal__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__action__MoveBase_Goal__Sequence__init(py_trees_ros_interfaces__action__MoveBase_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__action__MoveBase_Goal * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__action__MoveBase_Goal *)calloc(size, sizeof(py_trees_ros_interfaces__action__MoveBase_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__action__MoveBase_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__action__MoveBase_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_Goal__Sequence__fini(py_trees_ros_interfaces__action__MoveBase_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__action__MoveBase_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__action__MoveBase_Goal__Sequence *
py_trees_ros_interfaces__action__MoveBase_Goal__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__action__MoveBase_Goal__Sequence * array = (py_trees_ros_interfaces__action__MoveBase_Goal__Sequence *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__action__MoveBase_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__action__MoveBase_Goal__Sequence__destroy(py_trees_ros_interfaces__action__MoveBase_Goal__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__action__MoveBase_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__action__MoveBase_Goal__Sequence__are_equal(const py_trees_ros_interfaces__action__MoveBase_Goal__Sequence * lhs, const py_trees_ros_interfaces__action__MoveBase_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_Goal__Sequence__copy(
  const py_trees_ros_interfaces__action__MoveBase_Goal__Sequence * input,
  py_trees_ros_interfaces__action__MoveBase_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__action__MoveBase_Goal);
    py_trees_ros_interfaces__action__MoveBase_Goal * data =
      (py_trees_ros_interfaces__action__MoveBase_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__action__MoveBase_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__action__MoveBase_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
py_trees_ros_interfaces__action__MoveBase_Result__init(py_trees_ros_interfaces__action__MoveBase_Result * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    py_trees_ros_interfaces__action__MoveBase_Result__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_Result__fini(py_trees_ros_interfaces__action__MoveBase_Result * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
py_trees_ros_interfaces__action__MoveBase_Result__are_equal(const py_trees_ros_interfaces__action__MoveBase_Result * lhs, const py_trees_ros_interfaces__action__MoveBase_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_Result__copy(
  const py_trees_ros_interfaces__action__MoveBase_Result * input,
  py_trees_ros_interfaces__action__MoveBase_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__action__MoveBase_Result *
py_trees_ros_interfaces__action__MoveBase_Result__create()
{
  py_trees_ros_interfaces__action__MoveBase_Result * msg = (py_trees_ros_interfaces__action__MoveBase_Result *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__action__MoveBase_Result));
  bool success = py_trees_ros_interfaces__action__MoveBase_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__action__MoveBase_Result__destroy(py_trees_ros_interfaces__action__MoveBase_Result * msg)
{
  if (msg) {
    py_trees_ros_interfaces__action__MoveBase_Result__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__action__MoveBase_Result__Sequence__init(py_trees_ros_interfaces__action__MoveBase_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__action__MoveBase_Result * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__action__MoveBase_Result *)calloc(size, sizeof(py_trees_ros_interfaces__action__MoveBase_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__action__MoveBase_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__action__MoveBase_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_Result__Sequence__fini(py_trees_ros_interfaces__action__MoveBase_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__action__MoveBase_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__action__MoveBase_Result__Sequence *
py_trees_ros_interfaces__action__MoveBase_Result__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__action__MoveBase_Result__Sequence * array = (py_trees_ros_interfaces__action__MoveBase_Result__Sequence *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__action__MoveBase_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__action__MoveBase_Result__Sequence__destroy(py_trees_ros_interfaces__action__MoveBase_Result__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__action__MoveBase_Result__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__action__MoveBase_Result__Sequence__are_equal(const py_trees_ros_interfaces__action__MoveBase_Result__Sequence * lhs, const py_trees_ros_interfaces__action__MoveBase_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_Result__Sequence__copy(
  const py_trees_ros_interfaces__action__MoveBase_Result__Sequence * input,
  py_trees_ros_interfaces__action__MoveBase_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__action__MoveBase_Result);
    py_trees_ros_interfaces__action__MoveBase_Result * data =
      (py_trees_ros_interfaces__action__MoveBase_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__action__MoveBase_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__action__MoveBase_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `base_position`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
py_trees_ros_interfaces__action__MoveBase_Feedback__init(py_trees_ros_interfaces__action__MoveBase_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // base_position
  if (!geometry_msgs__msg__PoseStamped__init(&msg->base_position)) {
    py_trees_ros_interfaces__action__MoveBase_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_Feedback__fini(py_trees_ros_interfaces__action__MoveBase_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // base_position
  geometry_msgs__msg__PoseStamped__fini(&msg->base_position);
}

bool
py_trees_ros_interfaces__action__MoveBase_Feedback__are_equal(const py_trees_ros_interfaces__action__MoveBase_Feedback * lhs, const py_trees_ros_interfaces__action__MoveBase_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_position
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->base_position), &(rhs->base_position)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_Feedback__copy(
  const py_trees_ros_interfaces__action__MoveBase_Feedback * input,
  py_trees_ros_interfaces__action__MoveBase_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // base_position
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->base_position), &(output->base_position)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__action__MoveBase_Feedback *
py_trees_ros_interfaces__action__MoveBase_Feedback__create()
{
  py_trees_ros_interfaces__action__MoveBase_Feedback * msg = (py_trees_ros_interfaces__action__MoveBase_Feedback *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__action__MoveBase_Feedback));
  bool success = py_trees_ros_interfaces__action__MoveBase_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__action__MoveBase_Feedback__destroy(py_trees_ros_interfaces__action__MoveBase_Feedback * msg)
{
  if (msg) {
    py_trees_ros_interfaces__action__MoveBase_Feedback__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence__init(py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__action__MoveBase_Feedback * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__action__MoveBase_Feedback *)calloc(size, sizeof(py_trees_ros_interfaces__action__MoveBase_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__action__MoveBase_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__action__MoveBase_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence__fini(py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__action__MoveBase_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence *
py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence * array = (py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence__destroy(py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence__are_equal(const py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence * lhs, const py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence__copy(
  const py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence * input,
  py_trees_ros_interfaces__action__MoveBase_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__action__MoveBase_Feedback);
    py_trees_ros_interfaces__action__MoveBase_Feedback * data =
      (py_trees_ros_interfaces__action__MoveBase_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__action__MoveBase_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__action__MoveBase_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "py_trees_ros_interfaces/action/detail/move_base__functions.h"

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__init(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!py_trees_ros_interfaces__action__MoveBase_Goal__init(&msg->goal)) {
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__fini(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  py_trees_ros_interfaces__action__MoveBase_Goal__fini(&msg->goal);
}

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__are_equal(const py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * lhs, const py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!py_trees_ros_interfaces__action__MoveBase_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__copy(
  const py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * input,
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!py_trees_ros_interfaces__action__MoveBase_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__action__MoveBase_SendGoal_Request *
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__create()
{
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * msg = (py_trees_ros_interfaces__action__MoveBase_SendGoal_Request *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request));
  bool success = py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__destroy(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * msg)
{
  if (msg) {
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence__init(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__action__MoveBase_SendGoal_Request *)calloc(size, sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence__fini(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence *
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence * array = (py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence__destroy(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence__are_equal(const py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence * lhs, const py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence__copy(
  const py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence * input,
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Request);
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Request * data =
      (py_trees_ros_interfaces__action__MoveBase_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__init(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__fini(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__are_equal(const py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * lhs, const py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__copy(
  const py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * input,
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__action__MoveBase_SendGoal_Response *
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__create()
{
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * msg = (py_trees_ros_interfaces__action__MoveBase_SendGoal_Response *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response));
  bool success = py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__destroy(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * msg)
{
  if (msg) {
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence__init(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__action__MoveBase_SendGoal_Response *)calloc(size, sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence__fini(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence *
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence * array = (py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence__destroy(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence__are_equal(const py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence * lhs, const py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence__copy(
  const py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence * input,
  py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__action__MoveBase_SendGoal_Response);
    py_trees_ros_interfaces__action__MoveBase_SendGoal_Response * data =
      (py_trees_ros_interfaces__action__MoveBase_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__init(py_trees_ros_interfaces__action__MoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    py_trees_ros_interfaces__action__MoveBase_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__fini(py_trees_ros_interfaces__action__MoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__are_equal(const py_trees_ros_interfaces__action__MoveBase_GetResult_Request * lhs, const py_trees_ros_interfaces__action__MoveBase_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__copy(
  const py_trees_ros_interfaces__action__MoveBase_GetResult_Request * input,
  py_trees_ros_interfaces__action__MoveBase_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__action__MoveBase_GetResult_Request *
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__create()
{
  py_trees_ros_interfaces__action__MoveBase_GetResult_Request * msg = (py_trees_ros_interfaces__action__MoveBase_GetResult_Request *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Request));
  bool success = py_trees_ros_interfaces__action__MoveBase_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__destroy(py_trees_ros_interfaces__action__MoveBase_GetResult_Request * msg)
{
  if (msg) {
    py_trees_ros_interfaces__action__MoveBase_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence__init(py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__action__MoveBase_GetResult_Request * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__action__MoveBase_GetResult_Request *)calloc(size, sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__action__MoveBase_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__action__MoveBase_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence__fini(py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__action__MoveBase_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence *
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence * array = (py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence__destroy(py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence__are_equal(const py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence * lhs, const py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence__copy(
  const py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence * input,
  py_trees_ros_interfaces__action__MoveBase_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Request);
    py_trees_ros_interfaces__action__MoveBase_GetResult_Request * data =
      (py_trees_ros_interfaces__action__MoveBase_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__action__MoveBase_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__action__MoveBase_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "py_trees_ros_interfaces/action/detail/move_base__functions.h"

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__init(py_trees_ros_interfaces__action__MoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!py_trees_ros_interfaces__action__MoveBase_Result__init(&msg->result)) {
    py_trees_ros_interfaces__action__MoveBase_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__fini(py_trees_ros_interfaces__action__MoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  py_trees_ros_interfaces__action__MoveBase_Result__fini(&msg->result);
}

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__are_equal(const py_trees_ros_interfaces__action__MoveBase_GetResult_Response * lhs, const py_trees_ros_interfaces__action__MoveBase_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!py_trees_ros_interfaces__action__MoveBase_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__copy(
  const py_trees_ros_interfaces__action__MoveBase_GetResult_Response * input,
  py_trees_ros_interfaces__action__MoveBase_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!py_trees_ros_interfaces__action__MoveBase_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__action__MoveBase_GetResult_Response *
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__create()
{
  py_trees_ros_interfaces__action__MoveBase_GetResult_Response * msg = (py_trees_ros_interfaces__action__MoveBase_GetResult_Response *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Response));
  bool success = py_trees_ros_interfaces__action__MoveBase_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__destroy(py_trees_ros_interfaces__action__MoveBase_GetResult_Response * msg)
{
  if (msg) {
    py_trees_ros_interfaces__action__MoveBase_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence__init(py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__action__MoveBase_GetResult_Response * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__action__MoveBase_GetResult_Response *)calloc(size, sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__action__MoveBase_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__action__MoveBase_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence__fini(py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__action__MoveBase_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence *
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence * array = (py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence__destroy(py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence__are_equal(const py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence * lhs, const py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence__copy(
  const py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence * input,
  py_trees_ros_interfaces__action__MoveBase_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__action__MoveBase_GetResult_Response);
    py_trees_ros_interfaces__action__MoveBase_GetResult_Response * data =
      (py_trees_ros_interfaces__action__MoveBase_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__action__MoveBase_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__action__MoveBase_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "py_trees_ros_interfaces/action/detail/move_base__functions.h"

bool
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__init(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!py_trees_ros_interfaces__action__MoveBase_Feedback__init(&msg->feedback)) {
    py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__fini(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  py_trees_ros_interfaces__action__MoveBase_Feedback__fini(&msg->feedback);
}

bool
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__are_equal(const py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * lhs, const py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!py_trees_ros_interfaces__action__MoveBase_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__copy(
  const py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * input,
  py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!py_trees_ros_interfaces__action__MoveBase_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__action__MoveBase_FeedbackMessage *
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__create()
{
  py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * msg = (py_trees_ros_interfaces__action__MoveBase_FeedbackMessage *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage));
  bool success = py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__destroy(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * msg)
{
  if (msg) {
    py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence__init(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__action__MoveBase_FeedbackMessage *)calloc(size, sizeof(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence__fini(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence *
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence * array = (py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence *)malloc(sizeof(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence__destroy(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence__are_equal(const py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence * lhs, const py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence__copy(
  const py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence * input,
  py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__action__MoveBase_FeedbackMessage);
    py_trees_ros_interfaces__action__MoveBase_FeedbackMessage * data =
      (py_trees_ros_interfaces__action__MoveBase_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__action__MoveBase_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
