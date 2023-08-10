// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Lanetype.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lanetype_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Lanetype in the package custom_messages.
/**
  * File: Child2.msg
 */
typedef struct custom_messages__msg__Lanetype
{
  rosidl_runtime_c__String lanetype_name;
} custom_messages__msg__Lanetype;

// Struct for a sequence of custom_messages__msg__Lanetype.
typedef struct custom_messages__msg__Lanetype__Sequence
{
  custom_messages__msg__Lanetype * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Lanetype__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__STRUCT_H_
