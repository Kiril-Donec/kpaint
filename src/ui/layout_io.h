// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_LAYOUT_IO_H_INCLUDED
 define UI_LAYOUT_IO_H_INCLUDED
 pragma once
 include <string>
namespace ui {
class Widget;
class LayoutIO {
public:
  virtual ~LayoutIO() {}
  virtual std::string loadLayout(Widget* widget) = 0;
  virtual void saveLayout(Widget* widget, const std::string& str) = 0;
};
} // namespace ui
 endif
