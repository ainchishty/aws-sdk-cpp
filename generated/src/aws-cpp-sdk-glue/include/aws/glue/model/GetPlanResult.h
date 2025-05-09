﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class GetPlanResult
  {
  public:
    AWS_GLUE_API GetPlanResult() = default;
    AWS_GLUE_API GetPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Python script to perform the mapping.</p>
     */
    inline const Aws::String& GetPythonScript() const { return m_pythonScript; }
    template<typename PythonScriptT = Aws::String>
    void SetPythonScript(PythonScriptT&& value) { m_pythonScriptHasBeenSet = true; m_pythonScript = std::forward<PythonScriptT>(value); }
    template<typename PythonScriptT = Aws::String>
    GetPlanResult& WithPythonScript(PythonScriptT&& value) { SetPythonScript(std::forward<PythonScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Scala code to perform the mapping.</p>
     */
    inline const Aws::String& GetScalaCode() const { return m_scalaCode; }
    template<typename ScalaCodeT = Aws::String>
    void SetScalaCode(ScalaCodeT&& value) { m_scalaCodeHasBeenSet = true; m_scalaCode = std::forward<ScalaCodeT>(value); }
    template<typename ScalaCodeT = Aws::String>
    GetPlanResult& WithScalaCode(ScalaCodeT&& value) { SetScalaCode(std::forward<ScalaCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pythonScript;
    bool m_pythonScriptHasBeenSet = false;

    Aws::String m_scalaCode;
    bool m_scalaCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
