// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_PAINT_H_INCLUDED
 define UI_PAINT_H_INCLUDED
 pragma once
 include "gfx/color.h"
 include "os/paint.h"
namespace ui {
using os::BlendMode;
using os::Paint;
void set_checkered_paint_mode(Paint& paint, const int param, const gfx::Color a, const gfx::Color b);
} // namespace ui
 endif
