// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_messages:msg/ParentMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_messages/msg/detail/parent_message__struct.hpp"
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

void ParentMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_messages::msg::ParentMessage(_init);
}

void ParentMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_messages::msg::ParentMessage *>(message_memory);
  typed_message->~ParentMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ParentMessage_message_member_array[3] = {
  {
    "laneid_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_messages::msg::Laneid>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages::msg::ParentMessage, laneid_field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lanetype_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_messages::msg::Lanetype>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages::msg::ParentMessage, lanetype_field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lanemarkings_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_messages::msg::Lanemarkings>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages::msg::ParentMessage, lanemarkings_field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ParentMessage_message_members = {
  "custom_messages::msg",  // message namespace
  "ParentMessage",  // message name
  3,  // number of fields
  sizeof(custom_messages::msg::ParentMessage),
  ParentMessage_message_member_array,  // message members
  ParentMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ParentMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ParentMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ParentMessage_message_members,
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
get_message_type_support_handle<custom_messages::msg::ParentMessage>()
{
  return &::custom_messages::msg::rosidl_typesupport_introspection_cpp::ParentMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_messages, msg, ParentMessage)() {
  return &::custom_messages::msg::rosidl_typesupport_introspection_cpp::ParentMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
