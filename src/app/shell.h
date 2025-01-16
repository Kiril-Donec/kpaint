// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_SHELL_H_INCLUDED
 define APP_SHELL_H_INCLUDED
 pragma once
 ifndef ENABLE_SCRIPTING
  #error ENABLE_SCRIPTING must be defined
 endif
namespace app {
namespace script {
class Engine;
}
class Shell {
public:
  Shell();
  ~Shell();
  void run(script::Engine& engine);
};
} // namespace app
 endif
