// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_EVENT_H_INCLUDED
 define UI_EVENT_H_INCLUDED
 pragma once
namespace ui {
class Component;
 Base class for every kind of event.
class Event {
public:
  // Creates a new event specifying that it was generated from the
  // source component.
  Event(Component* source);
  virtual ~Event();
  // Returns the component which generated the event.
  Component* getSource();

private:
  // The component which generates the event.
  Component* m_source;
};
} // namespace ui
 endif
