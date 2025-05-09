﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIGuardrailData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{
  class GetAIGuardrailResult
  {
  public:
    AWS_QCONNECT_API GetAIGuardrailResult() = default;
    AWS_QCONNECT_API GetAIGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetAIGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the AI Guardrail.</p>
     */
    inline const AIGuardrailData& GetAiGuardrail() const { return m_aiGuardrail; }
    template<typename AiGuardrailT = AIGuardrailData>
    void SetAiGuardrail(AiGuardrailT&& value) { m_aiGuardrailHasBeenSet = true; m_aiGuardrail = std::forward<AiGuardrailT>(value); }
    template<typename AiGuardrailT = AIGuardrailData>
    GetAIGuardrailResult& WithAiGuardrail(AiGuardrailT&& value) { SetAiGuardrail(std::forward<AiGuardrailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the AI Guardrail version (returned if an AI Guardrail
     * version was specified via use of a qualifier for the <code>aiGuardrailId</code>
     * on the request). </p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline GetAIGuardrailResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAIGuardrailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AIGuardrailData m_aiGuardrail;
    bool m_aiGuardrailHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
