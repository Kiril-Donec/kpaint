// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_LABEL_H_INCLUDED
 define UI_LABEL_H_INCLUDED
 pragma once
 include "gfx/color.h"
 include "ui/widget.h"
namespace ui {
class Label : public Widget {
public:
  Label(const std::string& text);
};
} // namespace ui
 endif
