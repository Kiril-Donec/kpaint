// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_WIDGETS_LIST_H_INCLUDED
 define UI_WIDGETS_LIST_H_INCLUDED
 pragma once
 include <vector>
 define UI_FIRST_WIDGET(list_name) ((list_name).empty() ? nullptr : (list_name).front())
namespace ui {
class Widget;
typedef std::vector<Widget*> WidgetsList;
} // namespace ui
 endif
