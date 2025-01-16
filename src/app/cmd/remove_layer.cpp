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
 include "app/cmd/remove_layer.h"
 include "doc/layer.h"
namespace app { namespace cmd {
using namespace doc;
RemoveLayer::RemoveLayer(Layer* layer) : AddLayer(layer->parent(), layer, layer->getPrevious())
{
}
void RemoveLayer::onExecute()
{
  AddLayer::onUndo();
}
void RemoveLayer::onUndo()
{
  AddLayer::onRedo();
}
void RemoveLayer::onRedo()
{
  AddLayer::onUndo();
}
}} // namespace app::cmd
