// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_FIND_WIDGET_H_INCLUDED
 define APP_FIND_WIDGET_H_INCLUDED
 pragma once
 include "app/widget_not_found.h"
 include "ui/widget.h"
namespace app {
template<class T>
inline T* find_widget(ui::Widget* parent, const char* childId)
{
  T* child = parent->findChildT<T>(childId);
  if (!child)
    throw WidgetNotFound(childId);
  return child;
}
class finder {
public:
  finder(ui::Widget* parent) : m_parent(parent) {}
  finder& operator>>(const char* id)
  {
    m_lastId = id;
    return *this;
  }
  finder& operator>>(const std::string& id)
  {
    m_lastId = id;
    return *this;
  }
  template<typename T>
  finder& operator>>(T*& child)
  {
    child = app::find_widget<T>(m_parent, m_lastId.c_str());
    return *this;
  }

private:
  ui::Widget* m_parent;
  std::string m_lastId;
};
} // namespace app
 endif
