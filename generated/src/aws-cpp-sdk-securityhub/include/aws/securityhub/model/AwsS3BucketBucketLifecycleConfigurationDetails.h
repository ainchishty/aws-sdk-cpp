﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The lifecycle configuration for the objects in the S3 bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lifecycle rules.</p>
     */
    inline const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesDetails>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesDetails>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesDetails>>
    AwsS3BucketBucketLifecycleConfigurationDetails& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = AwsS3BucketBucketLifecycleConfigurationRulesDetails>
    AwsS3BucketBucketLifecycleConfigurationDetails& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesDetails> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
