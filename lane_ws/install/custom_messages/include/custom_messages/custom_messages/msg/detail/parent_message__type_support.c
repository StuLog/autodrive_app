// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_messages:msg/ParentMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_messages/msg/detail/parent_message__rosidl_typesupport_introspection_c.h"
#include "custom_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_messages/msg/detail/parent_message__functions.h"
#include "custom_messages/msg/detail/parent_message__struct.h"


// Include directives for member types
// Member `laneid_field`
#include "custom_messages/msg/laneid.h"
// Member `laneid_field`
#include "custom_messages/msg/detail/laneid__rosidl_typesupport_introspection_c.h"
// Member `lanetype_field`
#include "custom_messages/msg/lanetype.h"
// Member `lanetype_field`
#include "custom_messages/msg/detail/lanetype__rosidl_typesupport_introspection_c.h"
// Member `lanemarkings_field`
#include "custom_messages/msg/lanemarkings.h"
// Member `lanemarkings_field`
#include "custom_messages/msg/detail/lanemarkings__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_messages__msg__ParentMessage__init(message_memory);
}

void custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_fini_function(void * message_memory)
{
  custom_messages__msg__ParentMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_member_array[3] = {
  {
    "laneid_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages__msg__ParentMessage, laneid_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanetype_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages__msg__ParentMessage, lanetype_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanemarkings_field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages__msg__ParentMessage, lanemarkings_field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_members = {
  "custom_messages__msg",  // message namespace
  "ParentMessage",  // message name
  3,  // number of fields
  sizeof(custom_messages__msg__ParentMessage),
  custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_member_array,  // message members
  custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_type_support_handle = {
  0,
  &custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, ParentMessage)() {
  custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, Laneid)();
  custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, Lanetype)();
  custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, Lanemarkings)();
  if (!custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_type_support_handle.typesupport_identifier) {
    custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_messages__msg__ParentMessage__rosidl_typesupport_introspection_c__ParentMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif