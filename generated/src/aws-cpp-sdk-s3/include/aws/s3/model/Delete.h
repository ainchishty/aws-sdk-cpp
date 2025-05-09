﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/ObjectIdentifier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Container for the objects to delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Delete">AWS API
   * Reference</a></p>
   */
  class Delete
  {
  public:
    AWS_S3_API Delete() = default;
    AWS_S3_API Delete(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Delete& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The object to delete.</p>  <p> <b>Directory buckets</b> - For directory
     * buckets, an object that's composed entirely of whitespace characters is not
     * supported by the <code>DeleteObjects</code> API operation. The request will
     * receive a <code>400 Bad Request</code> error and none of the objects in the
     * request will be deleted.</p> 
     */
    inline const Aws::Vector<ObjectIdentifier>& GetObjects() const { return m_objects; }
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }
    template<typename ObjectsT = Aws::Vector<ObjectIdentifier>>
    void SetObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects = std::forward<ObjectsT>(value); }
    template<typename ObjectsT = Aws::Vector<ObjectIdentifier>>
    Delete& WithObjects(ObjectsT&& value) { SetObjects(std::forward<ObjectsT>(value)); return *this;}
    template<typename ObjectsT = ObjectIdentifier>
    Delete& AddObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects.emplace_back(std::forward<ObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Element to enable quiet mode for the request. When you add this element, you
     * must set its value to <code>true</code>.</p>
     */
    inline bool GetQuiet() const { return m_quiet; }
    inline bool QuietHasBeenSet() const { return m_quietHasBeenSet; }
    inline void SetQuiet(bool value) { m_quietHasBeenSet = true; m_quiet = value; }
    inline Delete& WithQuiet(bool value) { SetQuiet(value); return *this;}
    ///@}
  private:

    Aws::Vector<ObjectIdentifier> m_objects;
    bool m_objectsHasBeenSet = false;

    bool m_quiet{false};
    bool m_quietHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
