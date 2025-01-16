// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 include "app/ini_file.h"
 include "base/fs.h"
 include "tests/app_test.h"
using namespace app;
TEST(IniFile, Basic)
{
  ConfigModule cm;
  if (base::is_file("_test.ini"))
    base::delete_file("_test.ini");
  set_config_file("_test.ini");
  EXPECT_FALSE(get_config_bool("A", "a", false));
  EXPECT_TRUE(get_config_bool("A", "b", true));
  EXPECT_FALSE(get_config_bool("B", "a", 0));
  EXPECT_TRUE(get_config_bool("B", "b", 1));
  set_config_bool("A", "a", true);
  set_config_bool("A", "b", false);
  set_config_int("B", "a", 2);
  set_config_int("B", "b", 3);
  EXPECT_TRUE(get_config_bool("A", "a", false));
  EXPECT_FALSE(get_config_bool("A", "b", true));
  EXPECT_EQ(2, get_config_int("B", "a", 0));
  EXPECT_EQ(3, get_config_int("B", "b", 1));
}
TEST(IniFile, PushPop)
{
  ConfigModule cm;
  if (base::is_file("_a.ini"))
    base::delete_file("_a.ini");
  if (base::is_file("_b.ini"))
    base::delete_file("_b.ini");
  set_config_file("_a.ini");
  set_config_int("A", "a", 32);
  push_config_state();
  set_config_file("_b.ini");
  set_config_int("A", "a", 64);
  EXPECT_EQ(64, get_config_int("A", "a", 0));
  pop_config_state();
  EXPECT_EQ(32, get_config_int("A", "a", 0));
}
