// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_PAINT_EVENT_H_INCLUDED
 define UI_PAINT_EVENT_H_INCLUDED
 pragma once
 include "ui/event.h"
namespace ui {
class Graphics;
class Widget;
class PaintEvent : public Event {
public:
  PaintEvent(Widget* source, Graphics* graphics);
  virtual ~PaintEvent();
  Graphics* graphics();
  bool isPainted() const { return m_painted; }
  bool isTransparentBg() const { return m_transparentBg; }
  void setTransparentBg(bool state) { m_transparentBg = state; }

private:
  Graphics* m_graphics;
  bool m_painted;
  bool m_transparentBg;
};
} // namespace ui
 endif
