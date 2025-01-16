// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_SHADE_H_INCLUDED
 define APP_SHADE_H_INCLUDED
 pragma once
 include "app/color.h"
 include <vector>
namespace app {
typedef std::vector<app::Color> Shade;
Shade shade_from_string(const std::string& str);
std::string shade_to_string(const Shade& shade);
} // namespace app
 endif
