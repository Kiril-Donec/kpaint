// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_LISTITEM_H_INCLUDED
 define UI_LISTITEM_H_INCLUDED
 pragma once
 include "ui/widget.h"
namespace ui {
class ListItem : public Widget {
public:
  ListItem(const std::string& text = std::string());
  const std::string& getValue() const { return m_value; }
  void setValue(const std::string& value) { m_value = value; }

protected:
  bool onProcessMessage(Message* msg) override;
  void onResize(ResizeEvent& ev) override;
  void onSizeHint(SizeHintEvent& ev) override;
  void onInitTheme(InitThemeEvent& ev) override;
  void onSetText() override;

private:
  std::string m_value;
  int m_textLength = -1;
};
} // namespace ui
 endif
