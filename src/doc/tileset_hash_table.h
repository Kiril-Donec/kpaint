// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_TILESET_HASH_TABLE_H_INCLUDED
 define DOC_TILESET_HASH_TABLE_H_INCLUDED
 pragma once
 include "doc/image.h"
 include "doc/image_ref.h"
 include "doc/images_map.h"
 include "doc/primitives.h"
 include "doc/tile.h"
 include <unordered_map>
namespace doc {
 A hash table used to match Image pixels data <-> tileset index
typedef std::unordered_map<ImageRef, tile_index, details::image_hash, details::image_eq>
  TilesetHashTable;
} // namespace doc
 endif
