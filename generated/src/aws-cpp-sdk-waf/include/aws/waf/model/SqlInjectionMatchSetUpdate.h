﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/SqlInjectionMatchTuple.h>
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
namespace WAF
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Specifies the part of a
   * web request that you want to inspect for snippets of malicious SQL code and
   * indicates whether you want to add the specification to a
   * <a>SqlInjectionMatchSet</a> or delete it from a
   * <code>SqlInjectionMatchSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/SqlInjectionMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class SqlInjectionMatchSetUpdate
  {
  public:
    AWS_WAF_API SqlInjectionMatchSetUpdate() = default;
    AWS_WAF_API SqlInjectionMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API SqlInjectionMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify <code>INSERT</code> to add a <a>SqlInjectionMatchSetUpdate</a> to a
     * <a>SqlInjectionMatchSet</a>. Use <code>DELETE</code> to remove a
     * <code>SqlInjectionMatchSetUpdate</code> from a
     * <code>SqlInjectionMatchSet</code>.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline SqlInjectionMatchSetUpdate& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * snippets of malicious SQL code and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline const SqlInjectionMatchTuple& GetSqlInjectionMatchTuple() const { return m_sqlInjectionMatchTuple; }
    inline bool SqlInjectionMatchTupleHasBeenSet() const { return m_sqlInjectionMatchTupleHasBeenSet; }
    template<typename SqlInjectionMatchTupleT = SqlInjectionMatchTuple>
    void SetSqlInjectionMatchTuple(SqlInjectionMatchTupleT&& value) { m_sqlInjectionMatchTupleHasBeenSet = true; m_sqlInjectionMatchTuple = std::forward<SqlInjectionMatchTupleT>(value); }
    template<typename SqlInjectionMatchTupleT = SqlInjectionMatchTuple>
    SqlInjectionMatchSetUpdate& WithSqlInjectionMatchTuple(SqlInjectionMatchTupleT&& value) { SetSqlInjectionMatchTuple(std::forward<SqlInjectionMatchTupleT>(value)); return *this;}
    ///@}
  private:

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    SqlInjectionMatchTuple m_sqlInjectionMatchTuple;
    bool m_sqlInjectionMatchTupleHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
