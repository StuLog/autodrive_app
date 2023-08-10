// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/ParentMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'laneid_field'
#include "custom_messages/msg/detail/laneid__struct.h"
// Member 'lanetype_field'
#include "custom_messages/msg/detail/lanetype__struct.h"
// Member 'lanemarkings_field'
#include "custom_messages/msg/detail/lanemarkings__struct.h"

/// Struct defined in msg/ParentMessage in the package custom_messages.
/**
  * File: ParentMessage.msg
 */
typedef struct custom_messages__msg__ParentMessage
{
  custom_messages__msg__Laneid laneid_field;
  custom_messages__msg__Lanetype lanetype_field;
  custom_messages__msg__Lanemarkings lanemarkings_field;
} custom_messages__msg__ParentMessage;

// Struct for a sequence of custom_messages__msg__ParentMessage.
typedef struct custom_messages__msg__ParentMessage__Sequence
{
  custom_messages__msg__ParentMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__ParentMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__STRUCT_H_
