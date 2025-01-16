// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 include "app/file/split_filename.h"
 include "base/fs.h"
 include "tests/app_test.h"
using namespace app;
TEST(SplitFilename, Common)
{
  std::string left, right;
  int width;
  EXPECT_EQ(-1, split_filename("sprite.png", left, right, width));
  EXPECT_EQ("sprite", left);
  EXPECT_EQ(".png", right);
  EXPECT_EQ(0, width);
  EXPECT_EQ(1, split_filename("C:\\test\\a1.png", left, right, width));
  EXPECT_EQ("C:\\test\\a", left);
  EXPECT_EQ(".png", right);
  EXPECT_EQ(1, width);
  EXPECT_EQ(2001, split_filename("/hi/bye2001.png", left, right, width));
  EXPECT_EQ("/hi/bye", left);
  EXPECT_EQ(".png", right);
  EXPECT_EQ(4, width);
  EXPECT_EQ(1, split_filename("C:/test/a1.png", left, right, width));
  EXPECT_EQ("C:/test/a", left);
  EXPECT_EQ(".png", right);
  EXPECT_EQ(1, width);
  EXPECT_EQ(0, split_filename("file00.png", left, right, width));
  EXPECT_EQ("file", left);
  EXPECT_EQ(".png", right);
  EXPECT_EQ(2, width);
  EXPECT_EQ(32, split_filename("sprite1-0032", left, right, width));
  EXPECT_EQ("sprite1-", left);
  EXPECT_EQ("", right);
  EXPECT_EQ(4, width);
}
TEST(SplitFilename, InvalidEraseInLeftPart_Issue784)
{
  std::string left, right;
  int width;
  EXPECT_EQ(
    1,
    split_filename("by \xE3\x81\xA1\xE3\x81\x83\xE3\x81\xBE\\0001.png", left, right, width));
  EXPECT_EQ("by \xE3\x81\xA1\xE3\x81\x83\xE3\x81\xBE\\", left);
  EXPECT_EQ(".png", right);
  EXPECT_EQ(4, width);
}
