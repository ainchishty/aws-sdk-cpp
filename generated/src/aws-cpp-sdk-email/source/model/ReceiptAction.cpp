﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ReceiptAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

ReceiptAction::ReceiptAction(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ReceiptAction& ReceiptAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3ActionNode = resultNode.FirstChild("S3Action");
    if(!s3ActionNode.IsNull())
    {
      m_s3Action = s3ActionNode;
      m_s3ActionHasBeenSet = true;
    }
    XmlNode bounceActionNode = resultNode.FirstChild("BounceAction");
    if(!bounceActionNode.IsNull())
    {
      m_bounceAction = bounceActionNode;
      m_bounceActionHasBeenSet = true;
    }
    XmlNode workmailActionNode = resultNode.FirstChild("WorkmailAction");
    if(!workmailActionNode.IsNull())
    {
      m_workmailAction = workmailActionNode;
      m_workmailActionHasBeenSet = true;
    }
    XmlNode lambdaActionNode = resultNode.FirstChild("LambdaAction");
    if(!lambdaActionNode.IsNull())
    {
      m_lambdaAction = lambdaActionNode;
      m_lambdaActionHasBeenSet = true;
    }
    XmlNode stopActionNode = resultNode.FirstChild("StopAction");
    if(!stopActionNode.IsNull())
    {
      m_stopAction = stopActionNode;
      m_stopActionHasBeenSet = true;
    }
    XmlNode addHeaderActionNode = resultNode.FirstChild("AddHeaderAction");
    if(!addHeaderActionNode.IsNull())
    {
      m_addHeaderAction = addHeaderActionNode;
      m_addHeaderActionHasBeenSet = true;
    }
    XmlNode sNSActionNode = resultNode.FirstChild("SNSAction");
    if(!sNSActionNode.IsNull())
    {
      m_sNSAction = sNSActionNode;
      m_sNSActionHasBeenSet = true;
    }
    XmlNode connectActionNode = resultNode.FirstChild("ConnectAction");
    if(!connectActionNode.IsNull())
    {
      m_connectAction = connectActionNode;
      m_connectActionHasBeenSet = true;
    }
  }

  return *this;
}

void ReceiptAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_s3ActionHasBeenSet)
  {
      Aws::StringStream s3ActionLocationAndMemberSs;
      s3ActionLocationAndMemberSs << location << index << locationValue << ".S3Action";
      m_s3Action.OutputToStream(oStream, s3ActionLocationAndMemberSs.str().c_str());
  }

  if(m_bounceActionHasBeenSet)
  {
      Aws::StringStream bounceActionLocationAndMemberSs;
      bounceActionLocationAndMemberSs << location << index << locationValue << ".BounceAction";
      m_bounceAction.OutputToStream(oStream, bounceActionLocationAndMemberSs.str().c_str());
  }

  if(m_workmailActionHasBeenSet)
  {
      Aws::StringStream workmailActionLocationAndMemberSs;
      workmailActionLocationAndMemberSs << location << index << locationValue << ".WorkmailAction";
      m_workmailAction.OutputToStream(oStream, workmailActionLocationAndMemberSs.str().c_str());
  }

  if(m_lambdaActionHasBeenSet)
  {
      Aws::StringStream lambdaActionLocationAndMemberSs;
      lambdaActionLocationAndMemberSs << location << index << locationValue << ".LambdaAction";
      m_lambdaAction.OutputToStream(oStream, lambdaActionLocationAndMemberSs.str().c_str());
  }

  if(m_stopActionHasBeenSet)
  {
      Aws::StringStream stopActionLocationAndMemberSs;
      stopActionLocationAndMemberSs << location << index << locationValue << ".StopAction";
      m_stopAction.OutputToStream(oStream, stopActionLocationAndMemberSs.str().c_str());
  }

  if(m_addHeaderActionHasBeenSet)
  {
      Aws::StringStream addHeaderActionLocationAndMemberSs;
      addHeaderActionLocationAndMemberSs << location << index << locationValue << ".AddHeaderAction";
      m_addHeaderAction.OutputToStream(oStream, addHeaderActionLocationAndMemberSs.str().c_str());
  }

  if(m_sNSActionHasBeenSet)
  {
      Aws::StringStream sNSActionLocationAndMemberSs;
      sNSActionLocationAndMemberSs << location << index << locationValue << ".SNSAction";
      m_sNSAction.OutputToStream(oStream, sNSActionLocationAndMemberSs.str().c_str());
  }

  if(m_connectActionHasBeenSet)
  {
      Aws::StringStream connectActionLocationAndMemberSs;
      connectActionLocationAndMemberSs << location << index << locationValue << ".ConnectAction";
      m_connectAction.OutputToStream(oStream, connectActionLocationAndMemberSs.str().c_str());
  }

}

void ReceiptAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_s3ActionHasBeenSet)
  {
      Aws::String s3ActionLocationAndMember(location);
      s3ActionLocationAndMember += ".S3Action";
      m_s3Action.OutputToStream(oStream, s3ActionLocationAndMember.c_str());
  }
  if(m_bounceActionHasBeenSet)
  {
      Aws::String bounceActionLocationAndMember(location);
      bounceActionLocationAndMember += ".BounceAction";
      m_bounceAction.OutputToStream(oStream, bounceActionLocationAndMember.c_str());
  }
  if(m_workmailActionHasBeenSet)
  {
      Aws::String workmailActionLocationAndMember(location);
      workmailActionLocationAndMember += ".WorkmailAction";
      m_workmailAction.OutputToStream(oStream, workmailActionLocationAndMember.c_str());
  }
  if(m_lambdaActionHasBeenSet)
  {
      Aws::String lambdaActionLocationAndMember(location);
      lambdaActionLocationAndMember += ".LambdaAction";
      m_lambdaAction.OutputToStream(oStream, lambdaActionLocationAndMember.c_str());
  }
  if(m_stopActionHasBeenSet)
  {
      Aws::String stopActionLocationAndMember(location);
      stopActionLocationAndMember += ".StopAction";
      m_stopAction.OutputToStream(oStream, stopActionLocationAndMember.c_str());
  }
  if(m_addHeaderActionHasBeenSet)
  {
      Aws::String addHeaderActionLocationAndMember(location);
      addHeaderActionLocationAndMember += ".AddHeaderAction";
      m_addHeaderAction.OutputToStream(oStream, addHeaderActionLocationAndMember.c_str());
  }
  if(m_sNSActionHasBeenSet)
  {
      Aws::String sNSActionLocationAndMember(location);
      sNSActionLocationAndMember += ".SNSAction";
      m_sNSAction.OutputToStream(oStream, sNSActionLocationAndMember.c_str());
  }
  if(m_connectActionHasBeenSet)
  {
      Aws::String connectActionLocationAndMember(location);
      connectActionLocationAndMember += ".ConnectAction";
      m_connectAction.OutputToStream(oStream, connectActionLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
