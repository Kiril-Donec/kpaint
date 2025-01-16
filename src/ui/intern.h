// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_INTERN_H_INCLUDED
 define UI_INTERN_H_INCLUDED
 pragma once
 include "gfx/color.h"
 include "ui/base.h"
namespace os {
class Font;
}
namespace ui {
class Graphics;
class Widget;
class Window;
 intern.cpp
namespace details {
void initWidgets();
void exitWidgets();
void addWidget(Widget* widget);
void removeWidget(Widget* widget);
void reinitThemeForAllWidgets();
int old_guiscale();
} // namespace details
} // namespace ui
 endif
