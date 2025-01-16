// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_VIEWPORT_H_INCLUDED
 define UI_VIEWPORT_H_INCLUDED
 pragma once
 include "ui/widget.h"
namespace ui {
class Viewport : public Widget {
public:
  Viewport();
  gfx::Size calculateNeededSize();

protected:
  // Events
  void onResize(ResizeEvent& ev) override;
  void onSizeHint(SizeHintEvent& ev) override;
  void onPaint(PaintEvent& ev) override;
};
} // namespace ui
 endif
