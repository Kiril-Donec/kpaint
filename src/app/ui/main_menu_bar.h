// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_MAIN_MENU_BAR_H_INCLUDED
 define APP_UI_MAIN_MENU_BAR_H_INCLUDED
 pragma once
 include "obs/connection.h"
 include "ui/menu.h"
namespace app {
class MainMenuBar : public ui::MenuBar {
public:
  MainMenuBar();
  void reload();

private:
  obs::scoped_connection m_extKeys;
  obs::scoped_connection m_extScripts;
};
} // namespace app
 endif
