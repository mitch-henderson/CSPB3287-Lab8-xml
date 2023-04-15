/*
 * Copyright (c) 2001, 2008,
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004, 2018 Oracle and/or its affiliates. All rights reserved.
 *     
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
 */

#ifndef _TYPEERROREXCEPTION_HPP
#define _TYPEERROREXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

/** 
 * This means that an error was found while manipulating typed data
 */

class XQILLA_API TypeErrorException : public XQException
{
public:
  TypeErrorException(const XMLCh* const functionName, const XMLCh* const reason, const LocationInfo *info, const char *file, int line)
    : XQException(X("TypeErrorException"), functionName, reason, info, file, line) {};
};

#endif // _TYPEERROREXCEPTION_HPP
