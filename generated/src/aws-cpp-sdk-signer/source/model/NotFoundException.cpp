﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/NotFoundException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

NotFoundException::NotFoundException(JsonView jsonValue)
{
  *this = jsonValue;
}

NotFoundException& NotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  return *this;
}

JsonValue NotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
