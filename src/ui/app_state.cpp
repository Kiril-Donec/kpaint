// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "ui/app_state.h"
 include "ui/manager.h"
namespace ui {
AppState g_state = AppState::kNormal;
void set_app_state(AppState state)
{
  g_state = state;
  if (state == AppState::kClosingWithException) {
    if (auto man = ui::Manager::getDefault())
      man->_closingAppWithException();
  }
}
AppState get_app_state()
{
  return g_state;
}
bool is_app_state_closing()
{
  return (g_state == AppState::kClosing || g_state == AppState::kClosingWithException);
}
} // namespace ui
