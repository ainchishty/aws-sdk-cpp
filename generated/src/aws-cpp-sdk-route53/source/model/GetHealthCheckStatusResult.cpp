﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetHealthCheckStatusResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHealthCheckStatusResult::GetHealthCheckStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetHealthCheckStatusResult& GetHealthCheckStatusResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode healthCheckObservationsNode = resultNode.FirstChild("HealthCheckObservations");
    if(!healthCheckObservationsNode.IsNull())
    {
      XmlNode healthCheckObservationsMember = healthCheckObservationsNode.FirstChild("HealthCheckObservation");
      m_healthCheckObservationsHasBeenSet = !healthCheckObservationsMember.IsNull();
      while(!healthCheckObservationsMember.IsNull())
      {
        m_healthCheckObservations.push_back(healthCheckObservationsMember);
        healthCheckObservationsMember = healthCheckObservationsMember.NextNode("HealthCheckObservation");
      }

      m_healthCheckObservationsHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
