// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/Child2.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__Child2 __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__Child2 __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Child2_
{
  using Type = Child2_<ContainerAllocator>;

  explicit Child2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child2_name = "";
    }
  }

  explicit Child2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child2_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child2_name = "";
    }
  }

  // field types and members
  using _child2_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child2_name_type child2_name;

  // setters for named parameter idiom
  Type & set__child2_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child2_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::Child2_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::Child2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::Child2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::Child2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::Child2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::Child2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::Child2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::Child2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::Child2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::Child2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__Child2
    std::shared_ptr<custom_messages::msg::Child2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__Child2
    std::shared_ptr<custom_messages::msg::Child2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Child2_ & other) const
  {
    if (this->child2_name != other.child2_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Child2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Child2_

// alias to use template instance with default allocator
using Child2 =
  custom_messages::msg::Child2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__STRUCT_HPP_
