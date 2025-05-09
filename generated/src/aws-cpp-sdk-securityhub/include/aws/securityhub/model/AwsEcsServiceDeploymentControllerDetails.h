﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the deployment controller type that the service
   * uses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceDeploymentControllerDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceDeploymentControllerDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentControllerDetails() = default;
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentControllerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentControllerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rolling update (<code>ECS</code>) deployment type replaces the current
     * running version of the container with the latest version.</p> <p>The blue/green
     * (<code>CODE_DEPLOY</code>) deployment type uses the blue/green deployment model
     * that is powered by CodeDeploy. This deployment model a new deployment of a
     * service can be verified before production traffic is sent to it.</p> <p>The
     * external (<code>EXTERNAL</code>) deployment type allows the use of any
     * third-party deployment controller for full control over the deployment process
     * for an Amazon ECS service.</p> <p>Valid values: <code>ECS</code> |
     * <code>CODE_DEPLOY</code> | <code>EXTERNAL</code> </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsEcsServiceDeploymentControllerDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
