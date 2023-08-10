// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_messages:msg/AllLanes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_messages/msg/detail/all_lanes__rosidl_typesupport_introspection_c.h"
#include "custom_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_messages/msg/detail/all_lanes__functions.h"
#include "custom_messages/msg/detail/all_lanes__struct.h"


// Include directives for member types
// Member `lanes`
#include "custom_messages/msg/parent_message.h"
// Member `lanes`
#include "custom_messages/msg/detail/parent_message__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_messages__msg__AllLanes__init(message_memory);
}

void custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_fini_function(void * message_memory)
{
  custom_messages__msg__AllLanes__fini(message_memory);
}

size_t custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__size_function__AllLanes__lanes(
  const void * untyped_member)
{
  const custom_messages__msg__ParentMessage__Sequence * member =
    (const custom_messages__msg__ParentMessage__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__get_const_function__AllLanes__lanes(
  const void * untyped_member, size_t index)
{
  const custom_messages__msg__ParentMessage__Sequence * member =
    (const custom_messages__msg__ParentMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__get_function__AllLanes__lanes(
  void * untyped_member, size_t index)
{
  custom_messages__msg__ParentMessage__Sequence * member =
    (custom_messages__msg__ParentMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__fetch_function__AllLanes__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_messages__msg__ParentMessage * item =
    ((const custom_messages__msg__ParentMessage *)
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__get_const_function__AllLanes__lanes(untyped_member, index));
  custom_messages__msg__ParentMessage * value =
    (custom_messages__msg__ParentMessage *)(untyped_value);
  *value = *item;
}

void custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__assign_function__AllLanes__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_messages__msg__ParentMessage * item =
    ((custom_messages__msg__ParentMessage *)
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__get_function__AllLanes__lanes(untyped_member, index));
  const custom_messages__msg__ParentMessage * value =
    (const custom_messages__msg__ParentMessage *)(untyped_value);
  *item = *value;
}

bool custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__resize_function__AllLanes__lanes(
  void * untyped_member, size_t size)
{
  custom_messages__msg__ParentMessage__Sequence * member =
    (custom_messages__msg__ParentMessage__Sequence *)(untyped_member);
  custom_messages__msg__ParentMessage__Sequence__fini(member);
  return custom_messages__msg__ParentMessage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_member_array[1] = {
  {
    "lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages__msg__AllLanes, lanes),  // bytes offset in struct
    NULL,  // default value
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__size_function__AllLanes__lanes,  // size() function pointer
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__get_const_function__AllLanes__lanes,  // get_const(index) function pointer
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__get_function__AllLanes__lanes,  // get(index) function pointer
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__fetch_function__AllLanes__lanes,  // fetch(index, &value) function pointer
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__assign_function__AllLanes__lanes,  // assign(index, value) function pointer
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__resize_function__AllLanes__lanes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_members = {
  "custom_messages__msg",  // message namespace
  "AllLanes",  // message name
  1,  // number of fields
  sizeof(custom_messages__msg__AllLanes),
  custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_member_array,  // message members
  custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_type_support_handle = {
  0,
  &custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, AllLanes)() {
  custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_messages, msg, ParentMessage)();
  if (!custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_type_support_handle.typesupport_identifier) {
    custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_messages__msg__AllLanes__rosidl_typesupport_introspection_c__AllLanes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
