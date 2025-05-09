﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQuerySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQuerySummary::ProtectedQuerySummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedQuerySummary& ProtectedQuerySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipId"))
  {
    m_membershipId = jsonValue.GetString("membershipId");
    m_membershipIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipArn"))
  {
    m_membershipArn = jsonValue.GetString("membershipArn");
    m_membershipArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ProtectedQueryStatusMapper::GetProtectedQueryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("receiverConfigurations"))
  {
    Aws::Utils::Array<JsonView> receiverConfigurationsJsonList = jsonValue.GetArray("receiverConfigurations");
    for(unsigned receiverConfigurationsIndex = 0; receiverConfigurationsIndex < receiverConfigurationsJsonList.GetLength(); ++receiverConfigurationsIndex)
    {
      m_receiverConfigurations.push_back(receiverConfigurationsJsonList[receiverConfigurationsIndex].AsObject());
    }
    m_receiverConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedQuerySummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("membershipId", m_membershipId);

  }

  if(m_membershipArnHasBeenSet)
  {
   payload.WithString("membershipArn", m_membershipArn);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ProtectedQueryStatusMapper::GetNameForProtectedQueryStatus(m_status));
  }

  if(m_receiverConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> receiverConfigurationsJsonList(m_receiverConfigurations.size());
   for(unsigned receiverConfigurationsIndex = 0; receiverConfigurationsIndex < receiverConfigurationsJsonList.GetLength(); ++receiverConfigurationsIndex)
   {
     receiverConfigurationsJsonList[receiverConfigurationsIndex].AsObject(m_receiverConfigurations[receiverConfigurationsIndex].Jsonize());
   }
   payload.WithArray("receiverConfigurations", std::move(receiverConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
