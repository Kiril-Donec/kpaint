// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Render Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef RENDER_GET_SPRITE_PIXEL_H_INCLUDED
 define RENDER_GET_SPRITE_PIXEL_H_INCLUDED
 pragma once
 include "doc/frame.h"
namespace doc {
class Sprite;
}
namespace render {
using namespace doc;
class Projection;
 Gets a pixel from the sprite in the specified position. If in the
 specified coordinates there're background this routine will
 return the 0 color (the mask-color).
color_t get_sprite_pixel(const Sprite* sprite,
                         const double x,
                         const double y,
                         const frame_t frame,
                         const Projection& proj,
                         const bool newBlend);
} // namespace render
 endif
