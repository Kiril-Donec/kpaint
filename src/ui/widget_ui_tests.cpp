// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 define TEST_GUI
 include "tests/app_test.h"
using namespace ui;
TEST(Widget, ParentIndex)
{
  Widget a, b, c, d, e;
  EXPECT_EQ(-1, b.parentIndex());
  a.addChild(&b);
  a.addChild(&c);
  a.addChild(&d);
  EXPECT_EQ(0, b.parentIndex());
  EXPECT_EQ(1, c.parentIndex());
  EXPECT_EQ(2, d.parentIndex());
  a.removeChild(&c);
  EXPECT_EQ(0, b.parentIndex());
  EXPECT_EQ(1, d.parentIndex());
  EXPECT_EQ(-1, c.parentIndex());
  a.replaceChild(&b, &c);
  EXPECT_EQ(0, c.parentIndex());
  EXPECT_EQ(1, d.parentIndex());
  EXPECT_EQ(-1, b.parentIndex());
  a.insertChild(1, &e);
  EXPECT_EQ(0, c.parentIndex());
  EXPECT_EQ(1, e.parentIndex());
  EXPECT_EQ(2, d.parentIndex());
  EXPECT_EQ(-1, b.parentIndex());
  a.insertChild(10, &b);
  EXPECT_EQ(0, c.parentIndex());
  EXPECT_EQ(1, e.parentIndex());
  EXPECT_EQ(2, d.parentIndex());
  EXPECT_EQ(3, b.parentIndex());
  a.moveChildTo(&c, &b);
  EXPECT_EQ(0, e.parentIndex());
  EXPECT_EQ(1, d.parentIndex());
  EXPECT_EQ(2, b.parentIndex());
  EXPECT_EQ(3, c.parentIndex());
  a.moveChildTo(&b, &e);
  EXPECT_EQ(0, b.parentIndex());
  EXPECT_EQ(1, e.parentIndex());
  EXPECT_EQ(2, d.parentIndex());
  EXPECT_EQ(3, c.parentIndex());
}
