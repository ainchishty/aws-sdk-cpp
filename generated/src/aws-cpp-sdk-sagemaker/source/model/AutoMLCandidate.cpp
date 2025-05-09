﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLCandidate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoMLCandidate::AutoMLCandidate(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoMLCandidate& AutoMLCandidate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CandidateName"))
  {
    m_candidateName = jsonValue.GetString("CandidateName");
    m_candidateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FinalAutoMLJobObjectiveMetric"))
  {
    m_finalAutoMLJobObjectiveMetric = jsonValue.GetObject("FinalAutoMLJobObjectiveMetric");
    m_finalAutoMLJobObjectiveMetricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ObjectiveStatus"))
  {
    m_objectiveStatus = ObjectiveStatusMapper::GetObjectiveStatusForName(jsonValue.GetString("ObjectiveStatus"));
    m_objectiveStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CandidateSteps"))
  {
    Aws::Utils::Array<JsonView> candidateStepsJsonList = jsonValue.GetArray("CandidateSteps");
    for(unsigned candidateStepsIndex = 0; candidateStepsIndex < candidateStepsJsonList.GetLength(); ++candidateStepsIndex)
    {
      m_candidateSteps.push_back(candidateStepsJsonList[candidateStepsIndex].AsObject());
    }
    m_candidateStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CandidateStatus"))
  {
    m_candidateStatus = CandidateStatusMapper::GetCandidateStatusForName(jsonValue.GetString("CandidateStatus"));
    m_candidateStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InferenceContainers"))
  {
    Aws::Utils::Array<JsonView> inferenceContainersJsonList = jsonValue.GetArray("InferenceContainers");
    for(unsigned inferenceContainersIndex = 0; inferenceContainersIndex < inferenceContainersJsonList.GetLength(); ++inferenceContainersIndex)
    {
      m_inferenceContainers.push_back(inferenceContainersJsonList[inferenceContainersIndex].AsObject());
    }
    m_inferenceContainersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CandidateProperties"))
  {
    m_candidateProperties = jsonValue.GetObject("CandidateProperties");
    m_candidatePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InferenceContainerDefinitions"))
  {
    Aws::Map<Aws::String, JsonView> inferenceContainerDefinitionsJsonMap = jsonValue.GetObject("InferenceContainerDefinitions").GetAllObjects();
    for(auto& inferenceContainerDefinitionsItem : inferenceContainerDefinitionsJsonMap)
    {
      Aws::Utils::Array<JsonView> autoMLContainerDefinitionsJsonList = inferenceContainerDefinitionsItem.second.AsArray();
      Aws::Vector<AutoMLContainerDefinition> autoMLContainerDefinitionsList;
      autoMLContainerDefinitionsList.reserve((size_t)autoMLContainerDefinitionsJsonList.GetLength());
      for(unsigned autoMLContainerDefinitionsIndex = 0; autoMLContainerDefinitionsIndex < autoMLContainerDefinitionsJsonList.GetLength(); ++autoMLContainerDefinitionsIndex)
      {
        autoMLContainerDefinitionsList.push_back(autoMLContainerDefinitionsJsonList[autoMLContainerDefinitionsIndex].AsObject());
      }
      m_inferenceContainerDefinitions[AutoMLProcessingUnitMapper::GetAutoMLProcessingUnitForName(inferenceContainerDefinitionsItem.first)] = std::move(autoMLContainerDefinitionsList);
    }
    m_inferenceContainerDefinitionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoMLCandidate::Jsonize() const
{
  JsonValue payload;

  if(m_candidateNameHasBeenSet)
  {
   payload.WithString("CandidateName", m_candidateName);

  }

  if(m_finalAutoMLJobObjectiveMetricHasBeenSet)
  {
   payload.WithObject("FinalAutoMLJobObjectiveMetric", m_finalAutoMLJobObjectiveMetric.Jsonize());

  }

  if(m_objectiveStatusHasBeenSet)
  {
   payload.WithString("ObjectiveStatus", ObjectiveStatusMapper::GetNameForObjectiveStatus(m_objectiveStatus));
  }

  if(m_candidateStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> candidateStepsJsonList(m_candidateSteps.size());
   for(unsigned candidateStepsIndex = 0; candidateStepsIndex < candidateStepsJsonList.GetLength(); ++candidateStepsIndex)
   {
     candidateStepsJsonList[candidateStepsIndex].AsObject(m_candidateSteps[candidateStepsIndex].Jsonize());
   }
   payload.WithArray("CandidateSteps", std::move(candidateStepsJsonList));

  }

  if(m_candidateStatusHasBeenSet)
  {
   payload.WithString("CandidateStatus", CandidateStatusMapper::GetNameForCandidateStatus(m_candidateStatus));
  }

  if(m_inferenceContainersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferenceContainersJsonList(m_inferenceContainers.size());
   for(unsigned inferenceContainersIndex = 0; inferenceContainersIndex < inferenceContainersJsonList.GetLength(); ++inferenceContainersIndex)
   {
     inferenceContainersJsonList[inferenceContainersIndex].AsObject(m_inferenceContainers[inferenceContainersIndex].Jsonize());
   }
   payload.WithArray("InferenceContainers", std::move(inferenceContainersJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_candidatePropertiesHasBeenSet)
  {
   payload.WithObject("CandidateProperties", m_candidateProperties.Jsonize());

  }

  if(m_inferenceContainerDefinitionsHasBeenSet)
  {
   JsonValue inferenceContainerDefinitionsJsonMap;
   for(auto& inferenceContainerDefinitionsItem : m_inferenceContainerDefinitions)
   {
     Aws::Utils::Array<JsonValue> autoMLContainerDefinitionsJsonList(inferenceContainerDefinitionsItem.second.size());
     for(unsigned autoMLContainerDefinitionsIndex = 0; autoMLContainerDefinitionsIndex < autoMLContainerDefinitionsJsonList.GetLength(); ++autoMLContainerDefinitionsIndex)
     {
       autoMLContainerDefinitionsJsonList[autoMLContainerDefinitionsIndex].AsObject(inferenceContainerDefinitionsItem.second[autoMLContainerDefinitionsIndex].Jsonize());
     }
     inferenceContainerDefinitionsJsonMap.WithArray(AutoMLProcessingUnitMapper::GetNameForAutoMLProcessingUnit(inferenceContainerDefinitionsItem.first), std::move(autoMLContainerDefinitionsJsonList));
   }
   payload.WithObject("InferenceContainerDefinitions", std::move(inferenceContainerDefinitionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
