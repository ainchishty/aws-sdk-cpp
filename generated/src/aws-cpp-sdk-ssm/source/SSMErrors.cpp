﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/SSMErrors.h>
#include <aws/ssm/model/ServiceQuotaExceededException.h>
#include <aws/ssm/model/OpsItemRelatedItemAlreadyExistsException.h>
#include <aws/ssm/model/ResourcePolicyLimitExceededException.h>
#include <aws/ssm/model/ResourceDataSyncNotFoundException.h>
#include <aws/ssm/model/OpsItemAlreadyExistsException.h>
#include <aws/ssm/model/ResourcePolicyInvalidParameterException.h>
#include <aws/ssm/model/ItemSizeLimitExceededException.h>
#include <aws/ssm/model/ThrottlingException.h>
#include <aws/ssm/model/UnsupportedInventoryItemContextException.h>
#include <aws/ssm/model/ValidationException.h>
#include <aws/ssm/model/ResourceDataSyncAlreadyExistsException.h>
#include <aws/ssm/model/OpsItemLimitExceededException.h>
#include <aws/ssm/model/ItemContentMismatchException.h>
#include <aws/ssm/model/InvalidItemContentException.h>
#include <aws/ssm/model/OpsItemInvalidParameterException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SSM;
using namespace Aws::SSM::Model;

namespace Aws
{
namespace SSM
{
template<> AWS_SSM_API ServiceQuotaExceededException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API OpsItemRelatedItemAlreadyExistsException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::OPS_ITEM_RELATED_ITEM_ALREADY_EXISTS);
  return OpsItemRelatedItemAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ResourcePolicyLimitExceededException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::RESOURCE_POLICY_LIMIT_EXCEEDED);
  return ResourcePolicyLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ResourceDataSyncNotFoundException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::RESOURCE_DATA_SYNC_NOT_FOUND);
  return ResourceDataSyncNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API OpsItemAlreadyExistsException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::OPS_ITEM_ALREADY_EXISTS);
  return OpsItemAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ResourcePolicyInvalidParameterException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::RESOURCE_POLICY_INVALID_PARAMETER);
  return ResourcePolicyInvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ItemSizeLimitExceededException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::ITEM_SIZE_LIMIT_EXCEEDED);
  return ItemSizeLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ThrottlingException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API UnsupportedInventoryItemContextException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::UNSUPPORTED_INVENTORY_ITEM_CONTEXT);
  return UnsupportedInventoryItemContextException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ValidationException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ResourceDataSyncAlreadyExistsException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::RESOURCE_DATA_SYNC_ALREADY_EXISTS);
  return ResourceDataSyncAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API OpsItemLimitExceededException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::OPS_ITEM_LIMIT_EXCEEDED);
  return OpsItemLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API ItemContentMismatchException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::ITEM_CONTENT_MISMATCH);
  return ItemContentMismatchException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API InvalidItemContentException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::INVALID_ITEM_CONTENT);
  return InvalidItemContentException(this->GetJsonPayload().View());
}

template<> AWS_SSM_API OpsItemInvalidParameterException SSMError::GetModeledError()
{
  assert(this->GetErrorType() == SSMErrors::OPS_ITEM_INVALID_PARAMETER);
  return OpsItemInvalidParameterException(this->GetJsonPayload().View());
}

namespace SSMErrorMapper
{

static const int INVALID_OUTPUT_LOCATION_HASH = HashingUtils::HashString("InvalidOutputLocation");
static const int RESOURCE_DATA_SYNC_COUNT_EXCEEDED_HASH = HashingUtils::HashString("ResourceDataSyncCountExceededException");
static const int PARAMETER_VERSION_NOT_FOUND_HASH = HashingUtils::HashString("ParameterVersionNotFound");
static const int INVALID_POLICY_TYPE_HASH = HashingUtils::HashString("InvalidPolicyTypeException");
static const int INVALID_AGGREGATOR_HASH = HashingUtils::HashString("InvalidAggregatorException");
static const int INVALID_INVENTORY_REQUEST_HASH = HashingUtils::HashString("InvalidInventoryRequestException");
static const int DUPLICATE_DOCUMENT_VERSION_NAME_HASH = HashingUtils::HashString("DuplicateDocumentVersionName");
static const int OPS_METADATA_INVALID_ARGUMENT_HASH = HashingUtils::HashString("OpsMetadataInvalidArgumentException");
static const int INVALID_TYPE_NAME_HASH = HashingUtils::HashString("InvalidTypeNameException");
static const int UNSUPPORTED_INVENTORY_SCHEMA_VERSION_HASH = HashingUtils::HashString("UnsupportedInventorySchemaVersionException");
static const int OPS_ITEM_CONFLICT_HASH = HashingUtils::HashString("OpsItemConflictException");
static const int ASSOCIATION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AssociationDoesNotExist");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int ASSOCIATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AssociationLimitExceeded");
static const int INVALID_OPTION_HASH = HashingUtils::HashString("InvalidOptionException");
static const int INVALID_INSTANCE_PROPERTY_FILTER_VALUE_HASH = HashingUtils::HashString("InvalidInstancePropertyFilterValue");
static const int PARAMETER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ParameterLimitExceeded");
static const int SUB_TYPE_COUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SubTypeCountLimitExceededException");
static const int ASSOCIATION_VERSION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AssociationVersionLimitExceeded");
static const int INVALID_PERMISSION_TYPE_HASH = HashingUtils::HashString("InvalidPermissionType");
static const int INCOMPATIBLE_POLICY_HASH = HashingUtils::HashString("IncompatiblePolicyException");
static const int INVALID_ASSOCIATION_VERSION_HASH = HashingUtils::HashString("InvalidAssociationVersion");
static const int OPS_ITEM_RELATED_ITEM_ALREADY_EXISTS_HASH = HashingUtils::HashString("OpsItemRelatedItemAlreadyExistsException");
static const int PARAMETER_NOT_FOUND_HASH = HashingUtils::HashString("ParameterNotFound");
static const int INVALID_DOCUMENT_TYPE_HASH = HashingUtils::HashString("InvalidDocumentType");
static const int RESOURCE_POLICY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourcePolicyLimitExceededException");
static const int RESOURCE_POLICY_CONFLICT_HASH = HashingUtils::HashString("ResourcePolicyConflictException");
static const int PARAMETER_ALREADY_EXISTS_HASH = HashingUtils::HashString("ParameterAlreadyExists");
static const int HIERARCHY_LEVEL_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("HierarchyLevelLimitExceededException");
static const int DOCUMENT_VERSION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DocumentVersionLimitExceeded");
static const int RESOURCE_DATA_SYNC_NOT_FOUND_HASH = HashingUtils::HashString("ResourceDataSyncNotFoundException");
static const int INVALID_FILTER_VALUE_HASH = HashingUtils::HashString("InvalidFilterValue");
static const int OPS_ITEM_ALREADY_EXISTS_HASH = HashingUtils::HashString("OpsItemAlreadyExistsException");
static const int MALFORMED_RESOURCE_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedResourcePolicyDocumentException");
static const int INVALID_DELETE_INVENTORY_PARAMETERS_HASH = HashingUtils::HashString("InvalidDeleteInventoryParametersException");
static const int OPS_METADATA_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OpsMetadataLimitExceededException");
static const int FEATURE_NOT_AVAILABLE_HASH = HashingUtils::HashString("FeatureNotAvailableException");
static const int INVALID_PLUGIN_NAME_HASH = HashingUtils::HashString("InvalidPluginName");
static const int INVALID_DOCUMENT_HASH = HashingUtils::HashString("InvalidDocument");
static const int INVALID_AUTOMATION_SIGNAL_HASH = HashingUtils::HashString("InvalidAutomationSignalException");
static const int RESOURCE_POLICY_INVALID_PARAMETER_HASH = HashingUtils::HashString("ResourcePolicyInvalidParameterException");
static const int AUTOMATION_DEFINITION_NOT_APPROVED_HASH = HashingUtils::HashString("AutomationDefinitionNotApprovedException");
static const int AUTOMATION_EXECUTION_NOT_FOUND_HASH = HashingUtils::HashString("AutomationExecutionNotFoundException");
static const int INVALID_INVENTORY_ITEM_CONTEXT_HASH = HashingUtils::HashString("InvalidInventoryItemContextException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int ASSOCIATION_EXECUTION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AssociationExecutionDoesNotExist");
static const int INVALID_RESOURCE_ID_HASH = HashingUtils::HashString("InvalidResourceId");
static const int INVALID_INSTANCE_ID_HASH = HashingUtils::HashString("InvalidInstanceId");
static const int ASSOCIATED_INSTANCES_HASH = HashingUtils::HashString("AssociatedInstances");
static const int OPS_METADATA_ALREADY_EXISTS_HASH = HashingUtils::HashString("OpsMetadataAlreadyExistsException");
static const int TARGET_IN_USE_HASH = HashingUtils::HashString("TargetInUseException");
static const int INVALID_KEY_ID_HASH = HashingUtils::HashString("InvalidKeyId");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int ITEM_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ItemSizeLimitExceededException");
static const int OPS_METADATA_TOO_MANY_UPDATES_HASH = HashingUtils::HashString("OpsMetadataTooManyUpdatesException");
static const int PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ParameterVersionLabelLimitExceeded");
static const int INVALID_RESOURCE_TYPE_HASH = HashingUtils::HashString("InvalidResourceType");
static const int OPS_ITEM_RELATED_ITEM_ASSOCIATION_NOT_FOUND_HASH = HashingUtils::HashString("OpsItemRelatedItemAssociationNotFoundException");
static const int DOCUMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DocumentLimitExceeded");
static const int ASSOCIATION_ALREADY_EXISTS_HASH = HashingUtils::HashString("AssociationAlreadyExists");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextToken");
static const int UNSUPPORTED_OPERATING_SYSTEM_HASH = HashingUtils::HashString("UnsupportedOperatingSystem");
static const int AUTOMATION_EXECUTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AutomationExecutionLimitExceededException");
static const int INVALID_DELETION_ID_HASH = HashingUtils::HashString("InvalidDeletionIdException");
static const int INVALID_TARGET_HASH = HashingUtils::HashString("InvalidTarget");
static const int INVALID_DOCUMENT_CONTENT_HASH = HashingUtils::HashString("InvalidDocumentContent");
static const int UNSUPPORTED_INVENTORY_ITEM_CONTEXT_HASH = HashingUtils::HashString("UnsupportedInventoryItemContextException");
static const int INVALID_POLICY_ATTRIBUTE_HASH = HashingUtils::HashString("InvalidPolicyAttributeException");
static const int AUTOMATION_DEFINITION_VERSION_NOT_FOUND_HASH = HashingUtils::HashString("AutomationDefinitionVersionNotFoundException");
static const int COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ComplianceTypeCountLimitExceededException");
static const int PARAMETER_MAX_VERSION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ParameterMaxVersionLimitExceeded");
static const int OPS_ITEM_ACCESS_DENIED_HASH = HashingUtils::HashString("OpsItemAccessDeniedException");
static const int AUTOMATION_STEP_NOT_FOUND_HASH = HashingUtils::HashString("AutomationStepNotFoundException");
static const int RESOURCE_DATA_SYNC_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceDataSyncAlreadyExistsException");
static const int INVALID_RESULT_ATTRIBUTE_HASH = HashingUtils::HashString("InvalidResultAttributeException");
static const int UNSUPPORTED_FEATURE_REQUIRED_HASH = HashingUtils::HashString("UnsupportedFeatureRequiredException");
static const int STATUS_UNCHANGED_HASH = HashingUtils::HashString("StatusUnchanged");
static const int OPS_ITEM_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OpsItemLimitExceededException");
static const int DUPLICATE_INSTANCE_ID_HASH = HashingUtils::HashString("DuplicateInstanceId");
static const int DUPLICATE_DOCUMENT_CONTENT_HASH = HashingUtils::HashString("DuplicateDocumentContent");
static const int INVALID_OUTPUT_FOLDER_HASH = HashingUtils::HashString("InvalidOutputFolder");
static const int TOO_MANY_UPDATES_HASH = HashingUtils::HashString("TooManyUpdates");
static const int INVALID_DOCUMENT_SCHEMA_VERSION_HASH = HashingUtils::HashString("InvalidDocumentSchemaVersion");
static const int INVALID_AUTOMATION_STATUS_UPDATE_HASH = HashingUtils::HashString("InvalidAutomationStatusUpdateException");
static const int INVALID_AUTOMATION_EXECUTION_PARAMETERS_HASH = HashingUtils::HashString("InvalidAutomationExecutionParametersException");
static const int ITEM_CONTENT_MISMATCH_HASH = HashingUtils::HashString("ItemContentMismatchException");
static const int PARAMETER_PATTERN_MISMATCH_HASH = HashingUtils::HashString("ParameterPatternMismatchException");
static const int INVALID_INSTANCE_INFORMATION_FILTER_VALUE_HASH = HashingUtils::HashString("InvalidInstanceInformationFilterValue");
static const int INVALID_COMMAND_ID_HASH = HashingUtils::HashString("InvalidCommandId");
static const int INVALID_TARGET_MAPS_HASH = HashingUtils::HashString("InvalidTargetMaps");
static const int INVOCATION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("InvocationDoesNotExist");
static const int TOTAL_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TotalSizeLimitExceededException");
static const int AUTOMATION_DEFINITION_NOT_FOUND_HASH = HashingUtils::HashString("AutomationDefinitionNotFoundException");
static const int CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CustomSchemaCountLimitExceededException");
static const int INVALID_ALLOWED_PATTERN_HASH = HashingUtils::HashString("InvalidAllowedPatternException");
static const int INVALID_ROLE_HASH = HashingUtils::HashString("InvalidRole");
static const int INVALID_PARAMETERS_HASH = HashingUtils::HashString("InvalidParameters");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsError");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int INVALID_ACTIVATION_HASH = HashingUtils::HashString("InvalidActivation");
static const int RESOURCE_DATA_SYNC_INVALID_CONFIGURATION_HASH = HashingUtils::HashString("ResourceDataSyncInvalidConfigurationException");
static const int INVALID_ASSOCIATION_HASH = HashingUtils::HashString("InvalidAssociation");
static const int HIERARCHY_TYPE_MISMATCH_HASH = HashingUtils::HashString("HierarchyTypeMismatchException");
static const int DOES_NOT_EXIST_HASH = HashingUtils::HashString("DoesNotExistException");
static const int INVALID_DOCUMENT_OPERATION_HASH = HashingUtils::HashString("InvalidDocumentOperation");
static const int OPS_METADATA_NOT_FOUND_HASH = HashingUtils::HashString("OpsMetadataNotFoundException");
static const int OPS_ITEM_NOT_FOUND_HASH = HashingUtils::HashString("OpsItemNotFoundException");
static const int INVALID_UPDATE_HASH = HashingUtils::HashString("InvalidUpdate");
static const int INVALID_FILTER_OPTION_HASH = HashingUtils::HashString("InvalidFilterOption");
static const int INVALID_ITEM_CONTENT_HASH = HashingUtils::HashString("InvalidItemContentException");
static const int TARGET_NOT_CONNECTED_HASH = HashingUtils::HashString("TargetNotConnected");
static const int DOCUMENT_ALREADY_EXISTS_HASH = HashingUtils::HashString("DocumentAlreadyExists");
static const int UNSUPPORTED_CALENDAR_HASH = HashingUtils::HashString("UnsupportedCalendarException");
static const int INVALID_DOCUMENT_VERSION_HASH = HashingUtils::HashString("InvalidDocumentVersion");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int INVALID_NOTIFICATION_CONFIG_HASH = HashingUtils::HashString("InvalidNotificationConfig");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTag");
static const int INVALID_SCHEDULE_HASH = HashingUtils::HashString("InvalidSchedule");
static const int RESOURCE_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("ResourcePolicyNotFoundException");
static const int INVALID_ACTIVATION_ID_HASH = HashingUtils::HashString("InvalidActivationId");
static const int RESOURCE_DATA_SYNC_CONFLICT_HASH = HashingUtils::HashString("ResourceDataSyncConflictException");
static const int OPS_METADATA_KEY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OpsMetadataKeyLimitExceededException");
static const int INVALID_FILTER_HASH = HashingUtils::HashString("InvalidFilter");
static const int OPS_ITEM_INVALID_PARAMETER_HASH = HashingUtils::HashString("OpsItemInvalidParameterException");
static const int INVALID_INVENTORY_GROUP_HASH = HashingUtils::HashString("InvalidInventoryGroupException");
static const int POLICIES_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PoliciesLimitExceededException");
static const int UNSUPPORTED_PARAMETER_TYPE_HASH = HashingUtils::HashString("UnsupportedParameterType");
static const int MAX_DOCUMENT_SIZE_EXCEEDED_HASH = HashingUtils::HashString("MaxDocumentSizeExceeded");
static const int INVALID_FILTER_KEY_HASH = HashingUtils::HashString("InvalidFilterKey");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatch");
static const int UNSUPPORTED_PLATFORM_TYPE_HASH = HashingUtils::HashString("UnsupportedPlatformType");
static const int SERVICE_SETTING_NOT_FOUND_HASH = HashingUtils::HashString("ServiceSettingNotFound");
static const int DOCUMENT_PERMISSION_LIMIT_HASH = HashingUtils::HashString("DocumentPermissionLimit");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == INVALID_OUTPUT_LOCATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OUTPUT_LOCATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_COUNT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PARAMETER_VERSION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_VERSION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_POLICY_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_POLICY_TYPE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_AGGREGATOR_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AGGREGATOR), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INVENTORY_REQUEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_REQUEST), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DUPLICATE_DOCUMENT_VERSION_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_DOCUMENT_VERSION_NAME), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_METADATA_INVALID_ARGUMENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_INVALID_ARGUMENT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_TYPE_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TYPE_NAME), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_INVENTORY_SCHEMA_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_INVENTORY_SCHEMA_VERSION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_ITEM_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_CONFLICT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ASSOCIATION_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ASSOCIATION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_OPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OPTION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_PROPERTY_FILTER_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_PROPERTY_FILTER_VALUE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PARAMETER_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SUB_TYPE_COUNT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::SUB_TYPE_COUNT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ASSOCIATION_VERSION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_VERSION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PERMISSION_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PERMISSION_TYPE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INCOMPATIBLE_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INCOMPATIBLE_POLICY), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ASSOCIATION_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ASSOCIATION_VERSION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_ITEM_RELATED_ITEM_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_RELATED_ITEM_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PARAMETER_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_TYPE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_POLICY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_POLICY_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_POLICY_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_POLICY_CONFLICT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PARAMETER_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == HIERARCHY_LEVEL_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::HIERARCHY_LEVEL_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DOCUMENT_VERSION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_VERSION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_FILTER_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_VALUE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_ITEM_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == MALFORMED_RESOURCE_POLICY_DOCUMENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::MALFORMED_RESOURCE_POLICY_DOCUMENT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DELETE_INVENTORY_PARAMETERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DELETE_INVENTORY_PARAMETERS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_METADATA_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == FEATURE_NOT_AVAILABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::FEATURE_NOT_AVAILABLE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PLUGIN_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PLUGIN_NAME), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_AUTOMATION_SIGNAL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_SIGNAL), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_POLICY_INVALID_PARAMETER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_POLICY_INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTOMATION_DEFINITION_NOT_APPROVED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_DEFINITION_NOT_APPROVED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTOMATION_EXECUTION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_EXECUTION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INVENTORY_ITEM_CONTEXT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_ITEM_CONTEXT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ASSOCIATION_EXECUTION_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_EXECUTION_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESOURCE_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESOURCE_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ASSOCIATED_INSTANCES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATED_INSTANCES), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_METADATA_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TARGET_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TARGET_IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_KEY_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_KEY_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ITEM_SIZE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ITEM_SIZE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_METADATA_TOO_MANY_UPDATES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_TOO_MANY_UPDATES), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESOURCE_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESOURCE_TYPE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_ITEM_RELATED_ITEM_ASSOCIATION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_RELATED_ITEM_ASSOCIATION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DOCUMENT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ASSOCIATION_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPERATING_SYSTEM_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_OPERATING_SYSTEM), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTOMATION_EXECUTION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_EXECUTION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DELETION_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DELETION_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TARGET), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_CONTENT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_INVENTORY_ITEM_CONTEXT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_INVENTORY_ITEM_CONTEXT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_POLICY_ATTRIBUTE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_POLICY_ATTRIBUTE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTOMATION_DEFINITION_VERSION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_DEFINITION_VERSION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PARAMETER_MAX_VERSION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_MAX_VERSION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_ITEM_ACCESS_DENIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_ACCESS_DENIED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTOMATION_STEP_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_STEP_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESULT_ATTRIBUTE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESULT_ATTRIBUTE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_FEATURE_REQUIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_FEATURE_REQUIRED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == STATUS_UNCHANGED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::STATUS_UNCHANGED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_ITEM_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DUPLICATE_INSTANCE_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_INSTANCE_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DUPLICATE_DOCUMENT_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_DOCUMENT_CONTENT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_OUTPUT_FOLDER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OUTPUT_FOLDER), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TOO_MANY_UPDATES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOO_MANY_UPDATES), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_SCHEMA_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_SCHEMA_VERSION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_AUTOMATION_STATUS_UPDATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_STATUS_UPDATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_AUTOMATION_EXECUTION_PARAMETERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_EXECUTION_PARAMETERS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ITEM_CONTENT_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ITEM_CONTENT_MISMATCH), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PARAMETER_PATTERN_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_PATTERN_MISMATCH), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_INFORMATION_FILTER_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_INFORMATION_FILTER_VALUE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_COMMAND_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_COMMAND_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_TARGET_MAPS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TARGET_MAPS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVOCATION_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVOCATION_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TOTAL_SIZE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOTAL_SIZE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTOMATION_DEFINITION_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_DEFINITION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ALLOWED_PATTERN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ALLOWED_PATTERN), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ROLE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PARAMETERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PARAMETERS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ACTIVATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ACTIVATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_INVALID_CONFIGURATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_INVALID_CONFIGURATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ASSOCIATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ASSOCIATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == HIERARCHY_TYPE_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::HIERARCHY_TYPE_MISMATCH), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_OPERATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_METADATA_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_ITEM_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_UPDATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_UPDATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_FILTER_OPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_OPTION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ITEM_CONTENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ITEM_CONTENT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TARGET_NOT_CONNECTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TARGET_NOT_CONNECTED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DOCUMENT_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_CALENDAR_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_CALENDAR), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DOCUMENT_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_VERSION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_NOTIFICATION_CONFIG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_NOTIFICATION_CONFIG), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TAG), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SCHEDULE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_SCHEDULE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_POLICY_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_POLICY_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ACTIVATION_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ACTIVATION_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_DATA_SYNC_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_CONFLICT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_METADATA_KEY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_METADATA_KEY_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == INVALID_FILTER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPS_ITEM_INVALID_PARAMETER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INVENTORY_GROUP_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_GROUP), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == POLICIES_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::POLICIES_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_PARAMETER_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_PARAMETER_TYPE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == MAX_DOCUMENT_SIZE_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::MAX_DOCUMENT_SIZE_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_FILTER_KEY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_KEY), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::IDEMPOTENT_PARAMETER_MISMATCH), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_PLATFORM_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_PLATFORM_TYPE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SERVICE_SETTING_NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::SERVICE_SETTING_NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DOCUMENT_PERMISSION_LIMIT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_PERMISSION_LIMIT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  return false;
}

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);
  AWSError<CoreErrors> error;
  if (GetErrorForNameHelper0(hashCode, error))
  {
    return error;
  }
  else if (GetErrorForNameHelper1(hashCode, error))
  {
    return error;
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSMErrorMapper
} // namespace SSM
} // namespace Aws
