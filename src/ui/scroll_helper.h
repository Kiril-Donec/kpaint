// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_SCROLL_HELPER_H_INCLUDED
 define UI_SCROLL_HELPER_H_INCLUDED
 pragma once
 include "gfx/rect.h"
 include "gfx/size.h"
namespace ui {
class ScrollBar;
void setup_scrollbars(const gfx::Size& scrollableSize,
                      gfx::Rect& viewportArea,
                      Widget& parent,
                      ScrollBar& hbar,
                      ScrollBar& vbar);
} // namespace ui
 endif
