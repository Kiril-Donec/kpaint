// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef TESTS_TEST_H_INCLUDED
 define TESTS_TEST_H_INCLUDED
 pragma once
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include <gtest/gtest.h>
 ifdef TEST_GUI
  #include "os/os.h"
  #include "ui/ui.h"
 endif
 ifdef LINKED_WITH_OS_LIBRARY
  #undef main
  #ifdef _WIN32
int main(int argc, char* argv[])
{
  extern int app_main(int argc, char* argv[]);
  return app_main(argc, argv);
}
  #endif
  #define main app_main
 endif
int main(int argc, char* argv[])
{
  int exitcode;
  ::testing::InitGoogleTest(&argc, argv);
 ifdef TEST_GUI
  {
    os::SystemRef system(os::make_system());
    ui::UISystem uiSystem;
    ui::Manager uiManager(nullptr);
 endif
    exitcode = RUN_ALL_TESTS();
 ifdef TEST_GUI
  }
 endif
  return exitcode;
}
 endif
