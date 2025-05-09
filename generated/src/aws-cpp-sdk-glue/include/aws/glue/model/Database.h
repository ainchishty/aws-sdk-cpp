﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DatabaseIdentifier.h>
#include <aws/glue/model/FederatedDatabase.h>
#include <aws/glue/model/PrincipalPermissions.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The <code>Database</code> object represents a logical grouping of tables that
   * might reside in a Hive metastore or an RDBMS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Database">AWS API
   * Reference</a></p>
   */
  class Database
  {
  public:
    AWS_GLUE_API Database() = default;
    AWS_GLUE_API Database(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Database& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Database& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the database.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Database& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    Database& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    Database& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    Database& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time at which the metadata database was created in the catalog.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Database& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates a set of default permissions on the table for principals. Used by
     * Lake Formation. Not used in the normal course of Glue operations.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const { return m_createTableDefaultPermissions; }
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }
    template<typename CreateTableDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    void SetCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::forward<CreateTableDefaultPermissionsT>(value); }
    template<typename CreateTableDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    Database& WithCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { SetCreateTableDefaultPermissions(std::forward<CreateTableDefaultPermissionsT>(value)); return *this;}
    template<typename CreateTableDefaultPermissionsT = PrincipalPermissions>
    Database& AddCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.emplace_back(std::forward<CreateTableDefaultPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>DatabaseIdentifier</code> structure that describes a target database
     * for resource linking.</p>
     */
    inline const DatabaseIdentifier& GetTargetDatabase() const { return m_targetDatabase; }
    inline bool TargetDatabaseHasBeenSet() const { return m_targetDatabaseHasBeenSet; }
    template<typename TargetDatabaseT = DatabaseIdentifier>
    void SetTargetDatabase(TargetDatabaseT&& value) { m_targetDatabaseHasBeenSet = true; m_targetDatabase = std::forward<TargetDatabaseT>(value); }
    template<typename TargetDatabaseT = DatabaseIdentifier>
    Database& WithTargetDatabase(TargetDatabaseT&& value) { SetTargetDatabase(std::forward<TargetDatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    Database& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FederatedDatabase</code> structure that references an entity outside
     * the Glue Data Catalog.</p>
     */
    inline const FederatedDatabase& GetFederatedDatabase() const { return m_federatedDatabase; }
    inline bool FederatedDatabaseHasBeenSet() const { return m_federatedDatabaseHasBeenSet; }
    template<typename FederatedDatabaseT = FederatedDatabase>
    void SetFederatedDatabase(FederatedDatabaseT&& value) { m_federatedDatabaseHasBeenSet = true; m_federatedDatabase = std::forward<FederatedDatabaseT>(value); }
    template<typename FederatedDatabaseT = FederatedDatabase>
    Database& WithFederatedDatabase(FederatedDatabaseT&& value) { SetFederatedDatabase(std::forward<FederatedDatabaseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet = false;

    DatabaseIdentifier m_targetDatabase;
    bool m_targetDatabaseHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    FederatedDatabase m_federatedDatabase;
    bool m_federatedDatabaseHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
