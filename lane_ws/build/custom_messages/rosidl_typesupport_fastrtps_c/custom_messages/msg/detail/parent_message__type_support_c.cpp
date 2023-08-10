// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_messages:msg/ParentMessage.idl
// generated code does not contain a copyright notice
#include "custom_messages/msg/detail/parent_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_messages/msg/detail/parent_message__struct.h"
#include "custom_messages/msg/detail/parent_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "custom_messages/msg/detail/laneid__functions.h"  // laneid_field
#include "custom_messages/msg/detail/lanemarkings__functions.h"  // lanemarkings_field
#include "custom_messages/msg/detail/lanetype__functions.h"  // lanetype_field

// forward declare type support functions
size_t get_serialized_size_custom_messages__msg__Laneid(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_messages__msg__Laneid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_messages, msg, Laneid)();
size_t get_serialized_size_custom_messages__msg__Lanemarkings(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_messages__msg__Lanemarkings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_messages, msg, Lanemarkings)();
size_t get_serialized_size_custom_messages__msg__Lanetype(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_messages__msg__Lanetype(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_messages, msg, Lanetype)();


using _ParentMessage__ros_msg_type = custom_messages__msg__ParentMessage;

static bool _ParentMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParentMessage__ros_msg_type * ros_message = static_cast<const _ParentMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: laneid_field
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_messages, msg, Laneid
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->laneid_field, cdr))
    {
      return false;
    }
  }

  // Field name: lanetype_field
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_messages, msg, Lanetype
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lanetype_field, cdr))
    {
      return false;
    }
  }

  // Field name: lanemarkings_field
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_messages, msg, Lanemarkings
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lanemarkings_field, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ParentMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParentMessage__ros_msg_type * ros_message = static_cast<_ParentMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: laneid_field
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_messages, msg, Laneid
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->laneid_field))
    {
      return false;
    }
  }

  // Field name: lanetype_field
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_messages, msg, Lanetype
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lanetype_field))
    {
      return false;
    }
  }

  // Field name: lanemarkings_field
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_messages, msg, Lanemarkings
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lanemarkings_field))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_messages
size_t get_serialized_size_custom_messages__msg__ParentMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParentMessage__ros_msg_type * ros_message = static_cast<const _ParentMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name laneid_field

  current_alignment += get_serialized_size_custom_messages__msg__Laneid(
    &(ros_message->laneid_field), current_alignment);
  // field.name lanetype_field

  current_alignment += get_serialized_size_custom_messages__msg__Lanetype(
    &(ros_message->lanetype_field), current_alignment);
  // field.name lanemarkings_field

  current_alignment += get_serialized_size_custom_messages__msg__Lanemarkings(
    &(ros_message->lanemarkings_field), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ParentMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_messages__msg__ParentMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_messages
size_t max_serialized_size_custom_messages__msg__ParentMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: laneid_field
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_custom_messages__msg__Laneid(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lanetype_field
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_custom_messages__msg__Lanetype(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lanemarkings_field
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_custom_messages__msg__Lanemarkings(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ParentMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_messages__msg__ParentMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParentMessage = {
  "custom_messages::msg",
  "ParentMessage",
  _ParentMessage__cdr_serialize,
  _ParentMessage__cdr_deserialize,
  _ParentMessage__get_serialized_size,
  _ParentMessage__max_serialized_size
};

static rosidl_message_type_support_t _ParentMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParentMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_messages, msg, ParentMessage)() {
  return &_ParentMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
