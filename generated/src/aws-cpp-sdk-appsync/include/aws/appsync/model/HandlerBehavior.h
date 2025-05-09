﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class HandlerBehavior
  {
    NOT_SET,
    CODE,
    DIRECT
  };

namespace HandlerBehaviorMapper
{
AWS_APPSYNC_API HandlerBehavior GetHandlerBehaviorForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForHandlerBehavior(HandlerBehavior value);
} // namespace HandlerBehaviorMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
