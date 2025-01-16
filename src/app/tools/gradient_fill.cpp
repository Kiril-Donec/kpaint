// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company

 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "app/tools/gradient_fill.h"
 include "app/tools/tool_loop.h"
 include "doc/image.h"
 include "doc/primitives.h"
 include "render/gradient.h"
namespace app { namespace tools {
using namespace gfx;
using namespace doc;
void GradientFillPointShape::preparePointShape(ToolLoop* loop)
{
  m_firstPoint = true;
}
void GradientFillPointShape::transformPoint(ToolLoop* loop, const Point& point)
{
  if (m_firstPoint) {
    m_startPoint = point;
    m_firstPoint = false;
  }
  else {
    m_endPoint = point;
    // Calculate gradient colors
    color_t c1 = loop->getFgColor();
    color_t c2 = loop->getBgColor();
    // Get the image
    Image* image = loop->getDstImage();
    // Calculate gradient for each pixel between start and end points
    int dx = m_endPoint.x - m_startPoint.x;
    int dy = m_endPoint.y - m_startPoint.y;
    double length = std::sqrt(dx * dx + dy * dy);
    if (length > 0) {
      for (int y = 0; y < image->height(); ++y) {
        for (int x = 0; x < image->width(); ++x) {
          // Calculate distance from current pixel to gradient line
          double dist = std::abs(
            (dy * x - dx * y + m_endPoint.x * m_startPoint.y - m_endPoint.y * m_startPoint.x) /
            length);
          // Calculate gradient color based on distance
          double t = dist / length;
          if (t > 1.0)
            t = 1.0;
          color_t c = render::gradient_color(c1, c2, t);
          image->putPixel(x, y, c);
        }
      }
    }
  }
}
void GradientFillPointShape::getModifiedArea(ToolLoop* loop, int x, int y, Rect& area)
{
  area = loop->getDstImage()->bounds();
}
}} // namespace app::tools
