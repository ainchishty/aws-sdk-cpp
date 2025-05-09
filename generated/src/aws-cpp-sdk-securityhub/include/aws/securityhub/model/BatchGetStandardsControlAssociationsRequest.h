﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/StandardsControlAssociationId.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchGetStandardsControlAssociationsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchGetStandardsControlAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetStandardsControlAssociations"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> An array with one or more objects that includes a security control
     * (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) and the Amazon
     * Resource Name (ARN) of a standard. This field is used to query the enablement
     * status of a control in a specified standard. The security control ID or ARN is
     * the same across standards. </p>
     */
    inline const Aws::Vector<StandardsControlAssociationId>& GetStandardsControlAssociationIds() const { return m_standardsControlAssociationIds; }
    inline bool StandardsControlAssociationIdsHasBeenSet() const { return m_standardsControlAssociationIdsHasBeenSet; }
    template<typename StandardsControlAssociationIdsT = Aws::Vector<StandardsControlAssociationId>>
    void SetStandardsControlAssociationIds(StandardsControlAssociationIdsT&& value) { m_standardsControlAssociationIdsHasBeenSet = true; m_standardsControlAssociationIds = std::forward<StandardsControlAssociationIdsT>(value); }
    template<typename StandardsControlAssociationIdsT = Aws::Vector<StandardsControlAssociationId>>
    BatchGetStandardsControlAssociationsRequest& WithStandardsControlAssociationIds(StandardsControlAssociationIdsT&& value) { SetStandardsControlAssociationIds(std::forward<StandardsControlAssociationIdsT>(value)); return *this;}
    template<typename StandardsControlAssociationIdsT = StandardsControlAssociationId>
    BatchGetStandardsControlAssociationsRequest& AddStandardsControlAssociationIds(StandardsControlAssociationIdsT&& value) { m_standardsControlAssociationIdsHasBeenSet = true; m_standardsControlAssociationIds.emplace_back(std::forward<StandardsControlAssociationIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StandardsControlAssociationId> m_standardsControlAssociationIds;
    bool m_standardsControlAssociationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
