// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_APP_STATE_H_INCLUDED
 define UI_APP_STATE_H_INCLUDED
 pragma once
namespace ui {
enum AppState {
  kNormal,
  kClosing,
  kClosingWithException,
};
void set_app_state(AppState state);
AppState get_app_state();
bool is_app_state_closing();
} // namespace ui
 endif
