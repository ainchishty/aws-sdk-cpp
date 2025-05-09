﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AssociationEdgeType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AddAssociationRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API AddAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddAssociation"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    AddAssociationRequest& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    AddAssociationRequest& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of association. The following are suggested uses for each type.
     * Amazon SageMaker places no restrictions on their use.</p> <ul> <li>
     * <p>ContributedTo - The source contributed to the destination or had a part in
     * enabling the destination. For example, the training data contributed to the
     * training job.</p> </li> <li> <p>AssociatedWith - The source is connected to the
     * destination. For example, an approval workflow is associated with a model
     * deployment.</p> </li> <li> <p>DerivedFrom - The destination is a modification of
     * the source. For example, a digest output of a channel input for a processing job
     * is derived from the original inputs.</p> </li> <li> <p>Produced - The source
     * generated the destination. For example, a training job produced a model
     * artifact.</p> </li> </ul>
     */
    inline AssociationEdgeType GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(AssociationEdgeType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline AddAssociationRequest& WithAssociationType(AssociationEdgeType value) { SetAssociationType(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    AssociationEdgeType m_associationType{AssociationEdgeType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
