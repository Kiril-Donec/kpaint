// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_FONT_POPUP_H_INCLUDED
 define APP_UI_FONT_POPUP_H_INCLUDED
 pragma once
 include "ui/listbox.h"
 include "ui/popup_window.h"
namespace ui {
class Button;
class View;
} // namespace ui
namespace app {
namespace gen {
class FontPopup;
}
class FontPopup : public ui::PopupWindow {
public:
  FontPopup();
  void showPopup(ui::Display* display, const gfx::Rect& buttonBounds);
  obs::signal<void(const std::string&)> Load;

protected:
  void onSearchChange();
  void onChangeFont();
  void onLoadFont();

private:
  gen::FontPopup* m_popup;
  ui::ListBox m_listBox;
};
} // namespace app
 endif
