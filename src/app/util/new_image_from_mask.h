// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UTIL_NEW_IMAGE_FROM_MASK_H_INCLUDED
 define APP_UTIL_NEW_IMAGE_FROM_MASK_H_INCLUDED
 pragma once
namespace doc {
class Image;
class Mask;
} // namespace doc
namespace app {
class Site;
doc::Image* new_image_from_mask(const Site& site, const bool newBlend);
doc::Image* new_image_from_mask(const Site& site,
                                const doc::Mask* mask,
                                const bool newBlend,
                                bool merged = false);
doc::Image* new_tilemap_from_mask(const Site& site, const doc::Mask* mask);
} // namespace app
 endif
