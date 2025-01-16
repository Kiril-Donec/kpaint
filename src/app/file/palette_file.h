// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_FILE_PALETTE_FILE_H_INCLUDED
 define APP_FILE_PALETTE_FILE_H_INCLUDED
 pragma once
 include "base/paths.h"
 include "gfx/color_space.h"
 include <memory>
namespace doc {
class Palette;
}
namespace app {
struct FileOpConfig;
base::paths get_readable_palette_extensions();
base::paths get_writable_palette_extensions();
std::unique_ptr<doc::Palette> load_palette(const char* filename,
                                           const FileOpConfig* config = nullptr);
bool save_palette(const char* filename,
                  const doc::Palette* pal,
                  int columns,
                  const gfx::ColorSpaceRef& colorSpace);
} // namespace app
 endif
