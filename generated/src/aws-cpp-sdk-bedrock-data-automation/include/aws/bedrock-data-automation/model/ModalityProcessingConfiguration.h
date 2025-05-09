﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/State.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Configuration to enable/disable processing of modality</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ModalityProcessingConfiguration">AWS
   * API Reference</a></p>
   */
  class ModalityProcessingConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ModalityProcessingConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API ModalityProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API ModalityProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline ModalityProcessingConfiguration& WithState(State value) { SetState(value); return *this;}
    ///@}
  private:

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
