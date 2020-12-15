// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/internal/iam_credentials_logging_decorator.gcpcxx.pb.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_internal {
inline namespace GOOGLE_CLOUD_CPP_NS {

IAMCredentialsLogging::IAMCredentialsLogging(
    std::shared_ptr<IAMCredentialsStub> child,
    TracingOptions tracing_options)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<::google::test::admin::database::v1::GenerateAccessTokenResponse>
IAMCredentialsLogging::GenerateAccessToken(
    grpc::ClientContext& context,
    ::google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             ::google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
        return child_->GenerateAccessToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<::google::test::admin::database::v1::GenerateIdTokenResponse>
IAMCredentialsLogging::GenerateIdToken(
    grpc::ClientContext& context,
    ::google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             ::google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
        return child_->GenerateIdToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google
