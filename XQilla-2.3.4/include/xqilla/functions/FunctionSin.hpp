/*
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

#ifndef _FUNCTIONSIN_HPP
#define _FUNCTIONSIN_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/functions/EXSLTMathFunction.hpp>

class XQILLA_API FunctionSin : public EXSLTMathFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionSin(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
};

#endif
