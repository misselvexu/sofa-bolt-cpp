// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: io_buffer_unittest.proto

#ifndef PROTOBUF_io_5fbuffer_5funittest_2eproto__INCLUDED
#define PROTOBUF_io_5fbuffer_5funittest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_io_5fbuffer_5funittest_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsUnitTestMessageImpl();
void InitDefaultsUnitTestMessage();
void InitDefaultsUnitTestProtoImpl();
void InitDefaultsUnitTestProto();
inline void InitDefaults() {
  InitDefaultsUnitTestMessage();
  InitDefaultsUnitTestProto();
}
}  // namespace protobuf_io_5fbuffer_5funittest_2eproto
class UnitTestMessage;
class UnitTestMessageDefaultTypeInternal;
extern UnitTestMessageDefaultTypeInternal _UnitTestMessage_default_instance_;
class UnitTestProto;
class UnitTestProtoDefaultTypeInternal;
extern UnitTestProtoDefaultTypeInternal _UnitTestProto_default_instance_;

// ===================================================================

class UnitTestMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:UnitTestMessage) */ {
 public:
  UnitTestMessage();
  virtual ~UnitTestMessage();

  UnitTestMessage(const UnitTestMessage& from);

  inline UnitTestMessage& operator=(const UnitTestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UnitTestMessage(UnitTestMessage&& from) noexcept
    : UnitTestMessage() {
    *this = ::std::move(from);
  }

  inline UnitTestMessage& operator=(UnitTestMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UnitTestMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnitTestMessage* internal_default_instance() {
    return reinterpret_cast<const UnitTestMessage*>(
               &_UnitTestMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(UnitTestMessage* other);
  friend void swap(UnitTestMessage& a, UnitTestMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UnitTestMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  UnitTestMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const UnitTestMessage& from);
  void MergeFrom(const UnitTestMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(UnitTestMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string msg = 1;
  int msg_size() const;
  void clear_msg();
  static const int kMsgFieldNumber = 1;
  const ::std::string& msg(int index) const;
  ::std::string* mutable_msg(int index);
  void set_msg(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_msg(int index, ::std::string&& value);
  #endif
  void set_msg(int index, const char* value);
  void set_msg(int index, const char* value, size_t size);
  ::std::string* add_msg();
  void add_msg(const ::std::string& value);
  #if LANG_CXX11
  void add_msg(::std::string&& value);
  #endif
  void add_msg(const char* value);
  void add_msg(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& msg() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_msg();

  // repeated int32 code = 2;
  int code_size() const;
  void clear_code();
  static const int kCodeFieldNumber = 2;
  ::google::protobuf::int32 code(int index) const;
  void set_code(int index, ::google::protobuf::int32 value);
  void add_code(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      code() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_code();

  // @@protoc_insertion_point(class_scope:UnitTestMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> msg_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > code_;
  mutable int _code_cached_byte_size_;
  mutable int _cached_size_;
  friend struct ::protobuf_io_5fbuffer_5funittest_2eproto::TableStruct;
  friend void ::protobuf_io_5fbuffer_5funittest_2eproto::InitDefaultsUnitTestMessageImpl();
};
// -------------------------------------------------------------------

class UnitTestProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:UnitTestProto) */ {
 public:
  UnitTestProto();
  virtual ~UnitTestProto();

  UnitTestProto(const UnitTestProto& from);

  inline UnitTestProto& operator=(const UnitTestProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UnitTestProto(UnitTestProto&& from) noexcept
    : UnitTestProto() {
    *this = ::std::move(from);
  }

  inline UnitTestProto& operator=(UnitTestProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UnitTestProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnitTestProto* internal_default_instance() {
    return reinterpret_cast<const UnitTestProto*>(
               &_UnitTestProto_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(UnitTestProto* other);
  friend void swap(UnitTestProto& a, UnitTestProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UnitTestProto* New() const PROTOBUF_FINAL { return New(NULL); }

  UnitTestProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const UnitTestProto& from);
  void MergeFrom(const UnitTestProto& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(UnitTestProto* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .UnitTestMessage msg = 4;
  bool has_msg() const;
  void clear_msg();
  static const int kMsgFieldNumber = 4;
  const ::UnitTestMessage& msg() const;
  ::UnitTestMessage* release_msg();
  ::UnitTestMessage* mutable_msg();
  void set_allocated_msg(::UnitTestMessage* msg);

  // int64 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // uint32 uid = 3;
  void clear_uid();
  static const int kUidFieldNumber = 3;
  ::google::protobuf::uint32 uid() const;
  void set_uid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:UnitTestProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::UnitTestMessage* msg_;
  ::google::protobuf::int64 id_;
  ::google::protobuf::uint32 uid_;
  mutable int _cached_size_;
  friend struct ::protobuf_io_5fbuffer_5funittest_2eproto::TableStruct;
  friend void ::protobuf_io_5fbuffer_5funittest_2eproto::InitDefaultsUnitTestProtoImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UnitTestMessage

// repeated string msg = 1;
inline int UnitTestMessage::msg_size() const {
  return msg_.size();
}
inline void UnitTestMessage::clear_msg() {
  msg_.Clear();
}
inline const ::std::string& UnitTestMessage::msg(int index) const {
  // @@protoc_insertion_point(field_get:UnitTestMessage.msg)
  return msg_.Get(index);
}
inline ::std::string* UnitTestMessage::mutable_msg(int index) {
  // @@protoc_insertion_point(field_mutable:UnitTestMessage.msg)
  return msg_.Mutable(index);
}
inline void UnitTestMessage::set_msg(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:UnitTestMessage.msg)
  msg_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void UnitTestMessage::set_msg(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:UnitTestMessage.msg)
  msg_.Mutable(index)->assign(std::move(value));
}
#endif
inline void UnitTestMessage::set_msg(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  msg_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:UnitTestMessage.msg)
}
inline void UnitTestMessage::set_msg(int index, const char* value, size_t size) {
  msg_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:UnitTestMessage.msg)
}
inline ::std::string* UnitTestMessage::add_msg() {
  // @@protoc_insertion_point(field_add_mutable:UnitTestMessage.msg)
  return msg_.Add();
}
inline void UnitTestMessage::add_msg(const ::std::string& value) {
  msg_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:UnitTestMessage.msg)
}
#if LANG_CXX11
inline void UnitTestMessage::add_msg(::std::string&& value) {
  msg_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:UnitTestMessage.msg)
}
#endif
inline void UnitTestMessage::add_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  msg_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:UnitTestMessage.msg)
}
inline void UnitTestMessage::add_msg(const char* value, size_t size) {
  msg_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:UnitTestMessage.msg)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
UnitTestMessage::msg() const {
  // @@protoc_insertion_point(field_list:UnitTestMessage.msg)
  return msg_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
UnitTestMessage::mutable_msg() {
  // @@protoc_insertion_point(field_mutable_list:UnitTestMessage.msg)
  return &msg_;
}

// repeated int32 code = 2;
inline int UnitTestMessage::code_size() const {
  return code_.size();
}
inline void UnitTestMessage::clear_code() {
  code_.Clear();
}
inline ::google::protobuf::int32 UnitTestMessage::code(int index) const {
  // @@protoc_insertion_point(field_get:UnitTestMessage.code)
  return code_.Get(index);
}
inline void UnitTestMessage::set_code(int index, ::google::protobuf::int32 value) {
  code_.Set(index, value);
  // @@protoc_insertion_point(field_set:UnitTestMessage.code)
}
inline void UnitTestMessage::add_code(::google::protobuf::int32 value) {
  code_.Add(value);
  // @@protoc_insertion_point(field_add:UnitTestMessage.code)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
UnitTestMessage::code() const {
  // @@protoc_insertion_point(field_list:UnitTestMessage.code)
  return code_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
UnitTestMessage::mutable_code() {
  // @@protoc_insertion_point(field_mutable_list:UnitTestMessage.code)
  return &code_;
}

// -------------------------------------------------------------------

// UnitTestProto

// string name = 1;
inline void UnitTestProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UnitTestProto::name() const {
  // @@protoc_insertion_point(field_get:UnitTestProto.name)
  return name_.GetNoArena();
}
inline void UnitTestProto::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:UnitTestProto.name)
}
#if LANG_CXX11
inline void UnitTestProto::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:UnitTestProto.name)
}
#endif
inline void UnitTestProto::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:UnitTestProto.name)
}
inline void UnitTestProto::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:UnitTestProto.name)
}
inline ::std::string* UnitTestProto::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:UnitTestProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UnitTestProto::release_name() {
  // @@protoc_insertion_point(field_release:UnitTestProto.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UnitTestProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:UnitTestProto.name)
}

// int64 id = 2;
inline void UnitTestProto::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 UnitTestProto::id() const {
  // @@protoc_insertion_point(field_get:UnitTestProto.id)
  return id_;
}
inline void UnitTestProto::set_id(::google::protobuf::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:UnitTestProto.id)
}

// uint32 uid = 3;
inline void UnitTestProto::clear_uid() {
  uid_ = 0u;
}
inline ::google::protobuf::uint32 UnitTestProto::uid() const {
  // @@protoc_insertion_point(field_get:UnitTestProto.uid)
  return uid_;
}
inline void UnitTestProto::set_uid(::google::protobuf::uint32 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:UnitTestProto.uid)
}

// .UnitTestMessage msg = 4;
inline bool UnitTestProto::has_msg() const {
  return this != internal_default_instance() && msg_ != NULL;
}
inline void UnitTestProto::clear_msg() {
  if (GetArenaNoVirtual() == NULL && msg_ != NULL) {
    delete msg_;
  }
  msg_ = NULL;
}
inline const ::UnitTestMessage& UnitTestProto::msg() const {
  const ::UnitTestMessage* p = msg_;
  // @@protoc_insertion_point(field_get:UnitTestProto.msg)
  return p != NULL ? *p : *reinterpret_cast<const ::UnitTestMessage*>(
      &::_UnitTestMessage_default_instance_);
}
inline ::UnitTestMessage* UnitTestProto::release_msg() {
  // @@protoc_insertion_point(field_release:UnitTestProto.msg)
  
  ::UnitTestMessage* temp = msg_;
  msg_ = NULL;
  return temp;
}
inline ::UnitTestMessage* UnitTestProto::mutable_msg() {
  
  if (msg_ == NULL) {
    msg_ = new ::UnitTestMessage;
  }
  // @@protoc_insertion_point(field_mutable:UnitTestProto.msg)
  return msg_;
}
inline void UnitTestProto::set_allocated_msg(::UnitTestMessage* msg) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete msg_;
  }
  if (msg) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      msg = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, msg, submessage_arena);
    }
    
  } else {
    
  }
  msg_ = msg;
  // @@protoc_insertion_point(field_set_allocated:UnitTestProto.msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_io_5fbuffer_5funittest_2eproto__INCLUDED
