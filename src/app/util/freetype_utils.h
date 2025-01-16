// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UTIL_FREETYPE_UTILS_H_INCLUDED
 define APP_UTIL_FREETYPE_UTILS_H_INCLUDED
 pragma once
 include "doc/color.h"
 include <string>
namespace doc {
class Image;
}
namespace app {
doc::Image* render_text(const std::string& fontfile,
                        int fontsize,
                        const std::string& text,
                        doc::color_t color,
                        bool antialias);
} // namespace app
 endif
