// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_COMMANDS_MOVE_THING_H_INCLUDED
 define APP_COMMANDS_MOVE_THING_H_INCLUDED
 pragma once
 include "gfx/point.h"
 include <string>
namespace app {
class Context;
class Params;
struct MoveThing {
  enum Direction { Left, Up, Right, Down };
  enum Units {
    Pixel,
    TileWidth,
    TileHeight,
    ZoomedPixel,
    ZoomedTileWidth,
    ZoomedTileHeight,
    ViewportWidth,
    ViewportHeight
  };
  Direction direction;
  Units units;
  int quantity;
  void onLoadParams(const Params& params);
  std::string getFriendlyString() const;
  gfx::Point getDelta(Context* context) const;
};
} // namespace app
 endif
