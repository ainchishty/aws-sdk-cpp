﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace EnvironmentTypeMapper
      {

        static const int WINDOWS_CONTAINER_HASH = HashingUtils::HashString("WINDOWS_CONTAINER");
        static const int LINUX_CONTAINER_HASH = HashingUtils::HashString("LINUX_CONTAINER");
        static const int LINUX_GPU_CONTAINER_HASH = HashingUtils::HashString("LINUX_GPU_CONTAINER");
        static const int ARM_CONTAINER_HASH = HashingUtils::HashString("ARM_CONTAINER");
        static const int WINDOWS_SERVER_2019_CONTAINER_HASH = HashingUtils::HashString("WINDOWS_SERVER_2019_CONTAINER");
        static const int WINDOWS_SERVER_2022_CONTAINER_HASH = HashingUtils::HashString("WINDOWS_SERVER_2022_CONTAINER");
        static const int LINUX_LAMBDA_CONTAINER_HASH = HashingUtils::HashString("LINUX_LAMBDA_CONTAINER");
        static const int ARM_LAMBDA_CONTAINER_HASH = HashingUtils::HashString("ARM_LAMBDA_CONTAINER");
        static const int LINUX_EC2_HASH = HashingUtils::HashString("LINUX_EC2");
        static const int ARM_EC2_HASH = HashingUtils::HashString("ARM_EC2");
        static const int WINDOWS_EC2_HASH = HashingUtils::HashString("WINDOWS_EC2");
        static const int MAC_ARM_HASH = HashingUtils::HashString("MAC_ARM");


        EnvironmentType GetEnvironmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_CONTAINER_HASH)
          {
            return EnvironmentType::WINDOWS_CONTAINER;
          }
          else if (hashCode == LINUX_CONTAINER_HASH)
          {
            return EnvironmentType::LINUX_CONTAINER;
          }
          else if (hashCode == LINUX_GPU_CONTAINER_HASH)
          {
            return EnvironmentType::LINUX_GPU_CONTAINER;
          }
          else if (hashCode == ARM_CONTAINER_HASH)
          {
            return EnvironmentType::ARM_CONTAINER;
          }
          else if (hashCode == WINDOWS_SERVER_2019_CONTAINER_HASH)
          {
            return EnvironmentType::WINDOWS_SERVER_2019_CONTAINER;
          }
          else if (hashCode == WINDOWS_SERVER_2022_CONTAINER_HASH)
          {
            return EnvironmentType::WINDOWS_SERVER_2022_CONTAINER;
          }
          else if (hashCode == LINUX_LAMBDA_CONTAINER_HASH)
          {
            return EnvironmentType::LINUX_LAMBDA_CONTAINER;
          }
          else if (hashCode == ARM_LAMBDA_CONTAINER_HASH)
          {
            return EnvironmentType::ARM_LAMBDA_CONTAINER;
          }
          else if (hashCode == LINUX_EC2_HASH)
          {
            return EnvironmentType::LINUX_EC2;
          }
          else if (hashCode == ARM_EC2_HASH)
          {
            return EnvironmentType::ARM_EC2;
          }
          else if (hashCode == WINDOWS_EC2_HASH)
          {
            return EnvironmentType::WINDOWS_EC2;
          }
          else if (hashCode == MAC_ARM_HASH)
          {
            return EnvironmentType::MAC_ARM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentType>(hashCode);
          }

          return EnvironmentType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentType(EnvironmentType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentType::NOT_SET:
            return {};
          case EnvironmentType::WINDOWS_CONTAINER:
            return "WINDOWS_CONTAINER";
          case EnvironmentType::LINUX_CONTAINER:
            return "LINUX_CONTAINER";
          case EnvironmentType::LINUX_GPU_CONTAINER:
            return "LINUX_GPU_CONTAINER";
          case EnvironmentType::ARM_CONTAINER:
            return "ARM_CONTAINER";
          case EnvironmentType::WINDOWS_SERVER_2019_CONTAINER:
            return "WINDOWS_SERVER_2019_CONTAINER";
          case EnvironmentType::WINDOWS_SERVER_2022_CONTAINER:
            return "WINDOWS_SERVER_2022_CONTAINER";
          case EnvironmentType::LINUX_LAMBDA_CONTAINER:
            return "LINUX_LAMBDA_CONTAINER";
          case EnvironmentType::ARM_LAMBDA_CONTAINER:
            return "ARM_LAMBDA_CONTAINER";
          case EnvironmentType::LINUX_EC2:
            return "LINUX_EC2";
          case EnvironmentType::ARM_EC2:
            return "ARM_EC2";
          case EnvironmentType::WINDOWS_EC2:
            return "WINDOWS_EC2";
          case EnvironmentType::MAC_ARM:
            return "MAC_ARM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
