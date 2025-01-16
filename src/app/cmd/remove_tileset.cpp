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
 include "app/cmd/remove_tileset.h"
 include "doc/cel.h"
 include "doc/layer.h"
namespace app { namespace cmd {
using namespace doc;
RemoveTileset::RemoveTileset(Sprite* sprite, const tileset_index si) : AddTileset(sprite, si)
{
}
void RemoveTileset::onExecute()
{
  AddTileset::onUndo();
}
void RemoveTileset::onUndo()
{
  AddTileset::onRedo();
}
void RemoveTileset::onRedo()
{
  AddTileset::onUndo();
}
}} // namespace app::cmd
