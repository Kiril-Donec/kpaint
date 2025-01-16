// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Render Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef RENDER_RASTERIZE_H_INCLUDED
 define RENDER_RASTERIZE_H_INCLUDED
 pragma once
namespace doc {
class Cel;
class Image;
} // namespace doc
namespace render {
void rasterize(doc::Image* dst, const doc::Cel* cel, const int x, const int y, const bool clear);
void rasterize_with_cel_bounds(doc::Image* dst, const doc::Cel* cel);
void rasterize_with_sprite_bounds(doc::Image* dst, const doc::Cel* cel);
doc::Image* rasterize_with_cel_bounds(const doc::Cel* cel);
doc::Image* rasterize_with_sprite_bounds(const doc::Cel* cel);
} // namespace render
 endif
