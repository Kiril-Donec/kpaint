// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef FILTERS_CONVOLUTION_MATRIX_FILTER_H_INCLUDED
 define FILTERS_CONVOLUTION_MATRIX_FILTER_H_INCLUDED
 pragma once
 include "filters/filter.h"
 include "filters/tiled_mode.h"
 include <memory>
namespace filters {
class ConvolutionMatrix;
class ConvolutionMatrixFilter : public Filter {
public:
  ConvolutionMatrixFilter();
  void setMatrix(const std::shared_ptr<ConvolutionMatrix>& matrix);
  void setTiledMode(TiledMode tiledMode);
  std::shared_ptr<ConvolutionMatrix> getMatrix() { return m_matrix; }
  TiledMode getTiledMode() const { return m_tiledMode; }
  // Filter implementation
  const char* getName();
  void applyToRgba(FilterManager* filterMgr);
  void applyToGrayscale(FilterManager* filterMgr);
  void applyToIndexed(FilterManager* filterMgr);

private:
  std::shared_ptr<ConvolutionMatrix> m_matrix;
  TiledMode m_tiledMode;
};
} // namespace filters
 endif
