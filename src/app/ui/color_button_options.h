// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_COLOR_BUTTON_OPTIONS_H_INCLUDED
 define APP_UI_COLOR_BUTTON_OPTIONS_H_INCLUDED
 pragma once
namespace app {
struct ColorButtonOptions {
  bool canPinSelector;
  bool showSimpleColors;
  bool showIndexTab;
  ColorButtonOptions()
  {
    // Default values for regular color buttons in dialogs like
    // "Replace Color"
    canPinSelector = false;
    showSimpleColors = false;
    showIndexTab = true;
  }
};
struct ColorBarButtonsOptions : public ColorButtonOptions {
  ColorBarButtonsOptions()
  {
    // Default values for color buttons inside the color bar
    canPinSelector = true;
    showSimpleColors = false;
    showIndexTab = false;
  }
};
} // namespace app
 endif
