﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{
  enum class ColorSchemeModeType
  {
    NOT_SET,
    LIGHT,
    DARK,
    DYNAMIC
  };

namespace ColorSchemeModeTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API ColorSchemeModeType GetColorSchemeModeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForColorSchemeModeType(ColorSchemeModeType value);
} // namespace ColorSchemeModeTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
