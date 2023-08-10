// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Lanemarkings.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lanemarkings_data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Lanemarkings in the package custom_messages.
/**
  * File Child3.msg
 */
typedef struct custom_messages__msg__Lanemarkings
{
  rosidl_runtime_c__String lanemarkings_data;
} custom_messages__msg__Lanemarkings;

// Struct for a sequence of custom_messages__msg__Lanemarkings.
typedef struct custom_messages__msg__Lanemarkings__Sequence
{
  custom_messages__msg__Lanemarkings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Lanemarkings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__STRUCT_H_
