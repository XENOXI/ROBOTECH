// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from full_name_message:srv/GetFullName.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_MESSAGE__SRV__DETAIL__GET_FULL_NAME__BUILDER_HPP_
#define FULL_NAME_MESSAGE__SRV__DETAIL__GET_FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "full_name_message/srv/detail/get_full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace full_name_message
{

namespace srv
{

namespace builder
{

class Init_GetFullName_Request_first_name
{
public:
  explicit Init_GetFullName_Request_first_name(::full_name_message::srv::GetFullName_Request & msg)
  : msg_(msg)
  {}
  ::full_name_message::srv::GetFullName_Request first_name(::full_name_message::srv::GetFullName_Request::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_message::srv::GetFullName_Request msg_;
};

class Init_GetFullName_Request_name
{
public:
  explicit Init_GetFullName_Request_name(::full_name_message::srv::GetFullName_Request & msg)
  : msg_(msg)
  {}
  Init_GetFullName_Request_first_name name(::full_name_message::srv::GetFullName_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GetFullName_Request_first_name(msg_);
  }

private:
  ::full_name_message::srv::GetFullName_Request msg_;
};

class Init_GetFullName_Request_last_name
{
public:
  Init_GetFullName_Request_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFullName_Request_name last_name(::full_name_message::srv::GetFullName_Request::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_GetFullName_Request_name(msg_);
  }

private:
  ::full_name_message::srv::GetFullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_message::srv::GetFullName_Request>()
{
  return full_name_message::srv::builder::Init_GetFullName_Request_last_name();
}

}  // namespace full_name_message


namespace full_name_message
{

namespace srv
{

namespace builder
{

class Init_GetFullName_Response_full_name
{
public:
  Init_GetFullName_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::full_name_message::srv::GetFullName_Response full_name(::full_name_message::srv::GetFullName_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_message::srv::GetFullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_message::srv::GetFullName_Response>()
{
  return full_name_message::srv::builder::Init_GetFullName_Response_full_name();
}

}  // namespace full_name_message

#endif  // FULL_NAME_MESSAGE__SRV__DETAIL__GET_FULL_NAME__BUILDER_HPP_
