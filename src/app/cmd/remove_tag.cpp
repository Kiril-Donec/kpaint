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
 include "app/cmd/remove_tag.h"
namespace app { namespace cmd {
using namespace doc;
RemoveTag::RemoveTag(Sprite* sprite, Tag* tag) : AddTag(sprite, tag)
{
}
void RemoveTag::onExecute()
{
  AddTag::onUndo();
}
void RemoveTag::onUndo()
{
  AddTag::onRedo();
}
void RemoveTag::onRedo()
{
  AddTag::onUndo();
}
}} // namespace app::cmd
