﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class DescribeEventsRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API DescribeEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEvents"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the server for which you want to view events.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    DescribeEventsRequest& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeEvents</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To receive a paginated response, use this parameter to specify the maximum
     * number of results to be returned with a single call. If the number of available
     * results exceeds this maximum, the response includes a <code>NextToken</code>
     * value that you can assign to the <code>NextToken</code> request parameter to get
     * the next set of results. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
