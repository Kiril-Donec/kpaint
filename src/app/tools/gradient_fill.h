// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company

 ifndef APP_TOOLS_GRADIENT_FILL_H_INCLUDED
 define APP_TOOLS_GRADIENT_FILL_H_INCLUDED
 pragma once
 include "app/tools/point_shape.h"
 include "app/tools/stroke.h"
 include "gfx/point.h"
namespace app { namespace tools {
class GradientFillPointShape : public PointShape {
public:
  void preparePointShape(ToolLoop* loop) override;
  void transformPoint(ToolLoop* loop, const gfx::Point& point) override;
  void getModifiedArea(ToolLoop* loop, int x, int y, Rect& area) override;

private:
  gfx::Point m_startPoint;
  gfx::Point m_endPoint;
  bool m_firstPoint;
};
}} // namespace app::tools
// endif // APP_TOOLS_GRADIENT_FILL_H_INCLUDED
