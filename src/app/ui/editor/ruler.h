// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_EDITOR_RULER_H_INCLUDED
 define APP_UI_EDITOR_RULER_H_INCLUDED
 pragma once
 include "ui/base.h"
namespace app {
 A ruler inside the editor. It is used by SelectBoxState to show
 rulers that can be dragged by the user.
class Ruler {
public:
  Ruler() : m_align(0), m_position(0) {}
  Ruler(const int align, const int position) : m_align(align), m_position(position) {}
  int align() const { return m_align; }
  int position() const { return m_position; }
  void setPosition(const int position) { m_position = position; }

private:
  int m_align;
  int m_position;
};
} // namespace app
// endif // APP_UI_EDITOR_RULER_H_INCLUDED
