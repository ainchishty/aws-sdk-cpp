﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Job.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

Job::Job(JsonView jsonValue)
{
  *this = jsonValue;
}

Job& Job::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetSelection"))
  {
    m_targetSelection = TargetSelectionMapper::GetTargetSelectionForName(jsonValue.GetString("targetSelection"));
    m_targetSelectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("forceCanceled"))
  {
    m_forceCanceled = jsonValue.GetBool("forceCanceled");
    m_forceCanceledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reasonCode"))
  {
    m_reasonCode = jsonValue.GetString("reasonCode");
    m_reasonCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
    m_targetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("presignedUrlConfig"))
  {
    m_presignedUrlConfig = jsonValue.GetObject("presignedUrlConfig");
    m_presignedUrlConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobExecutionsRolloutConfig"))
  {
    m_jobExecutionsRolloutConfig = jsonValue.GetObject("jobExecutionsRolloutConfig");
    m_jobExecutionsRolloutConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("abortConfig"))
  {
    m_abortConfig = jsonValue.GetObject("abortConfig");
    m_abortConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobProcessDetails"))
  {
    m_jobProcessDetails = jsonValue.GetObject("jobProcessDetails");
    m_jobProcessDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutConfig"))
  {
    m_timeoutConfig = jsonValue.GetObject("timeoutConfig");
    m_timeoutConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespaceId"))
  {
    m_namespaceId = jsonValue.GetString("namespaceId");
    m_namespaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobTemplateArn"))
  {
    m_jobTemplateArn = jsonValue.GetString("jobTemplateArn");
    m_jobTemplateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobExecutionsRetryConfig"))
  {
    m_jobExecutionsRetryConfig = jsonValue.GetObject("jobExecutionsRetryConfig");
    m_jobExecutionsRetryConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentParameters"))
  {
    Aws::Map<Aws::String, JsonView> documentParametersJsonMap = jsonValue.GetObject("documentParameters").GetAllObjects();
    for(auto& documentParametersItem : documentParametersJsonMap)
    {
      m_documentParameters[documentParametersItem.first] = documentParametersItem.second.AsString();
    }
    m_documentParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isConcurrent"))
  {
    m_isConcurrent = jsonValue.GetBool("isConcurrent");
    m_isConcurrentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schedulingConfig"))
  {
    m_schedulingConfig = jsonValue.GetObject("schedulingConfig");
    m_schedulingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduledJobRollouts"))
  {
    Aws::Utils::Array<JsonView> scheduledJobRolloutsJsonList = jsonValue.GetArray("scheduledJobRollouts");
    for(unsigned scheduledJobRolloutsIndex = 0; scheduledJobRolloutsIndex < scheduledJobRolloutsJsonList.GetLength(); ++scheduledJobRolloutsIndex)
    {
      m_scheduledJobRollouts.push_back(scheduledJobRolloutsJsonList[scheduledJobRolloutsIndex].AsObject());
    }
    m_scheduledJobRolloutsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationPackageVersions"))
  {
    Aws::Utils::Array<JsonView> destinationPackageVersionsJsonList = jsonValue.GetArray("destinationPackageVersions");
    for(unsigned destinationPackageVersionsIndex = 0; destinationPackageVersionsIndex < destinationPackageVersionsJsonList.GetLength(); ++destinationPackageVersionsIndex)
    {
      m_destinationPackageVersions.push_back(destinationPackageVersionsJsonList[destinationPackageVersionsIndex].AsString());
    }
    m_destinationPackageVersionsHasBeenSet = true;
  }
  return *this;
}

JsonValue Job::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_targetSelectionHasBeenSet)
  {
   payload.WithString("targetSelection", TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_forceCanceledHasBeenSet)
  {
   payload.WithBool("forceCanceled", m_forceCanceled);

  }

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("reasonCode", m_reasonCode);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_presignedUrlConfigHasBeenSet)
  {
   payload.WithObject("presignedUrlConfig", m_presignedUrlConfig.Jsonize());

  }

  if(m_jobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRolloutConfig", m_jobExecutionsRolloutConfig.Jsonize());

  }

  if(m_abortConfigHasBeenSet)
  {
   payload.WithObject("abortConfig", m_abortConfig.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithDouble("completedAt", m_completedAt.SecondsWithMSPrecision());
  }

  if(m_jobProcessDetailsHasBeenSet)
  {
   payload.WithObject("jobProcessDetails", m_jobProcessDetails.Jsonize());

  }

  if(m_timeoutConfigHasBeenSet)
  {
   payload.WithObject("timeoutConfig", m_timeoutConfig.Jsonize());

  }

  if(m_namespaceIdHasBeenSet)
  {
   payload.WithString("namespaceId", m_namespaceId);

  }

  if(m_jobTemplateArnHasBeenSet)
  {
   payload.WithString("jobTemplateArn", m_jobTemplateArn);

  }

  if(m_jobExecutionsRetryConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRetryConfig", m_jobExecutionsRetryConfig.Jsonize());

  }

  if(m_documentParametersHasBeenSet)
  {
   JsonValue documentParametersJsonMap;
   for(auto& documentParametersItem : m_documentParameters)
   {
     documentParametersJsonMap.WithString(documentParametersItem.first, documentParametersItem.second);
   }
   payload.WithObject("documentParameters", std::move(documentParametersJsonMap));

  }

  if(m_isConcurrentHasBeenSet)
  {
   payload.WithBool("isConcurrent", m_isConcurrent);

  }

  if(m_schedulingConfigHasBeenSet)
  {
   payload.WithObject("schedulingConfig", m_schedulingConfig.Jsonize());

  }

  if(m_scheduledJobRolloutsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scheduledJobRolloutsJsonList(m_scheduledJobRollouts.size());
   for(unsigned scheduledJobRolloutsIndex = 0; scheduledJobRolloutsIndex < scheduledJobRolloutsJsonList.GetLength(); ++scheduledJobRolloutsIndex)
   {
     scheduledJobRolloutsJsonList[scheduledJobRolloutsIndex].AsObject(m_scheduledJobRollouts[scheduledJobRolloutsIndex].Jsonize());
   }
   payload.WithArray("scheduledJobRollouts", std::move(scheduledJobRolloutsJsonList));

  }

  if(m_destinationPackageVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationPackageVersionsJsonList(m_destinationPackageVersions.size());
   for(unsigned destinationPackageVersionsIndex = 0; destinationPackageVersionsIndex < destinationPackageVersionsJsonList.GetLength(); ++destinationPackageVersionsIndex)
   {
     destinationPackageVersionsJsonList[destinationPackageVersionsIndex].AsString(m_destinationPackageVersions[destinationPackageVersionsIndex]);
   }
   payload.WithArray("destinationPackageVersions", std::move(destinationPackageVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
