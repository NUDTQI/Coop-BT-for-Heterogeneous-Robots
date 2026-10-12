// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `behaviours`
#include "py_trees_ros_interfaces/msg/detail/behaviour__functions.h"
// Member `blackboard_on_visited_path`
#include "diagnostic_msgs/msg/detail/key_value__functions.h"
// Member `blackboard_activity`
#include "py_trees_ros_interfaces/msg/detail/activity_item__functions.h"
// Member `statistics`
#include "py_trees_ros_interfaces/msg/detail/statistics__functions.h"

bool
py_trees_ros_interfaces__msg__BehaviourTree__init(py_trees_ros_interfaces__msg__BehaviourTree * msg)
{
  if (!msg) {
    return false;
  }
  // behaviours
  if (!py_trees_ros_interfaces__msg__Behaviour__Sequence__init(&msg->behaviours, 0)) {
    py_trees_ros_interfaces__msg__BehaviourTree__fini(msg);
    return false;
  }
  // changed
  // blackboard_on_visited_path
  if (!diagnostic_msgs__msg__KeyValue__Sequence__init(&msg->blackboard_on_visited_path, 0)) {
    py_trees_ros_interfaces__msg__BehaviourTree__fini(msg);
    return false;
  }
  // blackboard_activity
  if (!py_trees_ros_interfaces__msg__ActivityItem__Sequence__init(&msg->blackboard_activity, 0)) {
    py_trees_ros_interfaces__msg__BehaviourTree__fini(msg);
    return false;
  }
  // statistics
  if (!py_trees_ros_interfaces__msg__Statistics__init(&msg->statistics)) {
    py_trees_ros_interfaces__msg__BehaviourTree__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__msg__BehaviourTree__fini(py_trees_ros_interfaces__msg__BehaviourTree * msg)
{
  if (!msg) {
    return;
  }
  // behaviours
  py_trees_ros_interfaces__msg__Behaviour__Sequence__fini(&msg->behaviours);
  // changed
  // blackboard_on_visited_path
  diagnostic_msgs__msg__KeyValue__Sequence__fini(&msg->blackboard_on_visited_path);
  // blackboard_activity
  py_trees_ros_interfaces__msg__ActivityItem__Sequence__fini(&msg->blackboard_activity);
  // statistics
  py_trees_ros_interfaces__msg__Statistics__fini(&msg->statistics);
}

bool
py_trees_ros_interfaces__msg__BehaviourTree__are_equal(const py_trees_ros_interfaces__msg__BehaviourTree * lhs, const py_trees_ros_interfaces__msg__BehaviourTree * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // behaviours
  if (!py_trees_ros_interfaces__msg__Behaviour__Sequence__are_equal(
      &(lhs->behaviours), &(rhs->behaviours)))
  {
    return false;
  }
  // changed
  if (lhs->changed != rhs->changed) {
    return false;
  }
  // blackboard_on_visited_path
  if (!diagnostic_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->blackboard_on_visited_path), &(rhs->blackboard_on_visited_path)))
  {
    return false;
  }
  // blackboard_activity
  if (!py_trees_ros_interfaces__msg__ActivityItem__Sequence__are_equal(
      &(lhs->blackboard_activity), &(rhs->blackboard_activity)))
  {
    return false;
  }
  // statistics
  if (!py_trees_ros_interfaces__msg__Statistics__are_equal(
      &(lhs->statistics), &(rhs->statistics)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__BehaviourTree__copy(
  const py_trees_ros_interfaces__msg__BehaviourTree * input,
  py_trees_ros_interfaces__msg__BehaviourTree * output)
{
  if (!input || !output) {
    return false;
  }
  // behaviours
  if (!py_trees_ros_interfaces__msg__Behaviour__Sequence__copy(
      &(input->behaviours), &(output->behaviours)))
  {
    return false;
  }
  // changed
  output->changed = input->changed;
  // blackboard_on_visited_path
  if (!diagnostic_msgs__msg__KeyValue__Sequence__copy(
      &(input->blackboard_on_visited_path), &(output->blackboard_on_visited_path)))
  {
    return false;
  }
  // blackboard_activity
  if (!py_trees_ros_interfaces__msg__ActivityItem__Sequence__copy(
      &(input->blackboard_activity), &(output->blackboard_activity)))
  {
    return false;
  }
  // statistics
  if (!py_trees_ros_interfaces__msg__Statistics__copy(
      &(input->statistics), &(output->statistics)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__msg__BehaviourTree *
py_trees_ros_interfaces__msg__BehaviourTree__create()
{
  py_trees_ros_interfaces__msg__BehaviourTree * msg = (py_trees_ros_interfaces__msg__BehaviourTree *)malloc(sizeof(py_trees_ros_interfaces__msg__BehaviourTree));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__msg__BehaviourTree));
  bool success = py_trees_ros_interfaces__msg__BehaviourTree__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__msg__BehaviourTree__destroy(py_trees_ros_interfaces__msg__BehaviourTree * msg)
{
  if (msg) {
    py_trees_ros_interfaces__msg__BehaviourTree__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__msg__BehaviourTree__Sequence__init(py_trees_ros_interfaces__msg__BehaviourTree__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__msg__BehaviourTree * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__msg__BehaviourTree *)calloc(size, sizeof(py_trees_ros_interfaces__msg__BehaviourTree));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__msg__BehaviourTree__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__msg__BehaviourTree__fini(&data[i - 1]);
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
py_trees_ros_interfaces__msg__BehaviourTree__Sequence__fini(py_trees_ros_interfaces__msg__BehaviourTree__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__msg__BehaviourTree__fini(&array->data[i]);
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

py_trees_ros_interfaces__msg__BehaviourTree__Sequence *
py_trees_ros_interfaces__msg__BehaviourTree__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__msg__BehaviourTree__Sequence * array = (py_trees_ros_interfaces__msg__BehaviourTree__Sequence *)malloc(sizeof(py_trees_ros_interfaces__msg__BehaviourTree__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__msg__BehaviourTree__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__msg__BehaviourTree__Sequence__destroy(py_trees_ros_interfaces__msg__BehaviourTree__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__msg__BehaviourTree__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__msg__BehaviourTree__Sequence__are_equal(const py_trees_ros_interfaces__msg__BehaviourTree__Sequence * lhs, const py_trees_ros_interfaces__msg__BehaviourTree__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__msg__BehaviourTree__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__BehaviourTree__Sequence__copy(
  const py_trees_ros_interfaces__msg__BehaviourTree__Sequence * input,
  py_trees_ros_interfaces__msg__BehaviourTree__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__msg__BehaviourTree);
    py_trees_ros_interfaces__msg__BehaviourTree * data =
      (py_trees_ros_interfaces__msg__BehaviourTree *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__msg__BehaviourTree__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__msg__BehaviourTree__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__msg__BehaviourTree__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
