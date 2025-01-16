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
 include "app/cmd/set_layer_flags.h"
namespace app { namespace cmd {
SetLayerFlags::SetLayerFlags(Layer* layer, LayerFlags flags)
  : WithLayer(layer)
  , m_oldFlags(layer->flags())
  , m_newFlags(flags)
{
}
void SetLayerFlags::onExecute()
{
  layer()->setFlags(m_newFlags);
  layer()->incrementVersion();
}
void SetLayerFlags::onUndo()
{
  layer()->setFlags(m_oldFlags);
  layer()->incrementVersion();
}
}} // namespace app::cmd
