// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from move_relative_ur:msg/ErrorMsg.idl
// generated code does not contain a copyright notice

#include "move_relative_ur/msg/detail/error_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_move_relative_ur
const rosidl_type_hash_t *
move_relative_ur__msg__ErrorMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x2f, 0x65, 0x51, 0x86, 0x53, 0x59, 0xda,
      0x11, 0xe0, 0xc6, 0x23, 0x54, 0xc1, 0x1f, 0xeb,
      0x52, 0xc6, 0xb6, 0xd1, 0x8c, 0xf2, 0xb5, 0xf0,
      0xd5, 0x5d, 0x8c, 0x32, 0x50, 0x1c, 0x79, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char move_relative_ur__msg__ErrorMsg__TYPE_NAME[] = "move_relative_ur/msg/ErrorMsg";

// Define type names, field names, and default values
static char move_relative_ur__msg__ErrorMsg__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field move_relative_ur__msg__ErrorMsg__FIELDS[] = {
  {
    {move_relative_ur__msg__ErrorMsg__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
move_relative_ur__msg__ErrorMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {move_relative_ur__msg__ErrorMsg__TYPE_NAME, 29, 29},
      {move_relative_ur__msg__ErrorMsg__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string message\n"
  "\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
move_relative_ur__msg__ErrorMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {move_relative_ur__msg__ErrorMsg__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 18, 18},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
move_relative_ur__msg__ErrorMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *move_relative_ur__msg__ErrorMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
