// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef FILTERS_COLOR_CURVE_FILTER_H_INCLUDED
 define FILTERS_COLOR_CURVE_FILTER_H_INCLUDED
 pragma once
 include "filters/color_curve.h"
 include "filters/filter.h"
 include <vector>
namespace filters {
class ColorCurveFilter : public Filter {
public:
  ColorCurveFilter();
  void setCurve(const ColorCurve& curve);
  const ColorCurve& getCurve() const { return m_curve; }
  // Filter implementation
  const char* getName();
  void applyToRgba(FilterManager* filterMgr);
  void applyToGrayscale(FilterManager* filterMgr);
  void applyToIndexed(FilterManager* filterMgr);

private:
  void generateMap();
  ColorCurve m_curve;
  std::vector<int> m_cmap;
};
} // namespace filters
 endif
