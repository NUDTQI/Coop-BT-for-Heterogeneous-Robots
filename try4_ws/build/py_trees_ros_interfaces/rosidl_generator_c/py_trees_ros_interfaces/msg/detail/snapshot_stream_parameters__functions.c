// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:msg/SnapshotStreamParameters.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
py_trees_ros_interfaces__msg__SnapshotStreamParameters__init(py_trees_ros_interfaces__msg__SnapshotStreamParameters * msg)
{
  if (!msg) {
    return false;
  }
  // snapshot_period
  // blackboard_data
  // blackboard_activity
  return true;
}

void
py_trees_ros_interfaces__msg__SnapshotStreamParameters__fini(py_trees_ros_interfaces__msg__SnapshotStreamParameters * msg)
{
  if (!msg) {
    return;
  }
  // snapshot_period
  // blackboard_data
  // blackboard_activity
}

bool
py_trees_ros_interfaces__msg__SnapshotStreamParameters__are_equal(const py_trees_ros_interfaces__msg__SnapshotStreamParameters * lhs, const py_trees_ros_interfaces__msg__SnapshotStreamParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // snapshot_period
  if (lhs->snapshot_period != rhs->snapshot_period) {
    return false;
  }
  // blackboard_data
  if (lhs->blackboard_data != rhs->blackboard_data) {
    return false;
  }
  // blackboard_activity
  if (lhs->blackboard_activity != rhs->blackboard_activity) {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__SnapshotStreamParameters__copy(
  const py_trees_ros_interfaces__msg__SnapshotStreamParameters * input,
  py_trees_ros_interfaces__msg__SnapshotStreamParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // snapshot_period
  output->snapshot_period = input->snapshot_period;
  // blackboard_data
  output->blackboard_data = input->blackboard_data;
  // blackboard_activity
  output->blackboard_activity = input->blackboard_activity;
  return true;
}

py_trees_ros_interfaces__msg__SnapshotStreamParameters *
py_trees_ros_interfaces__msg__SnapshotStreamParameters__create()
{
  py_trees_ros_interfaces__msg__SnapshotStreamParameters * msg = (py_trees_ros_interfaces__msg__SnapshotStreamParameters *)malloc(sizeof(py_trees_ros_interfaces__msg__SnapshotStreamParameters));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__msg__SnapshotStreamParameters));
  bool success = py_trees_ros_interfaces__msg__SnapshotStreamParameters__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__msg__SnapshotStreamParameters__destroy(py_trees_ros_interfaces__msg__SnapshotStreamParameters * msg)
{
  if (msg) {
    py_trees_ros_interfaces__msg__SnapshotStreamParameters__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence__init(py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__msg__SnapshotStreamParameters * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__msg__SnapshotStreamParameters *)calloc(size, sizeof(py_trees_ros_interfaces__msg__SnapshotStreamParameters));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__msg__SnapshotStreamParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__msg__SnapshotStreamParameters__fini(&data[i - 1]);
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
py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence__fini(py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__msg__SnapshotStreamParameters__fini(&array->data[i]);
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

py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence *
py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence * array = (py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence *)malloc(sizeof(py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence__destroy(py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence__are_equal(const py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence * lhs, const py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__msg__SnapshotStreamParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence__copy(
  const py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence * input,
  py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__msg__SnapshotStreamParameters);
    py_trees_ros_interfaces__msg__SnapshotStreamParameters * data =
      (py_trees_ros_interfaces__msg__SnapshotStreamParameters *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__msg__SnapshotStreamParameters__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__msg__SnapshotStreamParameters__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__msg__SnapshotStreamParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
