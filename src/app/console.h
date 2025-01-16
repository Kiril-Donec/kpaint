// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CONSOLE_H_INCLUDED
 define APP_CONSOLE_H_INCLUDED
 pragma once
 include <exception>
namespace app {
class Context;
class Console {
public:
  Console(Context* ctx = nullptr);
  ~Console();
  void printf(const char* format, ...);
  static void showException(const std::exception& e);
  static void notifyNewDisplayConfiguration();

private:
  static bool isUIAvailable();
  bool m_withUI;
  class ConsoleWindow;
  static ConsoleWindow* m_console;
};
} // namespace app
 endif
