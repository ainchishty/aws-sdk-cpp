﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEfsAccessPointPosixUserDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEfsAccessPointPosixUserDetails::AwsEfsAccessPointPosixUserDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsEfsAccessPointPosixUserDetails& AwsEfsAccessPointPosixUserDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Gid"))
  {
    m_gid = jsonValue.GetString("Gid");
    m_gidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecondaryGids"))
  {
    Aws::Utils::Array<JsonView> secondaryGidsJsonList = jsonValue.GetArray("SecondaryGids");
    for(unsigned secondaryGidsIndex = 0; secondaryGidsIndex < secondaryGidsJsonList.GetLength(); ++secondaryGidsIndex)
    {
      m_secondaryGids.push_back(secondaryGidsJsonList[secondaryGidsIndex].AsString());
    }
    m_secondaryGidsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = jsonValue.GetString("Uid");
    m_uidHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsEfsAccessPointPosixUserDetails::Jsonize() const
{
  JsonValue payload;

  if(m_gidHasBeenSet)
  {
   payload.WithString("Gid", m_gid);

  }

  if(m_secondaryGidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondaryGidsJsonList(m_secondaryGids.size());
   for(unsigned secondaryGidsIndex = 0; secondaryGidsIndex < secondaryGidsJsonList.GetLength(); ++secondaryGidsIndex)
   {
     secondaryGidsJsonList[secondaryGidsIndex].AsString(m_secondaryGids[secondaryGidsIndex]);
   }
   payload.WithArray("SecondaryGids", std::move(secondaryGidsJsonList));

  }

  if(m_uidHasBeenSet)
  {
   payload.WithString("Uid", m_uid);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
