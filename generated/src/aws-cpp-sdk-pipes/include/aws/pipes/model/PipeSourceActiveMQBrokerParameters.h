﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/MQBrokerAccessCredentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using an Active MQ broker as a source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeSourceActiveMQBrokerParameters">AWS
   * API Reference</a></p>
   */
  class PipeSourceActiveMQBrokerParameters
  {
  public:
    AWS_PIPES_API PipeSourceActiveMQBrokerParameters() = default;
    AWS_PIPES_API PipeSourceActiveMQBrokerParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeSourceActiveMQBrokerParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline const MQBrokerAccessCredentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = MQBrokerAccessCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = MQBrokerAccessCredentials>
    PipeSourceActiveMQBrokerParameters& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline const Aws::String& GetQueueName() const { return m_queueName; }
    inline bool QueueNameHasBeenSet() const { return m_queueNameHasBeenSet; }
    template<typename QueueNameT = Aws::String>
    void SetQueueName(QueueNameT&& value) { m_queueNameHasBeenSet = true; m_queueName = std::forward<QueueNameT>(value); }
    template<typename QueueNameT = Aws::String>
    PipeSourceActiveMQBrokerParameters& WithQueueName(QueueNameT&& value) { SetQueueName(std::forward<QueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const { return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline PipeSourceActiveMQBrokerParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const { return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline PipeSourceActiveMQBrokerParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
    ///@}
  private:

    MQBrokerAccessCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_queueName;
    bool m_queueNameHasBeenSet = false;

    int m_batchSize{0};
    bool m_batchSizeHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds{0};
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
