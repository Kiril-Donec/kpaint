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
 include "app/cmd/remove_tile.h"
 include "doc/cel.h"
 include "doc/layer.h"
namespace app { namespace cmd {
using namespace doc;
RemoveTile::RemoveTile(Tileset* tileset, const tile_index ti) : AddTile(tileset, ti)
{
}
void RemoveTile::onExecute()
{
  AddTile::onUndo();
}
void RemoveTile::onUndo()
{
  AddTile::onRedo();
}
void RemoveTile::onRedo()
{
  AddTile::onUndo();
}
}} // namespace app::cmd
