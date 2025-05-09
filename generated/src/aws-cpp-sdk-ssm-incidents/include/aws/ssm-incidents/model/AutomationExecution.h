﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The Systems Manager automation document process to start as the runbook at
   * the beginning of the incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/AutomationExecution">AWS
   * API Reference</a></p>
   */
  class AutomationExecution
  {
  public:
    AWS_SSMINCIDENTS_API AutomationExecution() = default;
    AWS_SSMINCIDENTS_API AutomationExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API AutomationExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline const Aws::String& GetSsmExecutionArn() const { return m_ssmExecutionArn; }
    inline bool SsmExecutionArnHasBeenSet() const { return m_ssmExecutionArnHasBeenSet; }
    template<typename SsmExecutionArnT = Aws::String>
    void SetSsmExecutionArn(SsmExecutionArnT&& value) { m_ssmExecutionArnHasBeenSet = true; m_ssmExecutionArn = std::forward<SsmExecutionArnT>(value); }
    template<typename SsmExecutionArnT = Aws::String>
    AutomationExecution& WithSsmExecutionArn(SsmExecutionArnT&& value) { SetSsmExecutionArn(std::forward<SsmExecutionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ssmExecutionArn;
    bool m_ssmExecutionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
