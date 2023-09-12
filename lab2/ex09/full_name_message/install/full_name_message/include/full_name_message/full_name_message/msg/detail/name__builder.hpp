// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from full_name_message:msg/Name.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_MESSAGE__MSG__DETAIL__NAME__BUILDER_HPP_
#define FULL_NAME_MESSAGE__MSG__DETAIL__NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "full_name_message/msg/detail/name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace full_name_message
{

namespace msg
{

namespace builder
{

class Init_Name_first_name
{
public:
  explicit Init_Name_first_name(::full_name_message::msg::Name & msg)
  : msg_(msg)
  {}
  ::full_name_message::msg::Name first_name(::full_name_message::msg::Name::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_message::msg::Name msg_;
};

class Init_Name_name
{
public:
  explicit Init_Name_name(::full_name_message::msg::Name & msg)
  : msg_(msg)
  {}
  Init_Name_first_name name(::full_name_message::msg::Name::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Name_first_name(msg_);
  }

private:
  ::full_name_message::msg::Name msg_;
};

class Init_Name_last_name
{
public:
  Init_Name_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Name_name last_name(::full_name_message::msg::Name::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_Name_name(msg_);
  }

private:
  ::full_name_message::msg::Name msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_message::msg::Name>()
{
  return full_name_message::msg::builder::Init_Name_last_name();
}

}  // namespace full_name_message

#endif  // FULL_NAME_MESSAGE__MSG__DETAIL__NAME__BUILDER_HPP_
