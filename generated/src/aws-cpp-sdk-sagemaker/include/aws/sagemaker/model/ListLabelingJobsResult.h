﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LabelingJobSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListLabelingJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListLabelingJobsResult() = default;
    AWS_SAGEMAKER_API ListLabelingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListLabelingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline const Aws::Vector<LabelingJobSummary>& GetLabelingJobSummaryList() const { return m_labelingJobSummaryList; }
    template<typename LabelingJobSummaryListT = Aws::Vector<LabelingJobSummary>>
    void SetLabelingJobSummaryList(LabelingJobSummaryListT&& value) { m_labelingJobSummaryListHasBeenSet = true; m_labelingJobSummaryList = std::forward<LabelingJobSummaryListT>(value); }
    template<typename LabelingJobSummaryListT = Aws::Vector<LabelingJobSummary>>
    ListLabelingJobsResult& WithLabelingJobSummaryList(LabelingJobSummaryListT&& value) { SetLabelingJobSummaryList(std::forward<LabelingJobSummaryListT>(value)); return *this;}
    template<typename LabelingJobSummaryListT = LabelingJobSummary>
    ListLabelingJobsResult& AddLabelingJobSummaryList(LabelingJobSummaryListT&& value) { m_labelingJobSummaryListHasBeenSet = true; m_labelingJobSummaryList.emplace_back(std::forward<LabelingJobSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLabelingJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLabelingJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LabelingJobSummary> m_labelingJobSummaryList;
    bool m_labelingJobSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
