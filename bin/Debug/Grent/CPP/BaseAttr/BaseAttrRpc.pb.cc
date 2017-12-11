// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BaseAttrRpc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BaseAttrRpc.pb.h"

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

const ::google::protobuf::Descriptor* BaseAttrRpcSyncDataAsk_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BaseAttrRpcSyncDataAsk_reflection_ = NULL;
const ::google::protobuf::Descriptor* BaseAttrRpcSyncDataReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BaseAttrRpcSyncDataReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_BaseAttrRpc_2eproto() {
  protobuf_AddDesc_BaseAttrRpc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "BaseAttrRpc.proto");
  GOOGLE_CHECK(file != NULL);
  BaseAttrRpcSyncDataAsk_descriptor_ = file->message_type(0);
  static const int BaseAttrRpcSyncDataAsk_offsets_[1] = {
  };
  BaseAttrRpcSyncDataAsk_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BaseAttrRpcSyncDataAsk_descriptor_,
      BaseAttrRpcSyncDataAsk::default_instance_,
      BaseAttrRpcSyncDataAsk_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BaseAttrRpcSyncDataAsk, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BaseAttrRpcSyncDataAsk, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BaseAttrRpcSyncDataAsk));
  BaseAttrRpcSyncDataReply_descriptor_ = file->message_type(1);
  static const int BaseAttrRpcSyncDataReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BaseAttrRpcSyncDataReply, result_),
  };
  BaseAttrRpcSyncDataReply_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BaseAttrRpcSyncDataReply_descriptor_,
      BaseAttrRpcSyncDataReply::default_instance_,
      BaseAttrRpcSyncDataReply_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BaseAttrRpcSyncDataReply, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BaseAttrRpcSyncDataReply, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BaseAttrRpcSyncDataReply));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_BaseAttrRpc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BaseAttrRpcSyncDataAsk_descriptor_, &BaseAttrRpcSyncDataAsk::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BaseAttrRpcSyncDataReply_descriptor_, &BaseAttrRpcSyncDataReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_BaseAttrRpc_2eproto() {
  delete BaseAttrRpcSyncDataAsk::default_instance_;
  delete BaseAttrRpcSyncDataAsk_reflection_;
  delete BaseAttrRpcSyncDataReply::default_instance_;
  delete BaseAttrRpcSyncDataReply_reflection_;
}

void protobuf_AddDesc_BaseAttrRpc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_PublicStruct_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021BaseAttrRpc.proto\032\022PublicStruct.proto\""
    "\030\n\026BaseAttrRpcSyncDataAsk\"1\n\030BaseAttrRpc"
    "SyncDataReply\022\025\n\006Result\030\001 \001(\021:\005-9999", 116);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BaseAttrRpc.proto", &protobuf_RegisterTypes);
  BaseAttrRpcSyncDataAsk::default_instance_ = new BaseAttrRpcSyncDataAsk();
  BaseAttrRpcSyncDataReply::default_instance_ = new BaseAttrRpcSyncDataReply();
  BaseAttrRpcSyncDataAsk::default_instance_->InitAsDefaultInstance();
  BaseAttrRpcSyncDataReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BaseAttrRpc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BaseAttrRpc_2eproto {
  StaticDescriptorInitializer_BaseAttrRpc_2eproto() {
    protobuf_AddDesc_BaseAttrRpc_2eproto();
  }
} static_descriptor_initializer_BaseAttrRpc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

BaseAttrRpcSyncDataAsk::BaseAttrRpcSyncDataAsk()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BaseAttrRpcSyncDataAsk::InitAsDefaultInstance() {
}

BaseAttrRpcSyncDataAsk::BaseAttrRpcSyncDataAsk(const BaseAttrRpcSyncDataAsk& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BaseAttrRpcSyncDataAsk::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BaseAttrRpcSyncDataAsk::~BaseAttrRpcSyncDataAsk() {
  SharedDtor();
}

void BaseAttrRpcSyncDataAsk::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BaseAttrRpcSyncDataAsk::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BaseAttrRpcSyncDataAsk::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BaseAttrRpcSyncDataAsk_descriptor_;
}

const BaseAttrRpcSyncDataAsk& BaseAttrRpcSyncDataAsk::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BaseAttrRpc_2eproto();
  return *default_instance_;
}

BaseAttrRpcSyncDataAsk* BaseAttrRpcSyncDataAsk::default_instance_ = NULL;

BaseAttrRpcSyncDataAsk* BaseAttrRpcSyncDataAsk::New() const {
  return new BaseAttrRpcSyncDataAsk;
}

void BaseAttrRpcSyncDataAsk::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BaseAttrRpcSyncDataAsk::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void BaseAttrRpcSyncDataAsk::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BaseAttrRpcSyncDataAsk::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BaseAttrRpcSyncDataAsk::ByteSize() const {
  int total_size = 0;

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

void BaseAttrRpcSyncDataAsk::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BaseAttrRpcSyncDataAsk* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BaseAttrRpcSyncDataAsk*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BaseAttrRpcSyncDataAsk::MergeFrom(const BaseAttrRpcSyncDataAsk& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BaseAttrRpcSyncDataAsk::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BaseAttrRpcSyncDataAsk::CopyFrom(const BaseAttrRpcSyncDataAsk& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BaseAttrRpcSyncDataAsk::IsInitialized() const {

  return true;
}

void BaseAttrRpcSyncDataAsk::Swap(BaseAttrRpcSyncDataAsk* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BaseAttrRpcSyncDataAsk::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BaseAttrRpcSyncDataAsk_descriptor_;
  metadata.reflection = BaseAttrRpcSyncDataAsk_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BaseAttrRpcSyncDataReply::kResultFieldNumber;
#endif  // !_MSC_VER

BaseAttrRpcSyncDataReply::BaseAttrRpcSyncDataReply()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BaseAttrRpcSyncDataReply::InitAsDefaultInstance() {
}

BaseAttrRpcSyncDataReply::BaseAttrRpcSyncDataReply(const BaseAttrRpcSyncDataReply& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BaseAttrRpcSyncDataReply::SharedCtor() {
  _cached_size_ = 0;
  result_ = -9999;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BaseAttrRpcSyncDataReply::~BaseAttrRpcSyncDataReply() {
  SharedDtor();
}

void BaseAttrRpcSyncDataReply::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BaseAttrRpcSyncDataReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BaseAttrRpcSyncDataReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BaseAttrRpcSyncDataReply_descriptor_;
}

const BaseAttrRpcSyncDataReply& BaseAttrRpcSyncDataReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BaseAttrRpc_2eproto();
  return *default_instance_;
}

BaseAttrRpcSyncDataReply* BaseAttrRpcSyncDataReply::default_instance_ = NULL;

BaseAttrRpcSyncDataReply* BaseAttrRpcSyncDataReply::New() const {
  return new BaseAttrRpcSyncDataReply;
}

void BaseAttrRpcSyncDataReply::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    result_ = -9999;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BaseAttrRpcSyncDataReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional sint32 Result = 1 [default = -9999];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &result_)));
          set_has_result();
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

void BaseAttrRpcSyncDataReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional sint32 Result = 1 [default = -9999];
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(1, this->result(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BaseAttrRpcSyncDataReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional sint32 Result = 1 [default = -9999];
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(1, this->result(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BaseAttrRpcSyncDataReply::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional sint32 Result = 1 [default = -9999];
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->result());
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

void BaseAttrRpcSyncDataReply::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BaseAttrRpcSyncDataReply* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BaseAttrRpcSyncDataReply*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BaseAttrRpcSyncDataReply::MergeFrom(const BaseAttrRpcSyncDataReply& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BaseAttrRpcSyncDataReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BaseAttrRpcSyncDataReply::CopyFrom(const BaseAttrRpcSyncDataReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BaseAttrRpcSyncDataReply::IsInitialized() const {

  return true;
}

void BaseAttrRpcSyncDataReply::Swap(BaseAttrRpcSyncDataReply* other) {
  if (other != this) {
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BaseAttrRpcSyncDataReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BaseAttrRpcSyncDataReply_descriptor_;
  metadata.reflection = BaseAttrRpcSyncDataReply_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)