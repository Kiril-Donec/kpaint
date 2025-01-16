// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_SORT_PALETTE_H_INCLUDED
 define DOC_SORT_PALETTE_H_INCLUDED
 pragma once
namespace doc {
class Remap;
class Palette;
enum class SortPaletteBy {
  RED,
  GREEN,
  BLUE,
  ALPHA,
  HUE,
  SATURATION,
  VALUE,
  LIGHTNESS,
  LUMA,
};
 Creates a Remap to sort the palette. It doesn't apply the remap.
Remap sort_palette(const Palette* palette, const SortPaletteBy channel, const bool ascending);
} // namespace doc
 endif
