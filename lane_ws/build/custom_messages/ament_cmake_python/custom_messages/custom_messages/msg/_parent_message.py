# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_messages:msg/ParentMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParentMessage(type):
    """Metaclass of message 'ParentMessage'."""

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
            module = import_type_support('custom_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_messages.msg.ParentMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parent_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parent_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parent_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parent_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parent_message

            from custom_messages.msg import Laneid
            if Laneid.__class__._TYPE_SUPPORT is None:
                Laneid.__class__.__import_type_support__()

            from custom_messages.msg import Lanemarkings
            if Lanemarkings.__class__._TYPE_SUPPORT is None:
                Lanemarkings.__class__.__import_type_support__()

            from custom_messages.msg import Lanetype
            if Lanetype.__class__._TYPE_SUPPORT is None:
                Lanetype.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParentMessage(metaclass=Metaclass_ParentMessage):
    """Message class 'ParentMessage'."""

    __slots__ = [
        '_laneid_field',
        '_lanetype_field',
        '_lanemarkings_field',
    ]

    _fields_and_field_types = {
        'laneid_field': 'custom_messages/Laneid',
        'lanetype_field': 'custom_messages/Lanetype',
        'lanemarkings_field': 'custom_messages/Lanemarkings',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['custom_messages', 'msg'], 'Laneid'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_messages', 'msg'], 'Lanetype'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_messages', 'msg'], 'Lanemarkings'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from custom_messages.msg import Laneid
        self.laneid_field = kwargs.get('laneid_field', Laneid())
        from custom_messages.msg import Lanetype
        self.lanetype_field = kwargs.get('lanetype_field', Lanetype())
        from custom_messages.msg import Lanemarkings
        self.lanemarkings_field = kwargs.get('lanemarkings_field', Lanemarkings())

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
        if self.laneid_field != other.laneid_field:
            return False
        if self.lanetype_field != other.lanetype_field:
            return False
        if self.lanemarkings_field != other.lanemarkings_field:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def laneid_field(self):
        """Message field 'laneid_field'."""
        return self._laneid_field

    @laneid_field.setter
    def laneid_field(self, value):
        if __debug__:
            from custom_messages.msg import Laneid
            assert \
                isinstance(value, Laneid), \
                "The 'laneid_field' field must be a sub message of type 'Laneid'"
        self._laneid_field = value

    @builtins.property
    def lanetype_field(self):
        """Message field 'lanetype_field'."""
        return self._lanetype_field

    @lanetype_field.setter
    def lanetype_field(self, value):
        if __debug__:
            from custom_messages.msg import Lanetype
            assert \
                isinstance(value, Lanetype), \
                "The 'lanetype_field' field must be a sub message of type 'Lanetype'"
        self._lanetype_field = value

    @builtins.property
    def lanemarkings_field(self):
        """Message field 'lanemarkings_field'."""
        return self._lanemarkings_field

    @lanemarkings_field.setter
    def lanemarkings_field(self, value):
        if __debug__:
            from custom_messages.msg import Lanemarkings
            assert \
                isinstance(value, Lanemarkings), \
                "The 'lanemarkings_field' field must be a sub message of type 'Lanemarkings'"
        self._lanemarkings_field = value
