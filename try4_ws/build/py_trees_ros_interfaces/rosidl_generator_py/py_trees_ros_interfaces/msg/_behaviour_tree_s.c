// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__struct.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "diagnostic_msgs/msg/detail/key_value__functions.h"
#include "py_trees_ros_interfaces/msg/detail/activity_item__functions.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour__functions.h"
// end nested array functions include
bool py_trees_ros_interfaces__msg__behaviour__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * py_trees_ros_interfaces__msg__behaviour__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool diagnostic_msgs__msg__key_value__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * diagnostic_msgs__msg__key_value__convert_to_py(void * raw_ros_message);
bool py_trees_ros_interfaces__msg__activity_item__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * py_trees_ros_interfaces__msg__activity_item__convert_to_py(void * raw_ros_message);
bool py_trees_ros_interfaces__msg__statistics__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * py_trees_ros_interfaces__msg__statistics__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool py_trees_ros_interfaces__msg__behaviour_tree__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("py_trees_ros_interfaces.msg._behaviour_tree.BehaviourTree", full_classname_dest, 57) == 0);
  }
  py_trees_ros_interfaces__msg__BehaviourTree * ros_message = _ros_message;
  {  // behaviours
    PyObject * field = PyObject_GetAttrString(_pymsg, "behaviours");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'behaviours'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!py_trees_ros_interfaces__msg__Behaviour__Sequence__init(&(ros_message->behaviours), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create py_trees_ros_interfaces__msg__Behaviour__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    py_trees_ros_interfaces__msg__Behaviour * dest = ros_message->behaviours.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!py_trees_ros_interfaces__msg__behaviour__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // changed
    PyObject * field = PyObject_GetAttrString(_pymsg, "changed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->changed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blackboard_on_visited_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "blackboard_on_visited_path");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'blackboard_on_visited_path'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!diagnostic_msgs__msg__KeyValue__Sequence__init(&(ros_message->blackboard_on_visited_path), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__KeyValue__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    diagnostic_msgs__msg__KeyValue * dest = ros_message->blackboard_on_visited_path.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!diagnostic_msgs__msg__key_value__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // blackboard_activity
    PyObject * field = PyObject_GetAttrString(_pymsg, "blackboard_activity");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'blackboard_activity'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!py_trees_ros_interfaces__msg__ActivityItem__Sequence__init(&(ros_message->blackboard_activity), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create py_trees_ros_interfaces__msg__ActivityItem__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    py_trees_ros_interfaces__msg__ActivityItem * dest = ros_message->blackboard_activity.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!py_trees_ros_interfaces__msg__activity_item__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // statistics
    PyObject * field = PyObject_GetAttrString(_pymsg, "statistics");
    if (!field) {
      return false;
    }
    if (!py_trees_ros_interfaces__msg__statistics__convert_from_py(field, &ros_message->statistics)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * py_trees_ros_interfaces__msg__behaviour_tree__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BehaviourTree */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("py_trees_ros_interfaces.msg._behaviour_tree");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BehaviourTree");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  py_trees_ros_interfaces__msg__BehaviourTree * ros_message = (py_trees_ros_interfaces__msg__BehaviourTree *)raw_ros_message;
  {  // behaviours
    PyObject * field = NULL;
    size_t size = ros_message->behaviours.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    py_trees_ros_interfaces__msg__Behaviour * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->behaviours.data[i]);
      PyObject * pyitem = py_trees_ros_interfaces__msg__behaviour__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "behaviours", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // changed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->changed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "changed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blackboard_on_visited_path
    PyObject * field = NULL;
    size_t size = ros_message->blackboard_on_visited_path.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    diagnostic_msgs__msg__KeyValue * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->blackboard_on_visited_path.data[i]);
      PyObject * pyitem = diagnostic_msgs__msg__key_value__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "blackboard_on_visited_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blackboard_activity
    PyObject * field = NULL;
    size_t size = ros_message->blackboard_activity.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    py_trees_ros_interfaces__msg__ActivityItem * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->blackboard_activity.data[i]);
      PyObject * pyitem = py_trees_ros_interfaces__msg__activity_item__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "blackboard_activity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // statistics
    PyObject * field = NULL;
    field = py_trees_ros_interfaces__msg__statistics__convert_to_py(&ros_message->statistics);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "statistics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
