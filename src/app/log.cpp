// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "app/app.h"
 include "app/log.h"
 include "app/resource_finder.h"
 include "base/log.h"
 include "fmt/format.h"
 include "ver/info.h"
namespace app {
LoggerModule::LoggerModule(bool createLogInDesktop)
{
  app::ResourceFinder rf(false);
  if (createLogInDesktop) {
    rf.includeDesktopDir(
      fmt::format("{}-v{}-DebugOutput.txt", get_app_name(), get_app_version()).c_str());
  }
  else {
    rf.includeUserDir(fmt::format("{}.log", get_app_name()).c_str());
  }
  auto filename = rf.defaultFilename();
  base::set_log_filename(filename.c_str());
}
LoggerModule::~LoggerModule()
{
  LOG("LOG: Done\n");
  // Close log file
  base::set_log_filename("");
}
} // namespace app
