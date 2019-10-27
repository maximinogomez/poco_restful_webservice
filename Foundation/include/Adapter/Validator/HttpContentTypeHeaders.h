/*
 * (C) Copyright 2019 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef Validator_HttpContentTypeHeaders_INCLUDED
#define Validator_HttpContentTypeHeaders_INCLUDED

#include "Poco/Net/HTTPRequest.h"
#include "Foundation/Validator/ValidatorInterface.h"

namespace Validator {


    class HttpContentTypeHeaders : public Foundation::Validator::ValidatorInterface
    {
    public:
        explicit HttpContentTypeHeaders(Poco::Net::HTTPRequest &);
        bool valid() override;
        std::string message() const override;

    private:
        Poco::Net::HTTPRequest & _request;
        const std::string HTTP_CONTENT_TYPE;

    };


}

#endif
