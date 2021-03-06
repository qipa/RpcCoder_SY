// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FightRpc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "FightRpc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* FightRpcUseSkillActionNotify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FightRpcUseSkillActionNotify_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_FightRpc_2eproto() {
  protobuf_AddDesc_FightRpc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "FightRpc.proto");
  GOOGLE_CHECK(file != NULL);
  FightRpcUseSkillActionNotify_descriptor_ = file->message_type(0);
  static const int FightRpcUseSkillActionNotify_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightRpcUseSkillActionNotify, objtargetid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightRpcUseSkillActionNotify, skillid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightRpcUseSkillActionNotify, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightRpcUseSkillActionNotify, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightRpcUseSkillActionNotify, dir_),
  };
  FightRpcUseSkillActionNotify_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FightRpcUseSkillActionNotify_descriptor_,
      FightRpcUseSkillActionNotify::default_instance_,
      FightRpcUseSkillActionNotify_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightRpcUseSkillActionNotify, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightRpcUseSkillActionNotify, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FightRpcUseSkillActionNotify));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_FightRpc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FightRpcUseSkillActionNotify_descriptor_, &FightRpcUseSkillActionNotify::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_FightRpc_2eproto() {
  delete FightRpcUseSkillActionNotify::default_instance_;
  delete FightRpcUseSkillActionNotify_reflection_;
}

void protobuf_AddDesc_FightRpc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_PublicStruct_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016FightRpc.proto\032\022PublicStruct.proto\"{\n\034"
    "FightRpcUseSkillActionNotify\022\027\n\013ObjTarge"
    "tId\030\001 \001(\021:\002-1\022\023\n\007SkillId\030\002 \001(\021:\002-1\022\r\n\001X\030"
    "\003 \001(\021:\002-1\022\r\n\001Y\030\004 \001(\021:\002-1\022\017\n\003Dir\030\005 \001(\021:\002-"
    "1", 161);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "FightRpc.proto", &protobuf_RegisterTypes);
  FightRpcUseSkillActionNotify::default_instance_ = new FightRpcUseSkillActionNotify();
  FightRpcUseSkillActionNotify::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_FightRpc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_FightRpc_2eproto {
  StaticDescriptorInitializer_FightRpc_2eproto() {
    protobuf_AddDesc_FightRpc_2eproto();
  }
} static_descriptor_initializer_FightRpc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int FightRpcUseSkillActionNotify::kObjTargetIdFieldNumber;
const int FightRpcUseSkillActionNotify::kSkillIdFieldNumber;
const int FightRpcUseSkillActionNotify::kXFieldNumber;
const int FightRpcUseSkillActionNotify::kYFieldNumber;
const int FightRpcUseSkillActionNotify::kDirFieldNumber;
#endif  // !_MSC_VER

FightRpcUseSkillActionNotify::FightRpcUseSkillActionNotify()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FightRpcUseSkillActionNotify::InitAsDefaultInstance() {
}

FightRpcUseSkillActionNotify::FightRpcUseSkillActionNotify(const FightRpcUseSkillActionNotify& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FightRpcUseSkillActionNotify::SharedCtor() {
  _cached_size_ = 0;
  objtargetid_ = -1;
  skillid_ = -1;
  x_ = -1;
  y_ = -1;
  dir_ = -1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FightRpcUseSkillActionNotify::~FightRpcUseSkillActionNotify() {
  SharedDtor();
}

void FightRpcUseSkillActionNotify::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FightRpcUseSkillActionNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FightRpcUseSkillActionNotify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FightRpcUseSkillActionNotify_descriptor_;
}

const FightRpcUseSkillActionNotify& FightRpcUseSkillActionNotify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_FightRpc_2eproto();
  return *default_instance_;
}

FightRpcUseSkillActionNotify* FightRpcUseSkillActionNotify::default_instance_ = NULL;

FightRpcUseSkillActionNotify* FightRpcUseSkillActionNotify::New() const {
  return new FightRpcUseSkillActionNotify;
}

void FightRpcUseSkillActionNotify::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    objtargetid_ = -1;
    skillid_ = -1;
    x_ = -1;
    y_ = -1;
    dir_ = -1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FightRpcUseSkillActionNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional sint32 ObjTargetId = 1 [default = -1];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &objtargetid_)));
          set_has_objtargetid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_SkillId;
        break;
      }

      // optional sint32 SkillId = 2 [default = -1];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_SkillId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &skillid_)));
          set_has_skillid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_X;
        break;
      }

      // optional sint32 X = 3 [default = -1];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_X:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_Y;
        break;
      }

      // optional sint32 Y = 4 [default = -1];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_Dir;
        break;
      }

      // optional sint32 Dir = 5 [default = -1];
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Dir:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &dir_)));
          set_has_dir();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void FightRpcUseSkillActionNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional sint32 ObjTargetId = 1 [default = -1];
  if (has_objtargetid()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(1, this->objtargetid(), output);
  }

  // optional sint32 SkillId = 2 [default = -1];
  if (has_skillid()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(2, this->skillid(), output);
  }

  // optional sint32 X = 3 [default = -1];
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(3, this->x(), output);
  }

  // optional sint32 Y = 4 [default = -1];
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(4, this->y(), output);
  }

  // optional sint32 Dir = 5 [default = -1];
  if (has_dir()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(5, this->dir(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FightRpcUseSkillActionNotify::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional sint32 ObjTargetId = 1 [default = -1];
  if (has_objtargetid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(1, this->objtargetid(), target);
  }

  // optional sint32 SkillId = 2 [default = -1];
  if (has_skillid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(2, this->skillid(), target);
  }

  // optional sint32 X = 3 [default = -1];
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(3, this->x(), target);
  }

  // optional sint32 Y = 4 [default = -1];
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(4, this->y(), target);
  }

  // optional sint32 Dir = 5 [default = -1];
  if (has_dir()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(5, this->dir(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FightRpcUseSkillActionNotify::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional sint32 ObjTargetId = 1 [default = -1];
    if (has_objtargetid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->objtargetid());
    }

    // optional sint32 SkillId = 2 [default = -1];
    if (has_skillid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->skillid());
    }

    // optional sint32 X = 3 [default = -1];
    if (has_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->x());
    }

    // optional sint32 Y = 4 [default = -1];
    if (has_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->y());
    }

    // optional sint32 Dir = 5 [default = -1];
    if (has_dir()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->dir());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FightRpcUseSkillActionNotify::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FightRpcUseSkillActionNotify* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FightRpcUseSkillActionNotify*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FightRpcUseSkillActionNotify::MergeFrom(const FightRpcUseSkillActionNotify& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_objtargetid()) {
      set_objtargetid(from.objtargetid());
    }
    if (from.has_skillid()) {
      set_skillid(from.skillid());
    }
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_dir()) {
      set_dir(from.dir());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FightRpcUseSkillActionNotify::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FightRpcUseSkillActionNotify::CopyFrom(const FightRpcUseSkillActionNotify& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FightRpcUseSkillActionNotify::IsInitialized() const {

  return true;
}

void FightRpcUseSkillActionNotify::Swap(FightRpcUseSkillActionNotify* other) {
  if (other != this) {
    std::swap(objtargetid_, other->objtargetid_);
    std::swap(skillid_, other->skillid_);
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(dir_, other->dir_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FightRpcUseSkillActionNotify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FightRpcUseSkillActionNotify_descriptor_;
  metadata.reflection = FightRpcUseSkillActionNotify_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
