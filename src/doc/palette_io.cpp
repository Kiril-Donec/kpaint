// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "base/serialization.h"
 include "doc/palette.h"
 include "doc/palette_io.h"
 include <iostream>
 include <memory>
namespace doc {
using namespace base::serialization;
using namespace base::serialization::little_endian;
 Serialized Palette data:
// //   WORD               Frame
 WORD               Number of colors
 for each color     ("ncolors" times)
 DWORD            _rgba color
void write_palette(std::ostream& os, const Palette* palette)
{
  write16(os, palette->frame()); // Frame
  write16(os, palette->size());  // Number of colors
  for (int c = 0; c < palette->size(); c++) {
    uint32_t color = palette->getEntry(c);
    write32(os, color);
  }
}
Palette* read_palette(std::istream& is)
{
  frame_t frame(read16(is)); // Frame
  int ncolors = read16(is);  // Number of colors
  std::unique_ptr<Palette> palette(new Palette(frame, ncolors));
  for (int c = 0; c < ncolors; ++c) {
    uint32_t color = read32(is);
    palette->setEntry(c, color);
  }
  return palette.release();
}
} // namespace doc
