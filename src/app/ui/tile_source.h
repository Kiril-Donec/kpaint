// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_TILE_SOURCE_H_INCLUDED
 define APP_UI_TILE_SOURCE_H_INCLUDED
 pragma once
 include "doc/tile.h"
 include "gfx/point.h"
namespace app {
class ITileSource {
public:
  virtual ~ITileSource() {}
  virtual doc::tile_t getTileByPosition(const gfx::Point& pos) = 0;
};
} // namespace app
 endif
