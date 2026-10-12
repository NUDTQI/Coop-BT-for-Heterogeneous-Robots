// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:msg/SubscriberDetails.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `topic_name`
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"

bool
py_trees_ros_interfaces__msg__SubscriberDetails__init(py_trees_ros_interfaces__msg__SubscriberDetails * msg)
{
  if (!msg) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__init(&msg->topic_name)) {
    py_trees_ros_interfaces__msg__SubscriberDetails__fini(msg);
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    py_trees_ros_interfaces__msg__SubscriberDetails__fini(msg);
    return false;
  }
  // latched
  return true;
}

void
py_trees_ros_interfaces__msg__SubscriberDetails__fini(py_trees_ros_interfaces__msg__SubscriberDetails * msg)
{
  if (!msg) {
    return;
  }
  // topic_name
  rosidl_runtime_c__String__fini(&msg->topic_name);
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // latched
}

bool
py_trees_ros_interfaces__msg__SubscriberDetails__are_equal(const py_trees_ros_interfaces__msg__SubscriberDetails * lhs, const py_trees_ros_interfaces__msg__SubscriberDetails * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_name), &(rhs->topic_name)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
  {
    return false;
  }
  // latched
  if (lhs->latched != rhs->latched) {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__SubscriberDetails__copy(
  const py_trees_ros_interfaces__msg__SubscriberDetails * input,
  py_trees_ros_interfaces__msg__SubscriberDetails * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_name), &(output->topic_name)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // latched
  output->latched = input->latched;
  return true;
}

py_trees_ros_interfaces__msg__SubscriberDetails *
py_trees_ros_interfaces__msg__SubscriberDetails__create()
{
  py_trees_ros_interfaces__msg__SubscriberDetails * msg = (py_trees_ros_interfaces__msg__SubscriberDetails *)malloc(sizeof(py_trees_ros_interfaces__msg__SubscriberDetails));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__msg__SubscriberDetails));
  bool success = py_trees_ros_interfaces__msg__SubscriberDetails__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__msg__SubscriberDetails__destroy(py_trees_ros_interfaces__msg__SubscriberDetails * msg)
{
  if (msg) {
    py_trees_ros_interfaces__msg__SubscriberDetails__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__init(py_trees_ros_interfaces__msg__SubscriberDetails__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__msg__SubscriberDetails * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__msg__SubscriberDetails *)calloc(size, sizeof(py_trees_ros_interfaces__msg__SubscriberDetails));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__msg__SubscriberDetails__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__msg__SubscriberDetails__fini(&data[i - 1]);
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
py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__fini(py_trees_ros_interfaces__msg__SubscriberDetails__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__msg__SubscriberDetails__fini(&array->data[i]);
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

py_trees_ros_interfaces__msg__SubscriberDetails__Sequence *
py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__msg__SubscriberDetails__Sequence * array = (py_trees_ros_interfaces__msg__SubscriberDetails__Sequence *)malloc(sizeof(py_trees_ros_interfaces__msg__SubscriberDetails__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__destroy(py_trees_ros_interfaces__msg__SubscriberDetails__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__are_equal(const py_trees_ros_interfaces__msg__SubscriberDetails__Sequence * lhs, const py_trees_ros_interfaces__msg__SubscriberDetails__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__msg__SubscriberDetails__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__copy(
  const py_trees_ros_interfaces__msg__SubscriberDetails__Sequence * input,
  py_trees_ros_interfaces__msg__SubscriberDetails__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__msg__SubscriberDetails);
    py_trees_ros_interfaces__msg__SubscriberDetails * data =
      (py_trees_ros_interfaces__msg__SubscriberDetails *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__msg__SubscriberDetails__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__msg__SubscriberDetails__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__msg__SubscriberDetails__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
