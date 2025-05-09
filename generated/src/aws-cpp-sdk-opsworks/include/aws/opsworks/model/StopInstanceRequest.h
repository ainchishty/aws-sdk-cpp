﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class StopInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API StopInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    StopInstanceRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to force an instance to stop. If the instance's root device
     * type is <code>ebs</code>, or EBS-backed, adding the <code>Force</code> parameter
     * to the <code>StopInstances</code> API call disassociates the OpsWorks Stacks
     * instance from EC2, and forces deletion of <i>only</i> the OpsWorks Stacks
     * instance. You must also delete the formerly-associated instance in EC2 after
     * troubleshooting and replacing the OpsWorks Stacks instance with a new one.</p>
     */
    inline bool GetForce() const { return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline StopInstanceRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    bool m_force{false};
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
