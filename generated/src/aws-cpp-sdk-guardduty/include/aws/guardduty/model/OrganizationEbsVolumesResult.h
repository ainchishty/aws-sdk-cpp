﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>An object that contains information on the status of whether EBS volumes
   * scanning will be enabled as a data source for an organization.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationEbsVolumesResult">AWS
   * API Reference</a></p>
   */
  class OrganizationEbsVolumesResult
  {
  public:
    AWS_GUARDDUTY_API OrganizationEbsVolumesResult() = default;
    AWS_GUARDDUTY_API OrganizationEbsVolumesResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationEbsVolumesResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains the status of whether scanning EBS volumes should be
     * auto-enabled for new members joining the organization.</p>
     */
    inline bool GetAutoEnable() const { return m_autoEnable; }
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline OrganizationEbsVolumesResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}
    ///@}
  private:

    bool m_autoEnable{false};
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
