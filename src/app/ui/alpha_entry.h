// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef APP_UI_ALPHA_ENTRY_H_INCLUDED
 define APP_UI_ALPHA_ENTRY_H_INCLUDED
 pragma once
 include "app/ui/alpha_slider.h"
 include "ui/int_entry.h"
 include <memory>
using namespace ui;
namespace ui {
class CloseEvent;
class PopupWindow;
} // namespace ui
namespace app {
class AlphaEntry : public IntEntry {
public:
  AlphaEntry(AlphaSlider::Type type);
  int getValue() const override;
  void setValue(int value) override;
};
} // namespace app
 endif
