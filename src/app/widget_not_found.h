// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_WIDGET_NOT_FOUND_H_INCLUDED
 define APP_WIDGET_NOT_FOUND_H_INCLUDED
 pragma once
 include <stdexcept>
 include <string>
namespace app {
class WidgetNotFound : public std::runtime_error {
public:
  WidgetNotFound(const std::string& widgetId)
    : std::runtime_error("A data file is corrupted.\nPlease reinstall the program\n\n"
                         "Details: Widget not found: " +
                         widgetId)
  {
  }
};
} // namespace app
 endif
