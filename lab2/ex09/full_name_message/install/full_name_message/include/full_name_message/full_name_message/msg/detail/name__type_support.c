// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from full_name_message:msg/Name.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "full_name_message/msg/detail/name__rosidl_typesupport_introspection_c.h"
#include "full_name_message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "full_name_message/msg/detail/name__functions.h"
#include "full_name_message/msg/detail/name__struct.h"


// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  full_name_message__msg__Name__init(message_memory);
}

void full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_fini_function(void * message_memory)
{
  full_name_message__msg__Name__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_message_member_array[3] = {
  {
    "last_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(full_name_message__msg__Name, last_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(full_name_message__msg__Name, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "first_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(full_name_message__msg__Name, first_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_message_members = {
  "full_name_message__msg",  // message namespace
  "Name",  // message name
  3,  // number of fields
  sizeof(full_name_message__msg__Name),
  full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_message_member_array,  // message members
  full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_init_function,  // function to initialize message memory (memory has to be allocated)
  full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_message_type_support_handle = {
  0,
  &full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_full_name_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, full_name_message, msg, Name)() {
  if (!full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_message_type_support_handle.typesupport_identifier) {
    full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &full_name_message__msg__Name__rosidl_typesupport_introspection_c__Name_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
