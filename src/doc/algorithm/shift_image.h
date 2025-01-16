// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_ALGORITHM_SHIFT_IMAGE_H_INCLUDED
 define DOC_ALGORITHM_SHIFT_IMAGE_H_INCLUDED
 pragma once
 include "doc/image_ref.h"
namespace doc {
class Cel;
class Mask;
namespace algorithm {
void shift_image(Image* image, int dx, int dy, double angle);
ImageRef shift_image_with_mask(const Cel* cel,
                               const Mask* mask,
                               const int dx,
                               const int dy,
                               gfx::Rect& newCelBounds);
} // namespace algorithm
} // namespace doc
 endif
