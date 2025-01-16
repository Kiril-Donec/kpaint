// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_PANEL_H_INCLUDED
 define UI_PANEL_H_INCLUDED
 pragma once
 include "ui/box.h"
namespace ui {
class Panel : public VBox {
public:
  Panel();
  void showChild(Widget* widget);
  void showAllChildren();

protected:
  virtual void onResize(ResizeEvent& ev) override;
  virtual void onSizeHint(SizeHintEvent& ev) override;

private:
  bool m_multiple;
};
} // namespace ui
 endif
