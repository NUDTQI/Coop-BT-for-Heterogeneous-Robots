# generated from rosidl_generator_py/resource/_idl.py.em
# with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BehaviourTree(type):
    """Metaclass of message 'BehaviourTree'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('py_trees_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'py_trees_ros_interfaces.msg.BehaviourTree')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__behaviour_tree
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__behaviour_tree
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__behaviour_tree
            cls._TYPE_SUPPORT = module.type_support_msg__msg__behaviour_tree
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__behaviour_tree

            from diagnostic_msgs.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

            from py_trees_ros_interfaces.msg import ActivityItem
            if ActivityItem.__class__._TYPE_SUPPORT is None:
                ActivityItem.__class__.__import_type_support__()

            from py_trees_ros_interfaces.msg import Behaviour
            if Behaviour.__class__._TYPE_SUPPORT is None:
                Behaviour.__class__.__import_type_support__()

            from py_trees_ros_interfaces.msg import Statistics
            if Statistics.__class__._TYPE_SUPPORT is None:
                Statistics.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BehaviourTree(metaclass=Metaclass_BehaviourTree):
    """Message class 'BehaviourTree'."""

    __slots__ = [
        '_behaviours',
        '_changed',
        '_blackboard_on_visited_path',
        '_blackboard_activity',
        '_statistics',
    ]

    _fields_and_field_types = {
        'behaviours': 'sequence<py_trees_ros_interfaces/Behaviour>',
        'changed': 'boolean',
        'blackboard_on_visited_path': 'sequence<diagnostic_msgs/KeyValue>',
        'blackboard_activity': 'sequence<py_trees_ros_interfaces/ActivityItem>',
        'statistics': 'py_trees_ros_interfaces/Statistics',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['py_trees_ros_interfaces', 'msg'], 'Behaviour')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'KeyValue')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['py_trees_ros_interfaces', 'msg'], 'ActivityItem')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['py_trees_ros_interfaces', 'msg'], 'Statistics'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.behaviours = kwargs.get('behaviours', [])
        self.changed = kwargs.get('changed', bool())
        self.blackboard_on_visited_path = kwargs.get('blackboard_on_visited_path', [])
        self.blackboard_activity = kwargs.get('blackboard_activity', [])
        from py_trees_ros_interfaces.msg import Statistics
        self.statistics = kwargs.get('statistics', Statistics())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.behaviours != other.behaviours:
            return False
        if self.changed != other.changed:
            return False
        if self.blackboard_on_visited_path != other.blackboard_on_visited_path:
            return False
        if self.blackboard_activity != other.blackboard_activity:
            return False
        if self.statistics != other.statistics:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def behaviours(self):
        """Message field 'behaviours'."""
        return self._behaviours

    @behaviours.setter
    def behaviours(self, value):
        if __debug__:
            from py_trees_ros_interfaces.msg import Behaviour
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Behaviour) for v in value) and
                 True), \
                "The 'behaviours' field must be a set or sequence and each value of type 'Behaviour'"
        self._behaviours = value

    @property
    def changed(self):
        """Message field 'changed'."""
        return self._changed

    @changed.setter
    def changed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'changed' field must be of type 'bool'"
        self._changed = value

    @property
    def blackboard_on_visited_path(self):
        """Message field 'blackboard_on_visited_path'."""
        return self._blackboard_on_visited_path

    @blackboard_on_visited_path.setter
    def blackboard_on_visited_path(self, value):
        if __debug__:
            from diagnostic_msgs.msg import KeyValue
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, KeyValue) for v in value) and
                 True), \
                "The 'blackboard_on_visited_path' field must be a set or sequence and each value of type 'KeyValue'"
        self._blackboard_on_visited_path = value

    @property
    def blackboard_activity(self):
        """Message field 'blackboard_activity'."""
        return self._blackboard_activity

    @blackboard_activity.setter
    def blackboard_activity(self, value):
        if __debug__:
            from py_trees_ros_interfaces.msg import ActivityItem
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ActivityItem) for v in value) and
                 True), \
                "The 'blackboard_activity' field must be a set or sequence and each value of type 'ActivityItem'"
        self._blackboard_activity = value

    @property
    def statistics(self):
        """Message field 'statistics'."""
        return self._statistics

    @statistics.setter
    def statistics(self, value):
        if __debug__:
            from py_trees_ros_interfaces.msg import Statistics
            assert \
                isinstance(value, Statistics), \
                "The 'statistics' field must be a sub message of type 'Statistics'"
        self._statistics = value
