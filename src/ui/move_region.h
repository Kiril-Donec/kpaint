// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_MOVE_REGION_H_INCLUDED
 define UI_MOVE_REGION_H_INCLUDED
 pragma once
 include "gfx/region.h"
namespace ui {
class Display;
void move_region(Display* display, const gfx::Region& region, int dx, int dy);
} // namespace ui
 endif
