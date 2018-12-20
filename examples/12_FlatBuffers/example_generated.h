// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_EXAMPLE_H_
#define FLATBUFFERS_GENERATED_EXAMPLE_H_

#include "flatbuffers/flatbuffers.h"

struct HelloReply;

struct HelloRequest;

struct ManyHellosRequest;

struct HelloReply FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_MESSAGE = 4
  };
  const flatbuffers::String *message() const {
    return GetPointer<const flatbuffers::String *>(VT_MESSAGE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           verifier.EndTable();
  }
};

struct HelloReplyBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_message(flatbuffers::Offset<flatbuffers::String> message) {
    fbb_.AddOffset(HelloReply::VT_MESSAGE, message);
  }
  explicit HelloReplyBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  HelloReplyBuilder &operator=(const HelloReplyBuilder &);
  flatbuffers::Offset<HelloReply> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<HelloReply>(end);
    return o;
  }
};

inline flatbuffers::Offset<HelloReply> CreateHelloReply(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> message = 0) {
  HelloReplyBuilder builder_(_fbb);
  builder_.add_message(message);
  return builder_.Finish();
}

inline flatbuffers::Offset<HelloReply> CreateHelloReplyDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *message = nullptr) {
  return CreateHelloReply(
      _fbb,
      message ? _fbb.CreateString(message) : 0);
}

struct HelloRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NAME = 4
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
};

struct HelloRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(HelloRequest::VT_NAME, name);
  }
  explicit HelloRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  HelloRequestBuilder &operator=(const HelloRequestBuilder &);
  flatbuffers::Offset<HelloRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<HelloRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<HelloRequest> CreateHelloRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0) {
  HelloRequestBuilder builder_(_fbb);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<HelloRequest> CreateHelloRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr) {
  return CreateHelloRequest(
      _fbb,
      name ? _fbb.CreateString(name) : 0);
}

struct ManyHellosRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NAME = 4,
    VT_NUM_GREETINGS = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  int32_t num_greetings() const {
    return GetField<int32_t>(VT_NUM_GREETINGS, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<int32_t>(verifier, VT_NUM_GREETINGS) &&
           verifier.EndTable();
  }
};

struct ManyHellosRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(ManyHellosRequest::VT_NAME, name);
  }
  void add_num_greetings(int32_t num_greetings) {
    fbb_.AddElement<int32_t>(ManyHellosRequest::VT_NUM_GREETINGS, num_greetings, 0);
  }
  explicit ManyHellosRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ManyHellosRequestBuilder &operator=(const ManyHellosRequestBuilder &);
  flatbuffers::Offset<ManyHellosRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ManyHellosRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<ManyHellosRequest> CreateManyHellosRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    int32_t num_greetings = 0) {
  ManyHellosRequestBuilder builder_(_fbb);
  builder_.add_num_greetings(num_greetings);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<ManyHellosRequest> CreateManyHellosRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    int32_t num_greetings = 0) {
  return CreateManyHellosRequest(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      num_greetings);
}

#endif  // FLATBUFFERS_GENERATED_EXAMPLE_H_
