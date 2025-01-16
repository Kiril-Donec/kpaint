// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_CLOSE_EVENT_H_INCLUDED
 define UI_CLOSE_EVENT_H_INCLUDED
 pragma once
 include "ui/event.h"
namespace ui {
class CloseEvent : public Event {
public:
  CloseEvent(Component* source) : Event(source), m_canceled(false) {}
  void cancel() { m_canceled = true; }
  bool canceled() const { return m_canceled; }

private:
  bool m_canceled;
};
} // namespace ui
// endif // UI_CLOSE_EVENT_H_INCLUDED
