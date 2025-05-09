﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/DeploymentCommandName.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Used to specify a stack or deployment command.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeploymentCommand">AWS
   * API Reference</a></p>
   */
  class DeploymentCommand
  {
  public:
    AWS_OPSWORKS_API DeploymentCommand() = default;
    AWS_OPSWORKS_API DeploymentCommand(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API DeploymentCommand& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the operation. You can specify only one command.</p> <p>For stacks,
     * the following commands are available:</p> <ul> <li> <p>
     * <code>execute_recipes</code>: Execute one or more recipes. To specify the
     * recipes, set an <code>Args</code> parameter named <code>recipes</code> to the
     * list of recipes to be executed. For example, to execute
     * <code>phpapp::appsetup</code>, set <code>Args</code> to
     * <code>{"recipes":["phpapp::appsetup"]}</code>.</p> </li> <li> <p>
     * <code>install_dependencies</code>: Install the stack's dependencies.</p> </li>
     * <li> <p> <code>update_custom_cookbooks</code>: Update the stack's custom
     * cookbooks.</p> </li> <li> <p> <code>update_dependencies</code>: Update the
     * stack's dependencies.</p> </li> </ul>  <p>The update_dependencies and
     * install_dependencies commands are supported only for Linux instances. You can
     * run the commands successfully on Windows instances, but they do nothing.</p>
     *  <p>For apps, the following commands are available:</p> <ul> <li> <p>
     * <code>deploy</code>: Deploy an app. Ruby on Rails apps have an optional
     * <code>Args</code> parameter named <code>migrate</code>. Set <code>Args</code> to
     * {"migrate":["true"]} to migrate the database. The default setting is
     * {"migrate":["false"]}.</p> </li> <li> <p> <code>rollback</code> Roll the app
     * back to the previous version. When you update an app, OpsWorks Stacks stores the
     * previous version, up to a maximum of five versions. You can use this command to
     * roll an app back as many as four versions.</p> </li> <li> <p>
     * <code>start</code>: Start the app's web or application server.</p> </li> <li>
     * <p> <code>stop</code>: Stop the app's web or application server.</p> </li> <li>
     * <p> <code>restart</code>: Restart the app's web or application server.</p> </li>
     * <li> <p> <code>undeploy</code>: Undeploy the app.</p> </li> </ul>
     */
    inline DeploymentCommandName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DeploymentCommandName value) { m_nameHasBeenSet = true; m_name = value; }
    inline DeploymentCommand& WithName(DeploymentCommandName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arguments of those commands that take arguments. It should be set to a
     * JSON object with the following format:</p> <p> <code>{"arg_name1" : ["value1",
     * "value2", ...], "arg_name2" : ["value1", "value2", ...], ...}</code> </p> <p>The
     * <code>update_dependencies</code> command takes two arguments:</p> <ul> <li> <p>
     * <code>upgrade_os_to</code> - Specifies the Amazon Linux version that you want
     * instances to run, such as <code>Amazon Linux 2</code>. You must also set the
     * <code>allow_reboot</code> argument to true.</p> </li> <li> <p>
     * <code>allow_reboot</code> - Specifies whether to allow OpsWorks Stacks to reboot
     * the instances if necessary, after installing the updates. This argument can be
     * set to either <code>true</code> or <code>false</code>. The default value is
     * <code>false</code>.</p> </li> </ul> <p>For example, to upgrade an instance to
     * Amazon Linux 2018.03, set <code>Args</code> to the following.</p> <p> <code> {
     * "upgrade_os_to":["Amazon Linux 2018.03"], "allow_reboot":["true"] } </code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetArgs() const { return m_args; }
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }
    template<typename ArgsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args = std::forward<ArgsT>(value); }
    template<typename ArgsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    DeploymentCommand& WithArgs(ArgsT&& value) { SetArgs(std::forward<ArgsT>(value)); return *this;}
    template<typename ArgsKeyT = Aws::String, typename ArgsValueT = Aws::Vector<Aws::String>>
    DeploymentCommand& AddArgs(ArgsKeyT&& key, ArgsValueT&& value) {
      m_argsHasBeenSet = true; m_args.emplace(std::forward<ArgsKeyT>(key), std::forward<ArgsValueT>(value)); return *this;
    }
    ///@}
  private:

    DeploymentCommandName m_name{DeploymentCommandName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_args;
    bool m_argsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
