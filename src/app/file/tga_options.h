// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_FILE_TGA_OPTIONS_H_INCLUDED
 define APP_FILE_TGA_OPTIONS_H_INCLUDED
 pragma once
 include "app/file/format_options.h"
namespace app {
class TgaOptions : public FormatOptions {
public:
  int bitsPerPixel() const { return m_bitsPerPixel; }
  bool compress() const { return m_compress; }
  void bitsPerPixel(int bpp) { m_bitsPerPixel = bpp; }
  void compress(bool state) { m_compress = state; }

private:
  int m_bitsPerPixel = 0;
  bool m_compress = true;
};
} // namespace app
 endif
