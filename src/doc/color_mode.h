// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_COLOR_MODE_H_INCLUDED
 define DOC_COLOR_MODE_H_INCLUDED
 pragma once
namespace doc {
enum class ColorMode {
  RGB,
  GRAYSCALE,
  INDEXED,
  BITMAP,
  TILEMAP,
};
inline constexpr int bytes_per_pixel_for_colormode(ColorMode cm)
{
  switch (cm) {
    case ColorMode::RGB:       return 4; // RgbTraits::bytes_per_pixel
    case ColorMode::GRAYSCALE: return 2; // GrayscaleTraits::bytes_per_pixel
    case ColorMode::INDEXED:   return 1; // IndexedTraits::bytes_per_pixel
    case ColorMode::BITMAP:    return 1; // BitmapTraits::bytes_per_pixel
    case ColorMode::TILEMAP:   return 4;   // TilemapTraits::bytes_per_pixel
  }
  return 0;
}
} // namespace doc
 endif
