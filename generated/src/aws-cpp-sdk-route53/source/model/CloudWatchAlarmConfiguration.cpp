﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CloudWatchAlarmConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

CloudWatchAlarmConfiguration::CloudWatchAlarmConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CloudWatchAlarmConfiguration& CloudWatchAlarmConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode evaluationPeriodsNode = resultNode.FirstChild("EvaluationPeriods");
    if(!evaluationPeriodsNode.IsNull())
    {
      m_evaluationPeriods = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(evaluationPeriodsNode.GetText()).c_str()).c_str());
      m_evaluationPeriodsHasBeenSet = true;
    }
    XmlNode thresholdNode = resultNode.FirstChild("Threshold");
    if(!thresholdNode.IsNull())
    {
      m_threshold = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(thresholdNode.GetText()).c_str()).c_str());
      m_thresholdHasBeenSet = true;
    }
    XmlNode comparisonOperatorNode = resultNode.FirstChild("ComparisonOperator");
    if(!comparisonOperatorNode.IsNull())
    {
      m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(comparisonOperatorNode.GetText()).c_str()));
      m_comparisonOperatorHasBeenSet = true;
    }
    XmlNode periodNode = resultNode.FirstChild("Period");
    if(!periodNode.IsNull())
    {
      m_period = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodNode.GetText()).c_str()).c_str());
      m_periodHasBeenSet = true;
    }
    XmlNode metricNameNode = resultNode.FirstChild("MetricName");
    if(!metricNameNode.IsNull())
    {
      m_metricName = Aws::Utils::Xml::DecodeEscapedXmlText(metricNameNode.GetText());
      m_metricNameHasBeenSet = true;
    }
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(!namespaceNode.IsNull())
    {
      m_namespace = Aws::Utils::Xml::DecodeEscapedXmlText(namespaceNode.GetText());
      m_namespaceHasBeenSet = true;
    }
    XmlNode statisticNode = resultNode.FirstChild("Statistic");
    if(!statisticNode.IsNull())
    {
      m_statistic = StatisticMapper::GetStatisticForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statisticNode.GetText()).c_str()));
      m_statisticHasBeenSet = true;
    }
    XmlNode dimensionsNode = resultNode.FirstChild("Dimensions");
    if(!dimensionsNode.IsNull())
    {
      XmlNode dimensionsMember = dimensionsNode.FirstChild("Dimension");
      m_dimensionsHasBeenSet = !dimensionsMember.IsNull();
      while(!dimensionsMember.IsNull())
      {
        m_dimensions.push_back(dimensionsMember);
        dimensionsMember = dimensionsMember.NextNode("Dimension");
      }

      m_dimensionsHasBeenSet = true;
    }
  }

  return *this;
}

void CloudWatchAlarmConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_evaluationPeriodsHasBeenSet)
  {
   XmlNode evaluationPeriodsNode = parentNode.CreateChildElement("EvaluationPeriods");
   ss << m_evaluationPeriods;
   evaluationPeriodsNode.SetText(ss.str());
   ss.str("");
  }

  if(m_thresholdHasBeenSet)
  {
   XmlNode thresholdNode = parentNode.CreateChildElement("Threshold");
   ss << m_threshold;
   thresholdNode.SetText(ss.str());
   ss.str("");
  }

  if(m_comparisonOperatorHasBeenSet)
  {
   XmlNode comparisonOperatorNode = parentNode.CreateChildElement("ComparisonOperator");
   comparisonOperatorNode.SetText(ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_periodHasBeenSet)
  {
   XmlNode periodNode = parentNode.CreateChildElement("Period");
   ss << m_period;
   periodNode.SetText(ss.str());
   ss.str("");
  }

  if(m_metricNameHasBeenSet)
  {
   XmlNode metricNameNode = parentNode.CreateChildElement("MetricName");
   metricNameNode.SetText(m_metricName);
  }

  if(m_namespaceHasBeenSet)
  {
   XmlNode namespaceNode = parentNode.CreateChildElement("Namespace");
   namespaceNode.SetText(m_namespace);
  }

  if(m_statisticHasBeenSet)
  {
   XmlNode statisticNode = parentNode.CreateChildElement("Statistic");
   statisticNode.SetText(StatisticMapper::GetNameForStatistic(m_statistic));
  }

  if(m_dimensionsHasBeenSet)
  {
   XmlNode dimensionsParentNode = parentNode.CreateChildElement("Dimensions");
   for(const auto& item : m_dimensions)
   {
     XmlNode dimensionsNode = dimensionsParentNode.CreateChildElement("Dimension");
     item.AddToNode(dimensionsNode);
   }
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
