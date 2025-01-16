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
 include "app/cmd/with_layer.h"
 include "doc/layer.h"
namespace app { namespace cmd {
using namespace doc;
WithLayer::WithLayer(Layer* layer) : m_layerId(layer ? layer->id() : 0)
{
}
Layer* WithLayer::layer()
{
  if (m_layerId)
    return get<Layer>(m_layerId);
  else
    return nullptr;
}
}} // namespace app::cmd
