﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class DeleteVpcConnectorRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API DeleteVpcConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcConnector"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to delete.</p> <p>The ARN must be a full VPC connector ARN.</p>
     */
    inline const Aws::String& GetVpcConnectorArn() const { return m_vpcConnectorArn; }
    inline bool VpcConnectorArnHasBeenSet() const { return m_vpcConnectorArnHasBeenSet; }
    template<typename VpcConnectorArnT = Aws::String>
    void SetVpcConnectorArn(VpcConnectorArnT&& value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn = std::forward<VpcConnectorArnT>(value); }
    template<typename VpcConnectorArnT = Aws::String>
    DeleteVpcConnectorRequest& WithVpcConnectorArn(VpcConnectorArnT&& value) { SetVpcConnectorArn(std::forward<VpcConnectorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectorArn;
    bool m_vpcConnectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
