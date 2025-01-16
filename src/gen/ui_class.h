// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Code Generator
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef GEN_UI_CLASS_H_INCLUDED
 define GEN_UI_CLASS_H_INCLUDED
 pragma once
 include "tinyxml2.h"
 include <string>
void gen_ui_class(tinyxml2::XMLDocument* doc,
                  const std::string& inputFn,
                  const std::string& widgetId);
 endif
