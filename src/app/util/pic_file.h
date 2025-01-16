// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UTIL_PIC_FILE_H_INCLUDED
 define APP_UTIL_PIC_FILE_H_INCLUDED
 pragma once
namespace doc {
class Image;
class Palette;
} // namespace doc
namespace app {
doc::Image* load_pic_file(const char* filename, int* x, int* y, doc::Palette** palette);
int save_pic_file(const char* filename,
                  int x,
                  int y,
                  const doc::Palette* palette,
                  const doc::Image* image);
} // namespace app
 endif
