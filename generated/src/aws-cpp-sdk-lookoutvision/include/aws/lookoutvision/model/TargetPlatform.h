﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/TargetPlatformOs.h>
#include <aws/lookoutvision/model/TargetPlatformArch.h>
#include <aws/lookoutvision/model/TargetPlatformAccelerator.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>The platform on which a model runs on an AWS IoT Greengrass core
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/TargetPlatform">AWS
   * API Reference</a></p>
   */
  class TargetPlatform
  {
  public:
    AWS_LOOKOUTFORVISION_API TargetPlatform() = default;
    AWS_LOOKOUTFORVISION_API TargetPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API TargetPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target operating system for the model. Linux is the only operating system
     * that is currently supported. </p>
     */
    inline TargetPlatformOs GetOs() const { return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    inline void SetOs(TargetPlatformOs value) { m_osHasBeenSet = true; m_os = value; }
    inline TargetPlatform& WithOs(TargetPlatformOs value) { SetOs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target architecture for the model. The currently supported architectures
     * are X86_64 (64-bit version of the x86 instruction set) and ARM_64 (ARMv8 64-bit
     * CPU). </p>
     */
    inline TargetPlatformArch GetArch() const { return m_arch; }
    inline bool ArchHasBeenSet() const { return m_archHasBeenSet; }
    inline void SetArch(TargetPlatformArch value) { m_archHasBeenSet = true; m_arch = value; }
    inline TargetPlatform& WithArch(TargetPlatformArch value) { SetArch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target accelerator for the model. Currently, Amazon Lookout for Vision
     * only supports NVIDIA (Nvidia graphics processing unit) and CPU accelerators. If
     * you specify NVIDIA as an accelerator, you must also specify the
     * <code>gpu-code</code>, <code>trt-ver</code>, and <code>cuda-ver</code> compiler
     * options. If you don't specify an accelerator, Lookout for Vision uses the CPU
     * for compilation and we highly recommend that you use the
     * <a>GreengrassConfiguration$CompilerOptions</a> field. For example, you can use
     * the following compiler options for CPU: </p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul>
     */
    inline TargetPlatformAccelerator GetAccelerator() const { return m_accelerator; }
    inline bool AcceleratorHasBeenSet() const { return m_acceleratorHasBeenSet; }
    inline void SetAccelerator(TargetPlatformAccelerator value) { m_acceleratorHasBeenSet = true; m_accelerator = value; }
    inline TargetPlatform& WithAccelerator(TargetPlatformAccelerator value) { SetAccelerator(value); return *this;}
    ///@}
  private:

    TargetPlatformOs m_os{TargetPlatformOs::NOT_SET};
    bool m_osHasBeenSet = false;

    TargetPlatformArch m_arch{TargetPlatformArch::NOT_SET};
    bool m_archHasBeenSet = false;

    TargetPlatformAccelerator m_accelerator{TargetPlatformAccelerator::NOT_SET};
    bool m_acceleratorHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
