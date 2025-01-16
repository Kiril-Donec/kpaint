// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_LOAD_LAYOUT_EVENT_H_INCLUDED
 define UI_LOAD_LAYOUT_EVENT_H_INCLUDED
 pragma once
 include "ui/event.h"
 include <iosfwd>
namespace ui {
class Widget;
class LoadLayoutEvent : public Event {
public:
  LoadLayoutEvent(Widget* source, std::istream& stream) : Event(source), m_stream(stream) {}
  std::istream& stream() { return m_stream; }

private:
  std::istream& m_stream;
};
} // namespace ui
 endif
