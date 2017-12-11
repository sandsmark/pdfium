// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "fxjs/xfa/cjx_wsdlconnection.h"

#include <vector>

#include "fxjs/cfxjse_value.h"
#include "fxjs/js_resources.h"
#include "xfa/fxfa/parser/cxfa_wsdlconnection.h"

const CJX_MethodSpec CJX_WsdlConnection::MethodSpecs[] = {
    {"execute", execute_static},
    {"", nullptr}};

CJX_WsdlConnection::CJX_WsdlConnection(CXFA_WsdlConnection* connection)
    : CJX_Node(connection) {
  DefineMethods(MethodSpecs);
}

CJX_WsdlConnection::~CJX_WsdlConnection() {}

CJS_Return CJX_WsdlConnection::execute(
    CJS_V8* runtime,
    const std::vector<v8::Local<v8::Value>>& params) {
  if (!params.empty() && params.size() != 1)
    return CJS_Return(JSGetStringFromID(JSMessage::kParamError));
  return CJS_Return(runtime->NewBoolean(false));
}