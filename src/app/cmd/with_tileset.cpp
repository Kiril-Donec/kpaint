// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "app/cmd/with_tileset.h"
 include "doc/tileset.h"
namespace app { namespace cmd {
using namespace doc;
WithTileset::WithTileset(Tileset* tileset) : m_tilesetId(tileset->id())
{
}
Tileset* WithTileset::tileset()
{
  return get<Tileset>(m_tilesetId);
}
}} // namespace app::cmd
