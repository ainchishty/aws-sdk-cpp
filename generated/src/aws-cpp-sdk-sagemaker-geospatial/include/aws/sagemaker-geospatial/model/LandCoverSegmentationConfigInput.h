﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>

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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The input structure for Land Cover Operation type.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/LandCoverSegmentationConfigInput">AWS
   * API Reference</a></p>
   */
  class LandCoverSegmentationConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API LandCoverSegmentationConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API LandCoverSegmentationConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API LandCoverSegmentationConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
