# generated from rosidl_generator_py/resource/_idl.py.em
# with input from py_trees_ros_interfaces:srv/OpenBlackboardStream.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpenBlackboardStream_Request(type):
    """Metaclass of message 'OpenBlackboardStream_Request'."""

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
                'py_trees_ros_interfaces.srv.OpenBlackboardStream_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__open_blackboard_stream__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__open_blackboard_stream__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__open_blackboard_stream__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__open_blackboard_stream__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__open_blackboard_stream__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpenBlackboardStream_Request(metaclass=Metaclass_OpenBlackboardStream_Request):
    """Message class 'OpenBlackboardStream_Request'."""

    __slots__ = [
        '_variables',
        '_filter_on_visited_path',
        '_with_activity_stream',
    ]

    _fields_and_field_types = {
        'variables': 'sequence<string>',
        'filter_on_visited_path': 'boolean',
        'with_activity_stream': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.variables = kwargs.get('variables', [])
        self.filter_on_visited_path = kwargs.get('filter_on_visited_path', bool())
        self.with_activity_stream = kwargs.get('with_activity_stream', bool())

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
        if self.variables != other.variables:
            return False
        if self.filter_on_visited_path != other.filter_on_visited_path:
            return False
        if self.with_activity_stream != other.with_activity_stream:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def variables(self):
        """Message field 'variables'."""
        return self._variables

    @variables.setter
    def variables(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'variables' field must be a set or sequence and each value of type 'str'"
        self._variables = value

    @property
    def filter_on_visited_path(self):
        """Message field 'filter_on_visited_path'."""
        return self._filter_on_visited_path

    @filter_on_visited_path.setter
    def filter_on_visited_path(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'filter_on_visited_path' field must be of type 'bool'"
        self._filter_on_visited_path = value

    @property
    def with_activity_stream(self):
        """Message field 'with_activity_stream'."""
        return self._with_activity_stream

    @with_activity_stream.setter
    def with_activity_stream(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'with_activity_stream' field must be of type 'bool'"
        self._with_activity_stream = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OpenBlackboardStream_Response(type):
    """Metaclass of message 'OpenBlackboardStream_Response'."""

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
                'py_trees_ros_interfaces.srv.OpenBlackboardStream_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__open_blackboard_stream__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__open_blackboard_stream__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__open_blackboard_stream__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__open_blackboard_stream__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__open_blackboard_stream__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpenBlackboardStream_Response(metaclass=Metaclass_OpenBlackboardStream_Response):
    """Message class 'OpenBlackboardStream_Response'."""

    __slots__ = [
        '_topic',
    ]

    _fields_and_field_types = {
        'topic': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.topic = kwargs.get('topic', str())

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
        if self.topic != other.topic:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def topic(self):
        """Message field 'topic'."""
        return self._topic

    @topic.setter
    def topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic' field must be of type 'str'"
        self._topic = value


class Metaclass_OpenBlackboardStream(type):
    """Metaclass of service 'OpenBlackboardStream'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('py_trees_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'py_trees_ros_interfaces.srv.OpenBlackboardStream')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__open_blackboard_stream

            from py_trees_ros_interfaces.srv import _open_blackboard_stream
            if _open_blackboard_stream.Metaclass_OpenBlackboardStream_Request._TYPE_SUPPORT is None:
                _open_blackboard_stream.Metaclass_OpenBlackboardStream_Request.__import_type_support__()
            if _open_blackboard_stream.Metaclass_OpenBlackboardStream_Response._TYPE_SUPPORT is None:
                _open_blackboard_stream.Metaclass_OpenBlackboardStream_Response.__import_type_support__()


class OpenBlackboardStream(metaclass=Metaclass_OpenBlackboardStream):
    from py_trees_ros_interfaces.srv._open_blackboard_stream import OpenBlackboardStream_Request as Request
    from py_trees_ros_interfaces.srv._open_blackboard_stream import OpenBlackboardStream_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
