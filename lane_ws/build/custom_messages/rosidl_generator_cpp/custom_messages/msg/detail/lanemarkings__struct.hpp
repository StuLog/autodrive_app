// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/Lanemarkings.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__Lanemarkings __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__Lanemarkings __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lanemarkings_
{
  using Type = Lanemarkings_<ContainerAllocator>;

  explicit Lanemarkings_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanemarkings_data = "";
    }
  }

  explicit Lanemarkings_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lanemarkings_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanemarkings_data = "";
    }
  }

  // field types and members
  using _lanemarkings_data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lanemarkings_data_type lanemarkings_data;

  // setters for named parameter idiom
  Type & set__lanemarkings_data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lanemarkings_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::Lanemarkings_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::Lanemarkings_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::Lanemarkings_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::Lanemarkings_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::Lanemarkings_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::Lanemarkings_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::Lanemarkings_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::Lanemarkings_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::Lanemarkings_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::Lanemarkings_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__Lanemarkings
    std::shared_ptr<custom_messages::msg::Lanemarkings_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__Lanemarkings
    std::shared_ptr<custom_messages::msg::Lanemarkings_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lanemarkings_ & other) const
  {
    if (this->lanemarkings_data != other.lanemarkings_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lanemarkings_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lanemarkings_

// alias to use template instance with default allocator
using Lanemarkings =
  custom_messages::msg::Lanemarkings_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__STRUCT_HPP_
