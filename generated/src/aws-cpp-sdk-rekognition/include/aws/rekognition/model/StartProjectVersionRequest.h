﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class StartProjectVersionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartProjectVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartProjectVersion"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline const Aws::String& GetProjectVersionArn() const { return m_projectVersionArn; }
    inline bool ProjectVersionArnHasBeenSet() const { return m_projectVersionArnHasBeenSet; }
    template<typename ProjectVersionArnT = Aws::String>
    void SetProjectVersionArn(ProjectVersionArnT&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::forward<ProjectVersionArnT>(value); }
    template<typename ProjectVersionArnT = Aws::String>
    StartProjectVersionRequest& WithProjectVersionArn(ProjectVersionArnT&& value) { SetProjectVersionArn(std::forward<ProjectVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of inference units to use. A single inference unit
     * represents 1 hour of processing. </p> <p>Use a higher number to increase the TPS
     * throughput of your model. You are charged for the number of inference units that
     * you use. </p>
     */
    inline int GetMinInferenceUnits() const { return m_minInferenceUnits; }
    inline bool MinInferenceUnitsHasBeenSet() const { return m_minInferenceUnitsHasBeenSet; }
    inline void SetMinInferenceUnits(int value) { m_minInferenceUnitsHasBeenSet = true; m_minInferenceUnits = value; }
    inline StartProjectVersionRequest& WithMinInferenceUnits(int value) { SetMinInferenceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of inference units to use for auto-scaling the model. If
     * you don't specify a value, Amazon Rekognition Custom Labels doesn't auto-scale
     * the model.</p>
     */
    inline int GetMaxInferenceUnits() const { return m_maxInferenceUnits; }
    inline bool MaxInferenceUnitsHasBeenSet() const { return m_maxInferenceUnitsHasBeenSet; }
    inline void SetMaxInferenceUnits(int value) { m_maxInferenceUnitsHasBeenSet = true; m_maxInferenceUnits = value; }
    inline StartProjectVersionRequest& WithMaxInferenceUnits(int value) { SetMaxInferenceUnits(value); return *this;}
    ///@}
  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet = false;

    int m_minInferenceUnits{0};
    bool m_minInferenceUnitsHasBeenSet = false;

    int m_maxInferenceUnits{0};
    bool m_maxInferenceUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
