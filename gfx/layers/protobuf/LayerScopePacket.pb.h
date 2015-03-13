// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LayerScopePacket.proto

#ifndef PROTOBUF_LayerScopePacket_2eproto__INCLUDED
#define PROTOBUF_LayerScopePacket_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace mozilla {
namespace layers {
namespace layerscope {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_LayerScopePacket_2eproto();
void protobuf_AssignDesc_LayerScopePacket_2eproto();
void protobuf_ShutdownFile_LayerScopePacket_2eproto();

class FramePacket;
class ColorPacket;
class TexturePacket;
class Packet;

enum Packet_DataType {
  Packet_DataType_FRAMESTART = 1,
  Packet_DataType_FRAMEEND = 2,
  Packet_DataType_COLOR = 3,
  Packet_DataType_TEXTURE = 4
};
bool Packet_DataType_IsValid(int value);
const Packet_DataType Packet_DataType_DataType_MIN = Packet_DataType_FRAMESTART;
const Packet_DataType Packet_DataType_DataType_MAX = Packet_DataType_TEXTURE;
const int Packet_DataType_DataType_ARRAYSIZE = Packet_DataType_DataType_MAX + 1;

// ===================================================================

class FramePacket : public ::google::protobuf::MessageLite {
 public:
  FramePacket();
  virtual ~FramePacket();
  
  FramePacket(const FramePacket& from);
  
  inline FramePacket& operator=(const FramePacket& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const FramePacket& default_instance();
  
  void Swap(FramePacket* other);
  
  // implements Message ----------------------------------------------
  
  FramePacket* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const FramePacket& from);
  void MergeFrom(const FramePacket& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional uint64 value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline ::google::protobuf::uint64 value() const;
  inline void set_value(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:mozilla.layers.layerscope.FramePacket)
 private:
  inline void set_has_value();
  inline void clear_has_value();
  
  ::google::protobuf::uint64 value_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_LayerScopePacket_2eproto();
  friend void protobuf_AssignDesc_LayerScopePacket_2eproto();
  friend void protobuf_ShutdownFile_LayerScopePacket_2eproto();
  
  void InitAsDefaultInstance();
  static FramePacket* default_instance_;
};
// -------------------------------------------------------------------

class ColorPacket : public ::google::protobuf::MessageLite {
 public:
  ColorPacket();
  virtual ~ColorPacket();
  
  ColorPacket(const ColorPacket& from);
  
  inline ColorPacket& operator=(const ColorPacket& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const ColorPacket& default_instance();
  
  void Swap(ColorPacket* other);
  
  // implements Message ----------------------------------------------
  
  ColorPacket* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ColorPacket& from);
  void MergeFrom(const ColorPacket& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint64 layerref = 1;
  inline bool has_layerref() const;
  inline void clear_layerref();
  static const int kLayerrefFieldNumber = 1;
  inline ::google::protobuf::uint64 layerref() const;
  inline void set_layerref(::google::protobuf::uint64 value);
  
  // optional uint32 width = 2;
  inline bool has_width() const;
  inline void clear_width();
  static const int kWidthFieldNumber = 2;
  inline ::google::protobuf::uint32 width() const;
  inline void set_width(::google::protobuf::uint32 value);
  
  // optional uint32 height = 3;
  inline bool has_height() const;
  inline void clear_height();
  static const int kHeightFieldNumber = 3;
  inline ::google::protobuf::uint32 height() const;
  inline void set_height(::google::protobuf::uint32 value);
  
  // optional uint32 color = 4;
  inline bool has_color() const;
  inline void clear_color();
  static const int kColorFieldNumber = 4;
  inline ::google::protobuf::uint32 color() const;
  inline void set_color(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:mozilla.layers.layerscope.ColorPacket)
 private:
  inline void set_has_layerref();
  inline void clear_has_layerref();
  inline void set_has_width();
  inline void clear_has_width();
  inline void set_has_height();
  inline void clear_has_height();
  inline void set_has_color();
  inline void clear_has_color();
  
  ::google::protobuf::uint64 layerref_;
  ::google::protobuf::uint32 width_;
  ::google::protobuf::uint32 height_;
  ::google::protobuf::uint32 color_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_LayerScopePacket_2eproto();
  friend void protobuf_AssignDesc_LayerScopePacket_2eproto();
  friend void protobuf_ShutdownFile_LayerScopePacket_2eproto();
  
  void InitAsDefaultInstance();
  static ColorPacket* default_instance_;
};
// -------------------------------------------------------------------

class TexturePacket : public ::google::protobuf::MessageLite {
 public:
  TexturePacket();
  virtual ~TexturePacket();
  
  TexturePacket(const TexturePacket& from);
  
  inline TexturePacket& operator=(const TexturePacket& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const TexturePacket& default_instance();
  
  void Swap(TexturePacket* other);
  
  // implements Message ----------------------------------------------
  
  TexturePacket* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TexturePacket& from);
  void MergeFrom(const TexturePacket& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint64 layerref = 1;
  inline bool has_layerref() const;
  inline void clear_layerref();
  static const int kLayerrefFieldNumber = 1;
  inline ::google::protobuf::uint64 layerref() const;
  inline void set_layerref(::google::protobuf::uint64 value);
  
  // optional uint32 width = 2;
  inline bool has_width() const;
  inline void clear_width();
  static const int kWidthFieldNumber = 2;
  inline ::google::protobuf::uint32 width() const;
  inline void set_width(::google::protobuf::uint32 value);
  
  // optional uint32 height = 3;
  inline bool has_height() const;
  inline void clear_height();
  static const int kHeightFieldNumber = 3;
  inline ::google::protobuf::uint32 height() const;
  inline void set_height(::google::protobuf::uint32 value);
  
  // optional uint32 stride = 4;
  inline bool has_stride() const;
  inline void clear_stride();
  static const int kStrideFieldNumber = 4;
  inline ::google::protobuf::uint32 stride() const;
  inline void set_stride(::google::protobuf::uint32 value);
  
  // optional uint32 name = 5;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 5;
  inline ::google::protobuf::uint32 name() const;
  inline void set_name(::google::protobuf::uint32 value);
  
  // optional uint32 target = 6;
  inline bool has_target() const;
  inline void clear_target();
  static const int kTargetFieldNumber = 6;
  inline ::google::protobuf::uint32 target() const;
  inline void set_target(::google::protobuf::uint32 value);
  
  // optional uint32 dataformat = 7;
  inline bool has_dataformat() const;
  inline void clear_dataformat();
  static const int kDataformatFieldNumber = 7;
  inline ::google::protobuf::uint32 dataformat() const;
  inline void set_dataformat(::google::protobuf::uint32 value);
  
  // optional uint64 glcontext = 8;
  inline bool has_glcontext() const;
  inline void clear_glcontext();
  static const int kGlcontextFieldNumber = 8;
  inline ::google::protobuf::uint64 glcontext() const;
  inline void set_glcontext(::google::protobuf::uint64 value);
  
  // optional bytes data = 9;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 9;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  
  // @@protoc_insertion_point(class_scope:mozilla.layers.layerscope.TexturePacket)
 private:
  inline void set_has_layerref();
  inline void clear_has_layerref();
  inline void set_has_width();
  inline void clear_has_width();
  inline void set_has_height();
  inline void clear_has_height();
  inline void set_has_stride();
  inline void clear_has_stride();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_target();
  inline void clear_has_target();
  inline void set_has_dataformat();
  inline void clear_has_dataformat();
  inline void set_has_glcontext();
  inline void clear_has_glcontext();
  inline void set_has_data();
  inline void clear_has_data();
  
  ::google::protobuf::uint64 layerref_;
  ::google::protobuf::uint32 width_;
  ::google::protobuf::uint32 height_;
  ::google::protobuf::uint32 stride_;
  ::google::protobuf::uint32 name_;
  ::google::protobuf::uint32 target_;
  ::google::protobuf::uint32 dataformat_;
  ::google::protobuf::uint64 glcontext_;
  ::std::string* data_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];
  
  friend void  protobuf_AddDesc_LayerScopePacket_2eproto();
  friend void protobuf_AssignDesc_LayerScopePacket_2eproto();
  friend void protobuf_ShutdownFile_LayerScopePacket_2eproto();
  
  void InitAsDefaultInstance();
  static TexturePacket* default_instance_;
};
// -------------------------------------------------------------------

class Packet : public ::google::protobuf::MessageLite {
 public:
  Packet();
  virtual ~Packet();
  
  Packet(const Packet& from);
  
  inline Packet& operator=(const Packet& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const Packet& default_instance();
  
  void Swap(Packet* other);
  
  // implements Message ----------------------------------------------
  
  Packet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Packet& from);
  void MergeFrom(const Packet& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  typedef Packet_DataType DataType;
  static const DataType FRAMESTART = Packet_DataType_FRAMESTART;
  static const DataType FRAMEEND = Packet_DataType_FRAMEEND;
  static const DataType COLOR = Packet_DataType_COLOR;
  static const DataType TEXTURE = Packet_DataType_TEXTURE;
  static inline bool DataType_IsValid(int value) {
    return Packet_DataType_IsValid(value);
  }
  static const DataType DataType_MIN =
    Packet_DataType_DataType_MIN;
  static const DataType DataType_MAX =
    Packet_DataType_DataType_MAX;
  static const int DataType_ARRAYSIZE =
    Packet_DataType_DataType_ARRAYSIZE;
  
  // accessors -------------------------------------------------------
  
  // required .mozilla.layers.layerscope.Packet.DataType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::mozilla::layers::layerscope::Packet_DataType type() const;
  inline void set_type(::mozilla::layers::layerscope::Packet_DataType value);
  
  // optional .mozilla.layers.layerscope.FramePacket frame = 2;
  inline bool has_frame() const;
  inline void clear_frame();
  static const int kFrameFieldNumber = 2;
  inline const ::mozilla::layers::layerscope::FramePacket& frame() const;
  inline ::mozilla::layers::layerscope::FramePacket* mutable_frame();
  inline ::mozilla::layers::layerscope::FramePacket* release_frame();
  
  // optional .mozilla.layers.layerscope.ColorPacket color = 3;
  inline bool has_color() const;
  inline void clear_color();
  static const int kColorFieldNumber = 3;
  inline const ::mozilla::layers::layerscope::ColorPacket& color() const;
  inline ::mozilla::layers::layerscope::ColorPacket* mutable_color();
  inline ::mozilla::layers::layerscope::ColorPacket* release_color();
  
  // optional .mozilla.layers.layerscope.TexturePacket texture = 4;
  inline bool has_texture() const;
  inline void clear_texture();
  static const int kTextureFieldNumber = 4;
  inline const ::mozilla::layers::layerscope::TexturePacket& texture() const;
  inline ::mozilla::layers::layerscope::TexturePacket* mutable_texture();
  inline ::mozilla::layers::layerscope::TexturePacket* release_texture();
  
  // @@protoc_insertion_point(class_scope:mozilla.layers.layerscope.Packet)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_frame();
  inline void clear_has_frame();
  inline void set_has_color();
  inline void clear_has_color();
  inline void set_has_texture();
  inline void clear_has_texture();
  
  ::mozilla::layers::layerscope::FramePacket* frame_;
  ::mozilla::layers::layerscope::ColorPacket* color_;
  ::mozilla::layers::layerscope::TexturePacket* texture_;
  int type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_LayerScopePacket_2eproto();
  friend void protobuf_AssignDesc_LayerScopePacket_2eproto();
  friend void protobuf_ShutdownFile_LayerScopePacket_2eproto();
  
  void InitAsDefaultInstance();
  static Packet* default_instance_;
};
// ===================================================================


// ===================================================================

// FramePacket

// optional uint64 value = 1;
inline bool FramePacket::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FramePacket::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FramePacket::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FramePacket::clear_value() {
  value_ = GOOGLE_ULONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::uint64 FramePacket::value() const {
  return value_;
}
inline void FramePacket::set_value(::google::protobuf::uint64 value) {
  set_has_value();
  value_ = value;
}

// -------------------------------------------------------------------

// ColorPacket

// required uint64 layerref = 1;
inline bool ColorPacket::has_layerref() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ColorPacket::set_has_layerref() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ColorPacket::clear_has_layerref() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ColorPacket::clear_layerref() {
  layerref_ = GOOGLE_ULONGLONG(0);
  clear_has_layerref();
}
inline ::google::protobuf::uint64 ColorPacket::layerref() const {
  return layerref_;
}
inline void ColorPacket::set_layerref(::google::protobuf::uint64 value) {
  set_has_layerref();
  layerref_ = value;
}

// optional uint32 width = 2;
inline bool ColorPacket::has_width() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ColorPacket::set_has_width() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ColorPacket::clear_has_width() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ColorPacket::clear_width() {
  width_ = 0u;
  clear_has_width();
}
inline ::google::protobuf::uint32 ColorPacket::width() const {
  return width_;
}
inline void ColorPacket::set_width(::google::protobuf::uint32 value) {
  set_has_width();
  width_ = value;
}

// optional uint32 height = 3;
inline bool ColorPacket::has_height() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ColorPacket::set_has_height() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ColorPacket::clear_has_height() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ColorPacket::clear_height() {
  height_ = 0u;
  clear_has_height();
}
inline ::google::protobuf::uint32 ColorPacket::height() const {
  return height_;
}
inline void ColorPacket::set_height(::google::protobuf::uint32 value) {
  set_has_height();
  height_ = value;
}

// optional uint32 color = 4;
inline bool ColorPacket::has_color() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ColorPacket::set_has_color() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ColorPacket::clear_has_color() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ColorPacket::clear_color() {
  color_ = 0u;
  clear_has_color();
}
inline ::google::protobuf::uint32 ColorPacket::color() const {
  return color_;
}
inline void ColorPacket::set_color(::google::protobuf::uint32 value) {
  set_has_color();
  color_ = value;
}

// -------------------------------------------------------------------

// TexturePacket

// required uint64 layerref = 1;
inline bool TexturePacket::has_layerref() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TexturePacket::set_has_layerref() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TexturePacket::clear_has_layerref() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TexturePacket::clear_layerref() {
  layerref_ = GOOGLE_ULONGLONG(0);
  clear_has_layerref();
}
inline ::google::protobuf::uint64 TexturePacket::layerref() const {
  return layerref_;
}
inline void TexturePacket::set_layerref(::google::protobuf::uint64 value) {
  set_has_layerref();
  layerref_ = value;
}

// optional uint32 width = 2;
inline bool TexturePacket::has_width() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TexturePacket::set_has_width() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TexturePacket::clear_has_width() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TexturePacket::clear_width() {
  width_ = 0u;
  clear_has_width();
}
inline ::google::protobuf::uint32 TexturePacket::width() const {
  return width_;
}
inline void TexturePacket::set_width(::google::protobuf::uint32 value) {
  set_has_width();
  width_ = value;
}

// optional uint32 height = 3;
inline bool TexturePacket::has_height() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TexturePacket::set_has_height() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TexturePacket::clear_has_height() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TexturePacket::clear_height() {
  height_ = 0u;
  clear_has_height();
}
inline ::google::protobuf::uint32 TexturePacket::height() const {
  return height_;
}
inline void TexturePacket::set_height(::google::protobuf::uint32 value) {
  set_has_height();
  height_ = value;
}

// optional uint32 stride = 4;
inline bool TexturePacket::has_stride() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TexturePacket::set_has_stride() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TexturePacket::clear_has_stride() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TexturePacket::clear_stride() {
  stride_ = 0u;
  clear_has_stride();
}
inline ::google::protobuf::uint32 TexturePacket::stride() const {
  return stride_;
}
inline void TexturePacket::set_stride(::google::protobuf::uint32 value) {
  set_has_stride();
  stride_ = value;
}

// optional uint32 name = 5;
inline bool TexturePacket::has_name() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TexturePacket::set_has_name() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TexturePacket::clear_has_name() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TexturePacket::clear_name() {
  name_ = 0u;
  clear_has_name();
}
inline ::google::protobuf::uint32 TexturePacket::name() const {
  return name_;
}
inline void TexturePacket::set_name(::google::protobuf::uint32 value) {
  set_has_name();
  name_ = value;
}

// optional uint32 target = 6;
inline bool TexturePacket::has_target() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TexturePacket::set_has_target() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TexturePacket::clear_has_target() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TexturePacket::clear_target() {
  target_ = 0u;
  clear_has_target();
}
inline ::google::protobuf::uint32 TexturePacket::target() const {
  return target_;
}
inline void TexturePacket::set_target(::google::protobuf::uint32 value) {
  set_has_target();
  target_ = value;
}

// optional uint32 dataformat = 7;
inline bool TexturePacket::has_dataformat() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void TexturePacket::set_has_dataformat() {
  _has_bits_[0] |= 0x00000040u;
}
inline void TexturePacket::clear_has_dataformat() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void TexturePacket::clear_dataformat() {
  dataformat_ = 0u;
  clear_has_dataformat();
}
inline ::google::protobuf::uint32 TexturePacket::dataformat() const {
  return dataformat_;
}
inline void TexturePacket::set_dataformat(::google::protobuf::uint32 value) {
  set_has_dataformat();
  dataformat_ = value;
}

// optional uint64 glcontext = 8;
inline bool TexturePacket::has_glcontext() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void TexturePacket::set_has_glcontext() {
  _has_bits_[0] |= 0x00000080u;
}
inline void TexturePacket::clear_has_glcontext() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void TexturePacket::clear_glcontext() {
  glcontext_ = GOOGLE_ULONGLONG(0);
  clear_has_glcontext();
}
inline ::google::protobuf::uint64 TexturePacket::glcontext() const {
  return glcontext_;
}
inline void TexturePacket::set_glcontext(::google::protobuf::uint64 value) {
  set_has_glcontext();
  glcontext_ = value;
}

// optional bytes data = 9;
inline bool TexturePacket::has_data() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void TexturePacket::set_has_data() {
  _has_bits_[0] |= 0x00000100u;
}
inline void TexturePacket::clear_has_data() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void TexturePacket::clear_data() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& TexturePacket::data() const {
  return *data_;
}
inline void TexturePacket::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void TexturePacket::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void TexturePacket::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TexturePacket::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  return data_;
}
inline ::std::string* TexturePacket::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Packet

// required .mozilla.layers.layerscope.Packet.DataType type = 1;
inline bool Packet::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Packet::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Packet::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Packet::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::mozilla::layers::layerscope::Packet_DataType Packet::type() const {
  return static_cast< ::mozilla::layers::layerscope::Packet_DataType >(type_);
}
inline void Packet::set_type(::mozilla::layers::layerscope::Packet_DataType value) {
  GOOGLE_DCHECK(::mozilla::layers::layerscope::Packet_DataType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional .mozilla.layers.layerscope.FramePacket frame = 2;
inline bool Packet::has_frame() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Packet::set_has_frame() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Packet::clear_has_frame() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Packet::clear_frame() {
  if (frame_ != NULL) frame_->::mozilla::layers::layerscope::FramePacket::Clear();
  clear_has_frame();
}
inline const ::mozilla::layers::layerscope::FramePacket& Packet::frame() const {
  return frame_ != NULL ? *frame_ : *default_instance_->frame_;
}
inline ::mozilla::layers::layerscope::FramePacket* Packet::mutable_frame() {
  set_has_frame();
  if (frame_ == NULL) frame_ = new ::mozilla::layers::layerscope::FramePacket;
  return frame_;
}
inline ::mozilla::layers::layerscope::FramePacket* Packet::release_frame() {
  clear_has_frame();
  ::mozilla::layers::layerscope::FramePacket* temp = frame_;
  frame_ = NULL;
  return temp;
}

// optional .mozilla.layers.layerscope.ColorPacket color = 3;
inline bool Packet::has_color() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Packet::set_has_color() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Packet::clear_has_color() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Packet::clear_color() {
  if (color_ != NULL) color_->::mozilla::layers::layerscope::ColorPacket::Clear();
  clear_has_color();
}
inline const ::mozilla::layers::layerscope::ColorPacket& Packet::color() const {
  return color_ != NULL ? *color_ : *default_instance_->color_;
}
inline ::mozilla::layers::layerscope::ColorPacket* Packet::mutable_color() {
  set_has_color();
  if (color_ == NULL) color_ = new ::mozilla::layers::layerscope::ColorPacket;
  return color_;
}
inline ::mozilla::layers::layerscope::ColorPacket* Packet::release_color() {
  clear_has_color();
  ::mozilla::layers::layerscope::ColorPacket* temp = color_;
  color_ = NULL;
  return temp;
}

// optional .mozilla.layers.layerscope.TexturePacket texture = 4;
inline bool Packet::has_texture() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Packet::set_has_texture() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Packet::clear_has_texture() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Packet::clear_texture() {
  if (texture_ != NULL) texture_->::mozilla::layers::layerscope::TexturePacket::Clear();
  clear_has_texture();
}
inline const ::mozilla::layers::layerscope::TexturePacket& Packet::texture() const {
  return texture_ != NULL ? *texture_ : *default_instance_->texture_;
}
inline ::mozilla::layers::layerscope::TexturePacket* Packet::mutable_texture() {
  set_has_texture();
  if (texture_ == NULL) texture_ = new ::mozilla::layers::layerscope::TexturePacket;
  return texture_;
}
inline ::mozilla::layers::layerscope::TexturePacket* Packet::release_texture() {
  clear_has_texture();
  ::mozilla::layers::layerscope::TexturePacket* temp = texture_;
  texture_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace layerscope
}  // namespace layers
}  // namespace mozilla

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LayerScopePacket_2eproto__INCLUDED
