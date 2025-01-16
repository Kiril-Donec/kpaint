// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_MODULES_H_INCLUDED
 define APP_MODULES_H_INCLUDED
 pragma once
 include "ui/base.h"
 define REQUIRE_INTERFACE 1
namespace app {
/**
 * Class to install and uninstall old modules.
 *
 * Legacy modules are programmed in C code and should be refactored to
 * C++ classes.
 */
class LegacyModules {
public:
  LegacyModules(int requirements);
  ~LegacyModules();
};
} // namespace app
 endif
