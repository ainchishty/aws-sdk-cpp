﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing a node group launch template specification. The launch
   * template can't include <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
   * <code>SubnetId</code> </a>, <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
   * <code>IamInstanceProfile</code> </a>, <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">
   * <code>RequestSpotInstances</code> </a>, <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_HibernationOptionsRequest.html">
   * <code>HibernationOptions</code> </a>, or <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TerminateInstances.html">
   * <code>TerminateInstances</code> </a>, or the node group deployment or update
   * will fail. For more information about launch templates, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">
   * <code>CreateLaunchTemplate</code> </a> in the Amazon EC2 API Reference. For more
   * information about using launch templates with Amazon EKS, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
   * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
   * <p>You must specify either the launch template ID or the launch template name in
   * the request, but not both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/LaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateSpecification
  {
  public:
    AWS_EKS_API LaunchTemplateSpecification() = default;
    AWS_EKS_API LaunchTemplateSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API LaunchTemplateSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the launch template.</p> <p>You must specify either the launch
     * template name or the launch template ID in the request, but not both. After node
     * group creation, you cannot use a different name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LaunchTemplateSpecification& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the launch template to use. If no version is specified,
     * then the template's default version is used. You can use a different version for
     * node group updates.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    LaunchTemplateSpecification& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the launch
     * template ID or the launch template name in the request, but not both. After node
     * group creation, you cannot use a different ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    LaunchTemplateSpecification& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
