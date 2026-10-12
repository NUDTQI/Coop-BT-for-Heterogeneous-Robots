# generated from rosidl_generator_py/resource/_idl.py.em
# with input from py_trees_ros_interfaces:msg/Statistics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Statistics(type):
    """Metaclass of message 'Statistics'."""

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
                'py_trees_ros_interfaces.msg.Statistics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__statistics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__statistics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__statistics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__statistics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__statistics

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Statistics(metaclass=Metaclass_Statistics):
    """Message class 'Statistics'."""

    __slots__ = [
        '_count',
        '_stamp',
        '_tick_duration',
        '_tick_duration_average',
        '_tick_duration_variance',
        '_tick_interval',
        '_tick_interval_average',
        '_tick_interval_variance',
    ]

    _fields_and_field_types = {
        'count': 'int64',
        'stamp': 'builtin_interfaces/Time',
        'tick_duration': 'float',
        'tick_duration_average': 'float',
        'tick_duration_variance': 'float',
        'tick_interval': 'float',
        'tick_interval_average': 'float',
        'tick_interval_variance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.count = kwargs.get('count', int())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.tick_duration = kwargs.get('tick_duration', float())
        self.tick_duration_average = kwargs.get('tick_duration_average', float())
        self.tick_duration_variance = kwargs.get('tick_duration_variance', float())
        self.tick_interval = kwargs.get('tick_interval', float())
        self.tick_interval_average = kwargs.get('tick_interval_average', float())
        self.tick_interval_variance = kwargs.get('tick_interval_variance', float())

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
        if self.count != other.count:
            return False
        if self.stamp != other.stamp:
            return False
        if self.tick_duration != other.tick_duration:
            return False
        if self.tick_duration_average != other.tick_duration_average:
            return False
        if self.tick_duration_variance != other.tick_duration_variance:
            return False
        if self.tick_interval != other.tick_interval:
            return False
        if self.tick_interval_average != other.tick_interval_average:
            return False
        if self.tick_interval_variance != other.tick_interval_variance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'count' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._count = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def tick_duration(self):
        """Message field 'tick_duration'."""
        return self._tick_duration

    @tick_duration.setter
    def tick_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tick_duration' field must be of type 'float'"
        self._tick_duration = value

    @property
    def tick_duration_average(self):
        """Message field 'tick_duration_average'."""
        return self._tick_duration_average

    @tick_duration_average.setter
    def tick_duration_average(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tick_duration_average' field must be of type 'float'"
        self._tick_duration_average = value

    @property
    def tick_duration_variance(self):
        """Message field 'tick_duration_variance'."""
        return self._tick_duration_variance

    @tick_duration_variance.setter
    def tick_duration_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tick_duration_variance' field must be of type 'float'"
        self._tick_duration_variance = value

    @property
    def tick_interval(self):
        """Message field 'tick_interval'."""
        return self._tick_interval

    @tick_interval.setter
    def tick_interval(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tick_interval' field must be of type 'float'"
        self._tick_interval = value

    @property
    def tick_interval_average(self):
        """Message field 'tick_interval_average'."""
        return self._tick_interval_average

    @tick_interval_average.setter
    def tick_interval_average(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tick_interval_average' field must be of type 'float'"
        self._tick_interval_average = value

    @property
    def tick_interval_variance(self):
        """Message field 'tick_interval_variance'."""
        return self._tick_interval_variance

    @tick_interval_variance.setter
    def tick_interval_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tick_interval_variance' field must be of type 'float'"
        self._tick_interval_variance = value
