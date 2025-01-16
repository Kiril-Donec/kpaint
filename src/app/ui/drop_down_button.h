// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_DROP_DOWN_BUTTON_H_INCLUDED
 define APP_UI_DROP_DOWN_BUTTON_H_INCLUDED
 pragma once
 include "obs/signal.h"
 include "ui/box.h"
namespace ui {
class Button;
class Event;
} // namespace ui
namespace app {
class DropDownButton : public ui::HBox {
public:
  DropDownButton(const char* text);
  ui::Button* mainButton() { return m_button; }
  ui::Button* dropDown() { return m_dropDown; }
  obs::signal<void()> Click;
  obs::signal<void()> DropDownClick;

protected:
  void onButtonClick();
  void onDropDownButtonClick();

private:
  ui::Button* m_button;
  ui::Button* m_dropDown;
};
} // namespace app
 endif
