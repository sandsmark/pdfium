// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "xfa/fxfa/parser/cxfa_locale.h"

namespace {

const CXFA_Node::PropertyData kPropertyData[] = {
    {XFA_Element::DatePatterns, 1, 0},    {XFA_Element::CalendarSymbols, 1, 0},
    {XFA_Element::CurrencySymbols, 1, 0}, {XFA_Element::Typefaces, 1, 0},
    {XFA_Element::DateTimeSymbols, 1, 0}, {XFA_Element::NumberPatterns, 1, 0},
    {XFA_Element::NumberSymbols, 1, 0},   {XFA_Element::TimePatterns, 1, 0},
    {XFA_Element::Unknown, 0, 0}};
const XFA_Attribute kAttributeData[] = {
    XFA_Attribute::Name, XFA_Attribute::Desc, XFA_Attribute::Lock,
    XFA_Attribute::Unknown};

constexpr wchar_t kName[] = L"locale";

}  // namespace

CXFA_Locale::CXFA_Locale(CXFA_Document* doc, XFA_XDPPACKET packet)
    : CXFA_Node(doc,
                packet,
                (XFA_XDPPACKET_Config | XFA_XDPPACKET_LocaleSet),
                XFA_ObjectType::Node,
                XFA_Element::Locale,
                kPropertyData,
                kAttributeData,
                kName) {}

CXFA_Locale::~CXFA_Locale() {}