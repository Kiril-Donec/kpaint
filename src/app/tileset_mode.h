// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_TILESET_MODE_H_INCLUDED
 define APP_TILESET_MODE_H_INCLUDED
 pragma once
namespace app {
 These modes are available edition modes for the tileset when an
 tilemap is edited.
enum class TilesetMode {
  Manual, // Modify existent tiles (don't create new ones)
  Auto,   // Add/remove tiles automatically when needed
  Stack,  // Stack modified tiles as new ones
};
} // namespace app
 endif
