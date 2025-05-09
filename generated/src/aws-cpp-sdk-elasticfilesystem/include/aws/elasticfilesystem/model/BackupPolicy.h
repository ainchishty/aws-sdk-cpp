﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/Status.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>The backup policy for the file system used to create automatic daily backups.
   * If status has a value of <code>ENABLED</code>, the file system is being
   * automatically backed up. For more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#automatic-backups">Automatic
   * backups</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/BackupPolicy">AWS
   * API Reference</a></p>
   */
  class BackupPolicy
  {
  public:
    AWS_EFS_API BackupPolicy() = default;
    AWS_EFS_API BackupPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API BackupPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the status of the file system's backup policy.</p> <ul> <li> <p>
     * <b> <code>ENABLED</code> </b> – EFS is automatically backing up the file
     * system.</p> </li> <li> <p> <b> <code>ENABLING</code> </b> – EFS is turning on
     * automatic backups for the file system.</p> </li> <li> <p> <b>
     * <code>DISABLED</code> </b> – Automatic back ups are turned off for the file
     * system.</p> </li> <li> <p> <b> <code>DISABLING</code> </b> – EFS is turning off
     * automatic backups for the file system.</p> </li> </ul>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline BackupPolicy& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}
  private:

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
