﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ArtifactSource.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeleteArtifactRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteArtifactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteArtifact"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to delete.</p>
     */
    inline const Aws::String& GetArtifactArn() const { return m_artifactArn; }
    inline bool ArtifactArnHasBeenSet() const { return m_artifactArnHasBeenSet; }
    template<typename ArtifactArnT = Aws::String>
    void SetArtifactArn(ArtifactArnT&& value) { m_artifactArnHasBeenSet = true; m_artifactArn = std::forward<ArtifactArnT>(value); }
    template<typename ArtifactArnT = Aws::String>
    DeleteArtifactRequest& WithArtifactArn(ArtifactArnT&& value) { SetArtifactArn(std::forward<ArtifactArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the source.</p>
     */
    inline const ArtifactSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = ArtifactSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = ArtifactSource>
    DeleteArtifactRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_artifactArn;
    bool m_artifactArnHasBeenSet = false;

    ArtifactSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
