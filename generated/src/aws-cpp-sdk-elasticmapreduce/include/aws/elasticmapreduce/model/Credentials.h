﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/UsernamePassword.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The credentials that you can use to connect to cluster endpoints. Credentials
   * consist of a username and a password.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Credentials">AWS
   * API Reference</a></p>
   */
  class Credentials
  {
  public:
    AWS_EMR_API Credentials() = default;
    AWS_EMR_API Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The username and password that you use to connect to cluster endpoints.</p>
     */
    inline const UsernamePassword& GetUsernamePassword() const { return m_usernamePassword; }
    inline bool UsernamePasswordHasBeenSet() const { return m_usernamePasswordHasBeenSet; }
    template<typename UsernamePasswordT = UsernamePassword>
    void SetUsernamePassword(UsernamePasswordT&& value) { m_usernamePasswordHasBeenSet = true; m_usernamePassword = std::forward<UsernamePasswordT>(value); }
    template<typename UsernamePasswordT = UsernamePassword>
    Credentials& WithUsernamePassword(UsernamePasswordT&& value) { SetUsernamePassword(std::forward<UsernamePasswordT>(value)); return *this;}
    ///@}
  private:

    UsernamePassword m_usernamePassword;
    bool m_usernamePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
