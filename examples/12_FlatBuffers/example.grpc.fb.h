// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: example
#ifndef GRPC_example__INCLUDED
#define GRPC_example__INCLUDED

#include "example_generated.h"
#include "flatbuffers/grpc.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

class Greeter final {
 public:
  static constexpr char const* service_full_name() {
    return "Greeter";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SayHello(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, flatbuffers::grpc::Message<HelloReply>* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<HelloReply>>> AsyncSayHello(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<HelloReply>>>(AsyncSayHelloRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<HelloReply>>> PrepareAsyncSayHello(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<HelloReply>>>(PrepareAsyncSayHelloRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<HelloReply>>> SayManyHellos(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<HelloReply>>>(SayManyHellosRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<HelloReply>>> AsyncSayManyHellos(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<HelloReply>>>(AsyncSayManyHellosRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<HelloReply>>> PrepareAsyncSayManyHellos(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<HelloReply>>>(PrepareAsyncSayManyHellosRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<HelloReply>>* AsyncSayHelloRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<HelloReply>>* PrepareAsyncSayHelloRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<HelloReply>>* SayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<HelloReply>>* AsyncSayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<HelloReply>>* PrepareAsyncSayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SayHello(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, flatbuffers::grpc::Message<HelloReply>* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<HelloReply>>> AsyncSayHello(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<HelloReply>>>(AsyncSayHelloRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<HelloReply>>> PrepareAsyncSayHello(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<HelloReply>>>(PrepareAsyncSayHelloRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< flatbuffers::grpc::Message<HelloReply>>> SayManyHellos(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request) {
      return std::unique_ptr< ::grpc::ClientReader< flatbuffers::grpc::Message<HelloReply>>>(SayManyHellosRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<HelloReply>>> AsyncSayManyHellos(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<HelloReply>>>(AsyncSayManyHellosRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<HelloReply>>> PrepareAsyncSayManyHellos(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<HelloReply>>>(PrepareAsyncSayManyHellosRaw(context, request, cq));
    }
  
   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<HelloReply>>* AsyncSayHelloRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<HelloReply>>* PrepareAsyncSayHelloRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< flatbuffers::grpc::Message<HelloReply>>* SayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request) override;
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<HelloReply>>* AsyncSayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<HelloReply>>* PrepareAsyncSayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SayHello_;
    const ::grpc::internal::RpcMethod rpcmethod_SayManyHellos_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
  
  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SayHello(::grpc::ServerContext* context, const flatbuffers::grpc::Message<HelloRequest>* request, flatbuffers::grpc::Message<HelloReply>* response);
    virtual ::grpc::Status SayManyHellos(::grpc::ServerContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<HelloReply>>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SayHello() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const flatbuffers::grpc::Message<HelloRequest>* request, flatbuffers::grpc::Message<HelloReply>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSayHello(::grpc::ServerContext* context, flatbuffers::grpc::Message<HelloRequest>* request, ::grpc::ServerAsyncResponseWriter< flatbuffers::grpc::Message<HelloReply>>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SayManyHellos : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SayManyHellos() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SayManyHellos() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayManyHellos(::grpc::ServerContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<HelloReply>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSayManyHellos(::grpc::ServerContext* context, flatbuffers::grpc::Message<ManyHellosRequest>* request, ::grpc::ServerAsyncWriter< flatbuffers::grpc::Message<HelloReply>>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef   WithAsyncMethod_SayHello<  WithAsyncMethod_SayManyHellos<  Service   >   >   AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SayHello() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const flatbuffers::grpc::Message<HelloRequest>* request, flatbuffers::grpc::Message<HelloReply>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SayManyHellos : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SayManyHellos() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SayManyHellos() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayManyHellos(::grpc::ServerContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<HelloReply>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SayHello() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< flatbuffers::grpc::Message<HelloRequest>, flatbuffers::grpc::Message<HelloReply>>(std::bind(&WithStreamedUnaryMethod_SayHello<BaseClass>::StreamedSayHello, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const flatbuffers::grpc::Message<HelloRequest>* request, flatbuffers::grpc::Message<HelloReply>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSayHello(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< flatbuffers::grpc::Message<HelloRequest>,flatbuffers::grpc::Message<HelloReply>>* server_unary_streamer) = 0;
  };
  typedef   WithStreamedUnaryMethod_SayHello<  Service   >   StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_SayManyHellos : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_SayManyHellos() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler< flatbuffers::grpc::Message<ManyHellosRequest>, flatbuffers::grpc::Message<HelloReply>>(std::bind(&WithSplitStreamingMethod_SayManyHellos<BaseClass>::StreamedSayManyHellos, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_SayManyHellos() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SayManyHellos(::grpc::ServerContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<HelloReply>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedSayManyHellos(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< flatbuffers::grpc::Message<ManyHellosRequest>,flatbuffers::grpc::Message<HelloReply>>* server_split_streamer) = 0;
  };
  typedef   WithSplitStreamingMethod_SayManyHellos<  Service   >   SplitStreamedService;
  typedef   WithStreamedUnaryMethod_SayHello<  WithSplitStreamingMethod_SayManyHellos<  Service   >   >   StreamedService;
};


#endif  // GRPC_example__INCLUDED
