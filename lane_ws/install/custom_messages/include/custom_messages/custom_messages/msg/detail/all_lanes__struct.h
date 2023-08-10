// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/AllLanes.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lanes'
#include "custom_messages/msg/detail/parent_message__struct.h"

/// Struct defined in msg/AllLanes in the package custom_messages.
/**
  * the top layer for all 4 lanes
 */
typedef struct custom_messages__msg__AllLanes
{
  custom_messages__msg__ParentMessage__Sequence lanes;
} custom_messages__msg__AllLanes;

// Struct for a sequence of custom_messages__msg__AllLanes.
typedef struct custom_messages__msg__AllLanes__Sequence
{
  custom_messages__msg__AllLanes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__AllLanes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__STRUCT_H_
