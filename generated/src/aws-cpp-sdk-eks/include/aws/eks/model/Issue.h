﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/NodegroupIssueCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an issue with an Amazon EKS resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Issue">AWS API
   * Reference</a></p>
   */
  class Issue
  {
  public:
    AWS_EKS_API Issue() = default;
    AWS_EKS_API Issue(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Issue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A brief description of the error.</p> <ul> <li> <p> <b>AccessDenied</b>:
     * Amazon EKS or one or more of your managed nodes is failing to authenticate or
     * authorize with your Kubernetes cluster API server.</p> </li> <li> <p>
     * <b>AsgInstanceLaunchFailures</b>: Your Auto Scaling group is experiencing
     * failures while attempting to launch instances.</p> </li> <li> <p>
     * <b>AutoScalingGroupNotFound</b>: We couldn't find the Auto Scaling group
     * associated with the managed node group. You may be able to recreate an Auto
     * Scaling group with the same settings to recover.</p> </li> <li> <p>
     * <b>ClusterUnreachable</b>: Amazon EKS or one or more of your managed nodes is
     * unable to to communicate with your Kubernetes cluster API server. This can
     * happen if there are network disruptions or if API servers are timing out
     * processing requests. </p> </li> <li> <p> <b>Ec2InstanceTypeDoesNotExist</b>: One
     * or more of the supplied Amazon EC2 instance types do not exist. Amazon EKS
     * checked for the instance types that you provided in this Amazon Web Services
     * Region, and one or more aren't available.</p> </li> <li> <p>
     * <b>Ec2LaunchTemplateNotFound</b>: We couldn't find the Amazon EC2 launch
     * template for your managed node group. You may be able to recreate a launch
     * template with the same settings to recover.</p> </li> <li> <p>
     * <b>Ec2LaunchTemplateVersionMismatch</b>: The Amazon EC2 launch template version
     * for your managed node group does not match the version that Amazon EKS created.
     * You may be able to revert to the version that Amazon EKS created to recover.</p>
     * </li> <li> <p> <b>Ec2SecurityGroupDeletionFailure</b>: We could not delete the
     * remote access security group for your managed node group. Remove any
     * dependencies from the security group.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupNotFound</b>: We couldn't find the cluster security group for
     * the cluster. You must recreate your cluster.</p> </li> <li> <p>
     * <b>Ec2SubnetInvalidConfiguration</b>: One or more Amazon EC2 subnets specified
     * for a node group do not automatically assign public IP addresses to instances
     * launched into it. If you want your instances to be assigned a public IP address,
     * then you need to enable the <code>auto-assign public IP address</code> setting
     * for the subnet. See <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-ip-addressing.html#subnet-public-ip">Modifying
     * the public <code>IPv4</code> addressing attribute for your subnet</a> in the
     * <i>Amazon VPC User Guide</i>.</p> </li> <li> <p>
     * <b>IamInstanceProfileNotFound</b>: We couldn't find the IAM instance profile for
     * your managed node group. You may be able to recreate an instance profile with
     * the same settings to recover.</p> </li> <li> <p> <b>IamNodeRoleNotFound</b>: We
     * couldn't find the IAM role for your managed node group. You may be able to
     * recreate an IAM role with the same settings to recover.</p> </li> <li> <p>
     * <b>InstanceLimitExceeded</b>: Your Amazon Web Services account is unable to
     * launch any more instances of the specified instance type. You may be able to
     * request an Amazon EC2 instance limit increase to recover.</p> </li> <li> <p>
     * <b>InsufficientFreeAddresses</b>: One or more of the subnets associated with
     * your managed node group does not have enough available IP addresses for new
     * nodes.</p> </li> <li> <p> <b>InternalFailure</b>: These errors are usually
     * caused by an Amazon EKS server-side issue.</p> </li> <li> <p>
     * <b>NodeCreationFailure</b>: Your launched instances are unable to register with
     * your Amazon EKS cluster. Common causes of this failure are insufficient <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">node
     * IAM role</a> permissions or lack of outbound internet access for the nodes. </p>
     * </li> </ul>
     */
    inline NodegroupIssueCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(NodegroupIssueCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline Issue& WithCode(NodegroupIssueCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message associated with the issue.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Issue& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resources that are afflicted by this issue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    Issue& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = Aws::String>
    Issue& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}
  private:

    NodegroupIssueCode m_code{NodegroupIssueCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
