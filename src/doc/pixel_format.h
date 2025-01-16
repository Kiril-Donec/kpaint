// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_PIXEL_FORMAT_H_INCLUDED
 define DOC_PIXEL_FORMAT_H_INCLUDED
 pragma once
namespace doc {
enum PixelFormat {
  IMAGE_RGB,       // 32bpp see doc::rgba()
  IMAGE_GRAYSCALE, // 16bpp see doc::graya()
  IMAGE_INDEXED,   // 8bpp
  IMAGE_BITMAP,    // 1bpp
  IMAGE_TILEMAP,   // 32bpp see doc::tile()
};
} // namespace doc
 endif
