// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_PALETTE_IO_H_INCLUDED
 define DOC_PALETTE_IO_H_INCLUDED
 pragma once
 include <iosfwd>
namespace doc {
class Palette;
void write_palette(std::ostream& os, const Palette* palette);
Palette* read_palette(std::istream& is);
} // namespace doc
 endif
