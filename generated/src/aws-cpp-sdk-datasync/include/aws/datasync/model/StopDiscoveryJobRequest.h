﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class StopDiscoveryJobRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API StopDiscoveryJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopDiscoveryJob"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to stop. </p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const { return m_discoveryJobArn; }
    inline bool DiscoveryJobArnHasBeenSet() const { return m_discoveryJobArnHasBeenSet; }
    template<typename DiscoveryJobArnT = Aws::String>
    void SetDiscoveryJobArn(DiscoveryJobArnT&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::forward<DiscoveryJobArnT>(value); }
    template<typename DiscoveryJobArnT = Aws::String>
    StopDiscoveryJobRequest& WithDiscoveryJobArn(DiscoveryJobArnT&& value) { SetDiscoveryJobArn(std::forward<DiscoveryJobArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
