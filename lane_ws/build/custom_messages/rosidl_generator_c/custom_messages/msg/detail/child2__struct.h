// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Child2.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'child2_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Child2 in the package custom_messages.
/**
  * File: Child2.msg
 */
typedef struct custom_messages__msg__Child2
{
  rosidl_runtime_c__String child2_name;
} custom_messages__msg__Child2;

// Struct for a sequence of custom_messages__msg__Child2.
typedef struct custom_messages__msg__Child2__Sequence
{
  custom_messages__msg__Child2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Child2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__STRUCT_H_
