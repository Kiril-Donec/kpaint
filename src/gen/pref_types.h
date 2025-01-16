// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Code Generator
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef GEN_PREF_CLASS_H_INCLUDED
 define GEN_PREF_CLASS_H_INCLUDED
 pragma once
 include "tinyxml2.h"
 include <string>
void gen_pref_header(tinyxml2::XMLDocument* doc, const std::string& inputFn);
void gen_pref_impl(tinyxml2::XMLDocument* doc, const std::string& inputFn);
 endif
