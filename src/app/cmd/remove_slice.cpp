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
 include "app/cmd/remove_slice.h"
namespace app { namespace cmd {
using namespace doc;
RemoveSlice::RemoveSlice(Sprite* sprite, Slice* slice) : AddSlice(sprite, slice)
{
}
void RemoveSlice::onExecute()
{
  AddSlice::onUndo();
}
void RemoveSlice::onUndo()
{
  AddSlice::onRedo();
}
void RemoveSlice::onRedo()
{
  AddSlice::onUndo();
}
}} // namespace app::cmd
