// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from full_name_message:srv/GetFullName.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "full_name_message/srv/detail/get_full_name__rosidl_typesupport_introspection_c.h"
#include "full_name_message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "full_name_message/srv/detail/get_full_name__functions.h"
#include "full_name_message/srv/detail/get_full_name__struct.h"


// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  full_name_message__srv__GetFullName_Request__init(message_memory);
}

void full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_fini_function(void * message_memory)
{
  full_name_message__srv__GetFullName_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_message_member_array[3] = {
  {
    "last_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(full_name_message__srv__GetFullName_Request, last_name),  // bytes offset in struct
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
    offsetof(full_name_message__srv__GetFullName_Request, name),  // bytes offset in struct
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
    offsetof(full_name_message__srv__GetFullName_Request, first_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_message_members = {
  "full_name_message__srv",  // message namespace
  "GetFullName_Request",  // message name
  3,  // number of fields
  sizeof(full_name_message__srv__GetFullName_Request),
  full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_message_member_array,  // message members
  full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_message_type_support_handle = {
  0,
  &full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_full_name_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, full_name_message, srv, GetFullName_Request)() {
  if (!full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_message_type_support_handle.typesupport_identifier) {
    full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &full_name_message__srv__GetFullName_Request__rosidl_typesupport_introspection_c__GetFullName_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "full_name_message/srv/detail/get_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "full_name_message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "full_name_message/srv/detail/get_full_name__functions.h"
// already included above
// #include "full_name_message/srv/detail/get_full_name__struct.h"


// Include directives for member types
// Member `full_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  full_name_message__srv__GetFullName_Response__init(message_memory);
}

void full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_fini_function(void * message_memory)
{
  full_name_message__srv__GetFullName_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_message_member_array[1] = {
  {
    "full_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(full_name_message__srv__GetFullName_Response, full_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_message_members = {
  "full_name_message__srv",  // message namespace
  "GetFullName_Response",  // message name
  1,  // number of fields
  sizeof(full_name_message__srv__GetFullName_Response),
  full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_message_member_array,  // message members
  full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_message_type_support_handle = {
  0,
  &full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_full_name_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, full_name_message, srv, GetFullName_Response)() {
  if (!full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_message_type_support_handle.typesupport_identifier) {
    full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &full_name_message__srv__GetFullName_Response__rosidl_typesupport_introspection_c__GetFullName_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "full_name_message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "full_name_message/srv/detail/get_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_service_members = {
  "full_name_message__srv",  // service namespace
  "GetFullName",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_Request_message_type_support_handle,
  NULL  // response message
  // full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_Response_message_type_support_handle
};

static rosidl_service_type_support_t full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_service_type_support_handle = {
  0,
  &full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, full_name_message, srv, GetFullName_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, full_name_message, srv, GetFullName_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_full_name_message
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, full_name_message, srv, GetFullName)() {
  if (!full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_service_type_support_handle.typesupport_identifier) {
    full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, full_name_message, srv, GetFullName_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, full_name_message, srv, GetFullName_Response)()->data;
  }

  return &full_name_message__srv__detail__get_full_name__rosidl_typesupport_introspection_c__GetFullName_service_type_support_handle;
}
