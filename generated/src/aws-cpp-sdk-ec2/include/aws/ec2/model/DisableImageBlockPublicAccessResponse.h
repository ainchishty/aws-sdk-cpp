﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ImageBlockPublicAccessDisabledState.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DisableImageBlockPublicAccessResponse
  {
  public:
    AWS_EC2_API DisableImageBlockPublicAccessResponse() = default;
    AWS_EC2_API DisableImageBlockPublicAccessResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableImageBlockPublicAccessResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>unblocked</code> if the request succeeds; otherwise, it returns
     * an error.</p>
     */
    inline ImageBlockPublicAccessDisabledState GetImageBlockPublicAccessState() const { return m_imageBlockPublicAccessState; }
    inline void SetImageBlockPublicAccessState(ImageBlockPublicAccessDisabledState value) { m_imageBlockPublicAccessStateHasBeenSet = true; m_imageBlockPublicAccessState = value; }
    inline DisableImageBlockPublicAccessResponse& WithImageBlockPublicAccessState(ImageBlockPublicAccessDisabledState value) { SetImageBlockPublicAccessState(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisableImageBlockPublicAccessResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ImageBlockPublicAccessDisabledState m_imageBlockPublicAccessState{ImageBlockPublicAccessDisabledState::NOT_SET};
    bool m_imageBlockPublicAccessStateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
