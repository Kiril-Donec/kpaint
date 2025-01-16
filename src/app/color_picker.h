// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_COLOR_PICKER_H_INCLUDED
 define APP_COLOR_PICKER_H_INCLUDED
 pragma once
 include "app/color.h"
 include "doc/layer.h"
 include "doc/tile.h"
 include "gfx/point.h"
namespace render {
class Projection;
}
namespace app {
class Site;
class ColorPicker {
public:
  enum Mode { FromComposition, FromActiveLayer, FromFirstReferenceLayer };
  ColorPicker();
  void pickColor(const Site& site,
                 const gfx::PointF& pos,
                 const render::Projection& proj,
                 const Mode mode);
  app::Color color() const { return m_color; }
  doc::tile_t tile() const { return m_tile; }
  int alpha() const { return m_alpha; }
  doc::Layer* layer() const { return m_layer; }

private:
  app::Color m_color;
  doc::tile_t m_tile;
  int m_alpha;
  doc::Layer* m_layer;
};
} // namespace app
 endif
