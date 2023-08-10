// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Child1.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CHILD1__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__CHILD1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Child1 in the package custom_messages.
/**
  * File: Child1.msg
 */
typedef struct custom_messages__msg__Child1
{
  uint32_t child1_data;
} custom_messages__msg__Child1;

// Struct for a sequence of custom_messages__msg__Child1.
typedef struct custom_messages__msg__Child1__Sequence
{
  custom_messages__msg__Child1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Child1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CHILD1__STRUCT_H_
