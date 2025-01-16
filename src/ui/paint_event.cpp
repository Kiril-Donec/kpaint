// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "ui/paint_event.h"
 include "ui/widget.h"
namespace ui {
PaintEvent::PaintEvent(Widget* source, Graphics* graphics)
  : Event(source)
  , m_graphics(graphics)
  , m_painted(false)
  , m_transparentBg(false)
{
}
PaintEvent::~PaintEvent()
{
}
Graphics* PaintEvent::graphics()
{
  // If someone requested the graphics pointer, it means that this
  // "someone" has painted the widget.
  m_painted = true;
  return m_graphics;
}
} // namespace ui
