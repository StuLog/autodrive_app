// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Laneid.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANEID__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANEID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Laneid in the package custom_messages.
/**
  * File: Child1.msg
 */
typedef struct custom_messages__msg__Laneid
{
  int32_t laneid_data;
} custom_messages__msg__Laneid;

// Struct for a sequence of custom_messages__msg__Laneid.
typedef struct custom_messages__msg__Laneid__Sequence
{
  custom_messages__msg__Laneid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Laneid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANEID__STRUCT_H_
