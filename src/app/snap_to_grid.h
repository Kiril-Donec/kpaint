// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_SNAP_TO_GRID_H_INCLUDED
 define APP_SNAP_TO_GRID_H_INCLUDED
 pragma once
 include "gfx/fwd.h"
namespace app {
enum class PreferSnapTo {
  ClosestGridVertex,
  BoxOrigin,
  BoxEnd,
  FloorGrid,
  CeilGrid,
};
gfx::Point snap_to_grid(const gfx::Rect& grid, const gfx::Point& point, const PreferSnapTo prefer);
} // namespace app
 endif
