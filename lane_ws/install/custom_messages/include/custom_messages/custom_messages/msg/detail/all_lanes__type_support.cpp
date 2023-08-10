// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_messages:msg/AllLanes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_messages/msg/detail/all_lanes__struct.hpp"
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

void AllLanes_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_messages::msg::AllLanes(_init);
}

void AllLanes_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_messages::msg::AllLanes *>(message_memory);
  typed_message->~AllLanes();
}

size_t size_function__AllLanes__lanes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<custom_messages::msg::ParentMessage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AllLanes__lanes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<custom_messages::msg::ParentMessage> *>(untyped_member);
  return &member[index];
}

void * get_function__AllLanes__lanes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<custom_messages::msg::ParentMessage> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllLanes__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const custom_messages::msg::ParentMessage *>(
    get_const_function__AllLanes__lanes(untyped_member, index));
  auto & value = *reinterpret_cast<custom_messages::msg::ParentMessage *>(untyped_value);
  value = item;
}

void assign_function__AllLanes__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<custom_messages::msg::ParentMessage *>(
    get_function__AllLanes__lanes(untyped_member, index));
  const auto & value = *reinterpret_cast<const custom_messages::msg::ParentMessage *>(untyped_value);
  item = value;
}

void resize_function__AllLanes__lanes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<custom_messages::msg::ParentMessage> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AllLanes_message_member_array[1] = {
  {
    "lanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_messages::msg::ParentMessage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_messages::msg::AllLanes, lanes),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllLanes__lanes,  // size() function pointer
    get_const_function__AllLanes__lanes,  // get_const(index) function pointer
    get_function__AllLanes__lanes,  // get(index) function pointer
    fetch_function__AllLanes__lanes,  // fetch(index, &value) function pointer
    assign_function__AllLanes__lanes,  // assign(index, value) function pointer
    resize_function__AllLanes__lanes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AllLanes_message_members = {
  "custom_messages::msg",  // message namespace
  "AllLanes",  // message name
  1,  // number of fields
  sizeof(custom_messages::msg::AllLanes),
  AllLanes_message_member_array,  // message members
  AllLanes_init_function,  // function to initialize message memory (memory has to be allocated)
  AllLanes_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AllLanes_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AllLanes_message_members,
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
get_message_type_support_handle<custom_messages::msg::AllLanes>()
{
  return &::custom_messages::msg::rosidl_typesupport_introspection_cpp::AllLanes_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_messages, msg, AllLanes)() {
  return &::custom_messages::msg::rosidl_typesupport_introspection_cpp::AllLanes_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
