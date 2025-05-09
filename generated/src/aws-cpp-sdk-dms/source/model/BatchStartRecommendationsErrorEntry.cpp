﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/BatchStartRecommendationsErrorEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

BatchStartRecommendationsErrorEntry::BatchStartRecommendationsErrorEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchStartRecommendationsErrorEntry& BatchStartRecommendationsErrorEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseId"))
  {
    m_databaseId = jsonValue.GetString("DatabaseId");
    m_databaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");
    m_codeHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchStartRecommendationsErrorEntry::Jsonize() const
{
  JsonValue payload;

  if(m_databaseIdHasBeenSet)
  {
   payload.WithString("DatabaseId", m_databaseId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
