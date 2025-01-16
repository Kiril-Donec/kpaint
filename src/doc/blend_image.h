// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_BLEND_IMAGE_H_INCLUDED
 define DOC_BLEND_IMAGE_H_INCLUDED
 pragma once
 include "doc/blend_mode.h"
 include "gfx/fwd.h"
namespace doc {
class Image;
class Palette;
void blend_image(Image* dst,
                 const Image* src,
                 gfx::Clip area,
                 // For indexed color mode
                 const Palette* pal,
                 // For grayscale/RGB color modes
                 const int opacity,
                 const doc::BlendMode blendMode);
} // namespace doc
 endif
