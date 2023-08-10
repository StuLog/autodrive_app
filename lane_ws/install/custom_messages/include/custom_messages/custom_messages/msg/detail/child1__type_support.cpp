// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_messages:msg/Child1.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_messages/msg/detail/child1__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Child1_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_messages::msg::Child1(_init);
}

void Child1_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_messages::msg::Child1 *>(message_memory);
  typed_message->~Child1();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Child1_message_member_array[1] = {
  {
    "child1_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages::msg::Child1, child1_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Child1_message_members = {
  "custom_messages::msg",  // message namespace
  "Child1",  // message name
  1,  // number of fields
  sizeof(custom_messages::msg::Child1),
  Child1_message_member_array,  // message members
  Child1_init_function,  // function to initialize message memory (memory has to be allocated)
  Child1_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Child1_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Child1_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_messages::msg::Child1>()
{
  return &::custom_messages::msg::rosidl_typesupport_introspection_cpp::Child1_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_messages, msg, Child1)() {
  return &::custom_messages::msg::rosidl_typesupport_introspection_cpp::Child1_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
