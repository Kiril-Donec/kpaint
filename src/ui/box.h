// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_BOX_H_INCLUDED
 define UI_BOX_H_INCLUDED
 pragma once
 include "ui/widget.h"
namespace ui {
class Box : public Widget {
public:
  Box(int align);

protected:
  // Events
  void onSizeHint(SizeHintEvent& ev) override;
  void onResize(ResizeEvent& ev) override;
};
class VBox : public Box {
public:
  VBox() : Box(VERTICAL) {}
};
class HBox : public Box {
public:
  HBox() : Box(HORIZONTAL) {}
};
class BoxFiller : public Box {
public:
  BoxFiller() : Box(HORIZONTAL) { this->setExpansive(true); }
};
} // namespace ui
 endif
