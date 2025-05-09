﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Amazon EBS volume configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/VolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class VolumeConfiguration
  {
  public:
    AWS_OPSWORKS_API VolumeConfiguration() = default;
    AWS_OPSWORKS_API VolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API VolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline const Aws::String& GetMountPoint() const { return m_mountPoint; }
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }
    template<typename MountPointT = Aws::String>
    void SetMountPoint(MountPointT&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::forward<MountPointT>(value); }
    template<typename MountPointT = Aws::String>
    VolumeConfiguration& WithMountPoint(MountPointT&& value) { SetMountPoint(std::forward<MountPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline int GetRaidLevel() const { return m_raidLevel; }
    inline bool RaidLevelHasBeenSet() const { return m_raidLevelHasBeenSet; }
    inline void SetRaidLevel(int value) { m_raidLevelHasBeenSet = true; m_raidLevel = value; }
    inline VolumeConfiguration& WithRaidLevel(int value) { SetRaidLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of disks in the volume.</p>
     */
    inline int GetNumberOfDisks() const { return m_numberOfDisks; }
    inline bool NumberOfDisksHasBeenSet() const { return m_numberOfDisksHasBeenSet; }
    inline void SetNumberOfDisks(int value) { m_numberOfDisksHasBeenSet = true; m_numberOfDisks = value; }
    inline VolumeConfiguration& WithNumberOfDisks(int value) { SetNumberOfDisks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume size.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline VolumeConfiguration& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 125 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 125 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline const Aws::String& GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    template<typename VolumeTypeT = Aws::String>
    void SetVolumeType(VolumeTypeT&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::forward<VolumeTypeT>(value); }
    template<typename VolumeTypeT = Aws::String>
    VolumeConfiguration& WithVolumeType(VolumeTypeT&& value) { SetVolumeType(std::forward<VolumeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline VolumeConfiguration& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline VolumeConfiguration& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}
  private:

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet = false;

    int m_raidLevel{0};
    bool m_raidLevelHasBeenSet = false;

    int m_numberOfDisks{0};
    bool m_numberOfDisksHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
