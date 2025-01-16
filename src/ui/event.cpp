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
 include "ui/event.h"
namespace ui {
Event::Event(Component* source) : m_source(source)
{
}
Event::~Event()
{
}
Component* Event::getSource()
{
  return m_source;
}
} // namespace ui
