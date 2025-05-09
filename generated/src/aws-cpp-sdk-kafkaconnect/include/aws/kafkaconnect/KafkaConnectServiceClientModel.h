﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kafkaconnect/KafkaConnectErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kafkaconnect/KafkaConnectEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KafkaConnectClient header */
#include <aws/kafkaconnect/model/CreateConnectorResult.h>
#include <aws/kafkaconnect/model/CreateCustomPluginResult.h>
#include <aws/kafkaconnect/model/CreateWorkerConfigurationResult.h>
#include <aws/kafkaconnect/model/DeleteConnectorResult.h>
#include <aws/kafkaconnect/model/DeleteCustomPluginResult.h>
#include <aws/kafkaconnect/model/DeleteWorkerConfigurationResult.h>
#include <aws/kafkaconnect/model/DescribeConnectorResult.h>
#include <aws/kafkaconnect/model/DescribeConnectorOperationResult.h>
#include <aws/kafkaconnect/model/DescribeCustomPluginResult.h>
#include <aws/kafkaconnect/model/DescribeWorkerConfigurationResult.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsResult.h>
#include <aws/kafkaconnect/model/ListConnectorsResult.h>
#include <aws/kafkaconnect/model/ListCustomPluginsResult.h>
#include <aws/kafkaconnect/model/ListTagsForResourceResult.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsResult.h>
#include <aws/kafkaconnect/model/TagResourceResult.h>
#include <aws/kafkaconnect/model/UntagResourceResult.h>
#include <aws/kafkaconnect/model/UpdateConnectorResult.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsRequest.h>
#include <aws/kafkaconnect/model/ListCustomPluginsRequest.h>
#include <aws/kafkaconnect/model/ListConnectorsRequest.h>
/* End of service model headers required in KafkaConnectClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace KafkaConnect
  {
    using KafkaConnectClientConfiguration = Aws::Client::GenericClientConfiguration;
    using KafkaConnectEndpointProviderBase = Aws::KafkaConnect::Endpoint::KafkaConnectEndpointProviderBase;
    using KafkaConnectEndpointProvider = Aws::KafkaConnect::Endpoint::KafkaConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KafkaConnectClient header */
      class CreateConnectorRequest;
      class CreateCustomPluginRequest;
      class CreateWorkerConfigurationRequest;
      class DeleteConnectorRequest;
      class DeleteCustomPluginRequest;
      class DeleteWorkerConfigurationRequest;
      class DescribeConnectorRequest;
      class DescribeConnectorOperationRequest;
      class DescribeCustomPluginRequest;
      class DescribeWorkerConfigurationRequest;
      class ListConnectorOperationsRequest;
      class ListConnectorsRequest;
      class ListCustomPluginsRequest;
      class ListTagsForResourceRequest;
      class ListWorkerConfigurationsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConnectorRequest;
      /* End of service model forward declarations required in KafkaConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConnectorResult, KafkaConnectError> CreateConnectorOutcome;
      typedef Aws::Utils::Outcome<CreateCustomPluginResult, KafkaConnectError> CreateCustomPluginOutcome;
      typedef Aws::Utils::Outcome<CreateWorkerConfigurationResult, KafkaConnectError> CreateWorkerConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectorResult, KafkaConnectError> DeleteConnectorOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomPluginResult, KafkaConnectError> DeleteCustomPluginOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkerConfigurationResult, KafkaConnectError> DeleteWorkerConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectorResult, KafkaConnectError> DescribeConnectorOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectorOperationResult, KafkaConnectError> DescribeConnectorOperationOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomPluginResult, KafkaConnectError> DescribeCustomPluginOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkerConfigurationResult, KafkaConnectError> DescribeWorkerConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListConnectorOperationsResult, KafkaConnectError> ListConnectorOperationsOutcome;
      typedef Aws::Utils::Outcome<ListConnectorsResult, KafkaConnectError> ListConnectorsOutcome;
      typedef Aws::Utils::Outcome<ListCustomPluginsResult, KafkaConnectError> ListCustomPluginsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, KafkaConnectError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkerConfigurationsResult, KafkaConnectError> ListWorkerConfigurationsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, KafkaConnectError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, KafkaConnectError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectorResult, KafkaConnectError> UpdateConnectorOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateConnectorOutcome> CreateConnectorOutcomeCallable;
      typedef std::future<CreateCustomPluginOutcome> CreateCustomPluginOutcomeCallable;
      typedef std::future<CreateWorkerConfigurationOutcome> CreateWorkerConfigurationOutcomeCallable;
      typedef std::future<DeleteConnectorOutcome> DeleteConnectorOutcomeCallable;
      typedef std::future<DeleteCustomPluginOutcome> DeleteCustomPluginOutcomeCallable;
      typedef std::future<DeleteWorkerConfigurationOutcome> DeleteWorkerConfigurationOutcomeCallable;
      typedef std::future<DescribeConnectorOutcome> DescribeConnectorOutcomeCallable;
      typedef std::future<DescribeConnectorOperationOutcome> DescribeConnectorOperationOutcomeCallable;
      typedef std::future<DescribeCustomPluginOutcome> DescribeCustomPluginOutcomeCallable;
      typedef std::future<DescribeWorkerConfigurationOutcome> DescribeWorkerConfigurationOutcomeCallable;
      typedef std::future<ListConnectorOperationsOutcome> ListConnectorOperationsOutcomeCallable;
      typedef std::future<ListConnectorsOutcome> ListConnectorsOutcomeCallable;
      typedef std::future<ListCustomPluginsOutcome> ListCustomPluginsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkerConfigurationsOutcome> ListWorkerConfigurationsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConnectorOutcome> UpdateConnectorOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KafkaConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KafkaConnectClient*, const Model::CreateConnectorRequest&, const Model::CreateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectorResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::CreateCustomPluginRequest&, const Model::CreateCustomPluginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomPluginResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::CreateWorkerConfigurationRequest&, const Model::CreateWorkerConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkerConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::DeleteConnectorRequest&, const Model::DeleteConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectorResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::DeleteCustomPluginRequest&, const Model::DeleteCustomPluginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomPluginResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::DeleteWorkerConfigurationRequest&, const Model::DeleteWorkerConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkerConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::DescribeConnectorRequest&, const Model::DescribeConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::DescribeConnectorOperationRequest&, const Model::DescribeConnectorOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorOperationResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::DescribeCustomPluginRequest&, const Model::DescribeCustomPluginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomPluginResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::DescribeWorkerConfigurationRequest&, const Model::DescribeWorkerConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkerConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::ListConnectorOperationsRequest&, const Model::ListConnectorOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorOperationsResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::ListConnectorsRequest&, const Model::ListConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorsResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::ListCustomPluginsRequest&, const Model::ListCustomPluginsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomPluginsResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::ListWorkerConfigurationsRequest&, const Model::ListWorkerConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkerConfigurationsResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KafkaConnectClient*, const Model::UpdateConnectorRequest&, const Model::UpdateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectorResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KafkaConnect
} // namespace Aws
