// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_SIZE_HINT_EVENT_H_INCLUDED
 define UI_SIZE_HINT_EVENT_H_INCLUDED
 pragma once
 include "gfx/size.h"
 include "ui/event.h"
namespace ui {
class Widget;
class SizeHintEvent : public Event {
public:
  SizeHintEvent(Widget* source, const gfx::Size& fitIn);
  virtual ~SizeHintEvent();
  gfx::Size fitInSize() const;
  int fitInWidth() const;
  int fitInHeight() const;
  gfx::Size sizeHint() const;
  void setSizeHint(const gfx::Size& sz);
  void setSizeHint(int w, int h);

private:
  gfx::Size m_fitIn;
  gfx::Size m_sizeHint;
};
} // namespace ui
 endif
