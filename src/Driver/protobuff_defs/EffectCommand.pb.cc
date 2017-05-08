// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EffectCommand.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "EffectCommand.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace NullSpaceIPC {

namespace {

const ::google::protobuf::Descriptor* EffectCommand_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EffectCommand_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* EffectCommand_Command_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_EffectCommand_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_EffectCommand_2eproto() {
  protobuf_AddDesc_EffectCommand_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "EffectCommand.proto");
  GOOGLE_CHECK(file != NULL);
  EffectCommand_descriptor_ = file->message_type(0);
  static const int EffectCommand_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EffectCommand, command_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EffectCommand, area_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EffectCommand, effect_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EffectCommand, strength_),
  };
  EffectCommand_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EffectCommand_descriptor_,
      EffectCommand::default_instance_,
      EffectCommand_offsets_,
      -1,
      -1,
      -1,
      sizeof(EffectCommand),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EffectCommand, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EffectCommand, _is_default_instance_));
  EffectCommand_Command_descriptor_ = EffectCommand_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_EffectCommand_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EffectCommand_descriptor_, &EffectCommand::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_EffectCommand_2eproto() {
  delete EffectCommand::default_instance_;
  delete EffectCommand_reflection_;
}

void protobuf_AddDesc_EffectCommand_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_EffectCommand_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023EffectCommand.proto\022\014NullSpaceIPC\"\304\001\n\r"
    "EffectCommand\0224\n\007command\030\001 \001(\0162#.NullSpa"
    "ceIPC.EffectCommand.Command\022\014\n\004area\030\002 \001("
    "\r\022\016\n\006effect\030\003 \001(\r\022\020\n\010strength\030\004 \001(\002\"M\n\007C"
    "ommand\022\013\n\007UNKNOWN\020\000\022\010\n\004PLAY\020\001\022\023\n\017PLAY_CO"
    "NTINUOUS\020\002\022\010\n\004HALT\020\003\022\014\n\010PLAY_RTP\020\004b\006prot"
    "o3", 242);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "EffectCommand.proto", &protobuf_RegisterTypes);
  EffectCommand::default_instance_ = new EffectCommand();
  EffectCommand::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_EffectCommand_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_EffectCommand_2eproto {
  StaticDescriptorInitializer_EffectCommand_2eproto() {
    protobuf_AddDesc_EffectCommand_2eproto();
  }
} static_descriptor_initializer_EffectCommand_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* EffectCommand_Command_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EffectCommand_Command_descriptor_;
}
bool EffectCommand_Command_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const EffectCommand_Command EffectCommand::UNKNOWN;
const EffectCommand_Command EffectCommand::PLAY;
const EffectCommand_Command EffectCommand::PLAY_CONTINUOUS;
const EffectCommand_Command EffectCommand::HALT;
const EffectCommand_Command EffectCommand::PLAY_RTP;
const EffectCommand_Command EffectCommand::Command_MIN;
const EffectCommand_Command EffectCommand::Command_MAX;
const int EffectCommand::Command_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EffectCommand::kCommandFieldNumber;
const int EffectCommand::kAreaFieldNumber;
const int EffectCommand::kEffectFieldNumber;
const int EffectCommand::kStrengthFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EffectCommand::EffectCommand()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:NullSpaceIPC.EffectCommand)
}

void EffectCommand::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

EffectCommand::EffectCommand(const EffectCommand& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:NullSpaceIPC.EffectCommand)
}

void EffectCommand::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  command_ = 0;
  area_ = 0u;
  effect_ = 0u;
  strength_ = 0;
}

EffectCommand::~EffectCommand() {
  // @@protoc_insertion_point(destructor:NullSpaceIPC.EffectCommand)
  SharedDtor();
}

void EffectCommand::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EffectCommand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EffectCommand::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EffectCommand_descriptor_;
}

const EffectCommand& EffectCommand::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_EffectCommand_2eproto();
  return *default_instance_;
}

EffectCommand* EffectCommand::default_instance_ = NULL;

EffectCommand* EffectCommand::New(::google::protobuf::Arena* arena) const {
  EffectCommand* n = new EffectCommand;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EffectCommand::Clear() {
// @@protoc_insertion_point(message_clear_start:NullSpaceIPC.EffectCommand)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(EffectCommand, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<EffectCommand*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(command_, strength_);

#undef ZR_HELPER_
#undef ZR_

}

bool EffectCommand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:NullSpaceIPC.EffectCommand)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .NullSpaceIPC.EffectCommand.Command command = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_command(static_cast< ::NullSpaceIPC::EffectCommand_Command >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_area;
        break;
      }

      // optional uint32 area = 2;
      case 2: {
        if (tag == 16) {
         parse_area:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &area_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_effect;
        break;
      }

      // optional uint32 effect = 3;
      case 3: {
        if (tag == 24) {
         parse_effect:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &effect_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_strength;
        break;
      }

      // optional float strength = 4;
      case 4: {
        if (tag == 37) {
         parse_strength:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &strength_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:NullSpaceIPC.EffectCommand)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:NullSpaceIPC.EffectCommand)
  return false;
#undef DO_
}

void EffectCommand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:NullSpaceIPC.EffectCommand)
  // optional .NullSpaceIPC.EffectCommand.Command command = 1;
  if (this->command() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->command(), output);
  }

  // optional uint32 area = 2;
  if (this->area() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->area(), output);
  }

  // optional uint32 effect = 3;
  if (this->effect() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->effect(), output);
  }

  // optional float strength = 4;
  if (this->strength() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->strength(), output);
  }

  // @@protoc_insertion_point(serialize_end:NullSpaceIPC.EffectCommand)
}

::google::protobuf::uint8* EffectCommand::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:NullSpaceIPC.EffectCommand)
  // optional .NullSpaceIPC.EffectCommand.Command command = 1;
  if (this->command() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->command(), target);
  }

  // optional uint32 area = 2;
  if (this->area() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->area(), target);
  }

  // optional uint32 effect = 3;
  if (this->effect() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->effect(), target);
  }

  // optional float strength = 4;
  if (this->strength() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->strength(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:NullSpaceIPC.EffectCommand)
  return target;
}

int EffectCommand::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:NullSpaceIPC.EffectCommand)
  int total_size = 0;

  // optional .NullSpaceIPC.EffectCommand.Command command = 1;
  if (this->command() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->command());
  }

  // optional uint32 area = 2;
  if (this->area() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->area());
  }

  // optional uint32 effect = 3;
  if (this->effect() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->effect());
  }

  // optional float strength = 4;
  if (this->strength() != 0) {
    total_size += 1 + 4;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EffectCommand::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:NullSpaceIPC.EffectCommand)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EffectCommand* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EffectCommand>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:NullSpaceIPC.EffectCommand)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:NullSpaceIPC.EffectCommand)
    MergeFrom(*source);
  }
}

void EffectCommand::MergeFrom(const EffectCommand& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:NullSpaceIPC.EffectCommand)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.command() != 0) {
    set_command(from.command());
  }
  if (from.area() != 0) {
    set_area(from.area());
  }
  if (from.effect() != 0) {
    set_effect(from.effect());
  }
  if (from.strength() != 0) {
    set_strength(from.strength());
  }
}

void EffectCommand::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:NullSpaceIPC.EffectCommand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EffectCommand::CopyFrom(const EffectCommand& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:NullSpaceIPC.EffectCommand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EffectCommand::IsInitialized() const {

  return true;
}

void EffectCommand::Swap(EffectCommand* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EffectCommand::InternalSwap(EffectCommand* other) {
  std::swap(command_, other->command_);
  std::swap(area_, other->area_);
  std::swap(effect_, other->effect_);
  std::swap(strength_, other->strength_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EffectCommand::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EffectCommand_descriptor_;
  metadata.reflection = EffectCommand_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EffectCommand

// optional .NullSpaceIPC.EffectCommand.Command command = 1;
void EffectCommand::clear_command() {
  command_ = 0;
}
 ::NullSpaceIPC::EffectCommand_Command EffectCommand::command() const {
  // @@protoc_insertion_point(field_get:NullSpaceIPC.EffectCommand.command)
  return static_cast< ::NullSpaceIPC::EffectCommand_Command >(command_);
}
 void EffectCommand::set_command(::NullSpaceIPC::EffectCommand_Command value) {
  
  command_ = value;
  // @@protoc_insertion_point(field_set:NullSpaceIPC.EffectCommand.command)
}

// optional uint32 area = 2;
void EffectCommand::clear_area() {
  area_ = 0u;
}
 ::google::protobuf::uint32 EffectCommand::area() const {
  // @@protoc_insertion_point(field_get:NullSpaceIPC.EffectCommand.area)
  return area_;
}
 void EffectCommand::set_area(::google::protobuf::uint32 value) {
  
  area_ = value;
  // @@protoc_insertion_point(field_set:NullSpaceIPC.EffectCommand.area)
}

// optional uint32 effect = 3;
void EffectCommand::clear_effect() {
  effect_ = 0u;
}
 ::google::protobuf::uint32 EffectCommand::effect() const {
  // @@protoc_insertion_point(field_get:NullSpaceIPC.EffectCommand.effect)
  return effect_;
}
 void EffectCommand::set_effect(::google::protobuf::uint32 value) {
  
  effect_ = value;
  // @@protoc_insertion_point(field_set:NullSpaceIPC.EffectCommand.effect)
}

// optional float strength = 4;
void EffectCommand::clear_strength() {
  strength_ = 0;
}
 float EffectCommand::strength() const {
  // @@protoc_insertion_point(field_get:NullSpaceIPC.EffectCommand.strength)
  return strength_;
}
 void EffectCommand::set_strength(float value) {
  
  strength_ = value;
  // @@protoc_insertion_point(field_set:NullSpaceIPC.EffectCommand.strength)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace NullSpaceIPC

// @@protoc_insertion_point(global_scope)