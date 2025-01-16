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
 include "filters/convolution_matrix.h"
namespace filters {
ConvolutionMatrix::ConvolutionMatrix(int width, int height)
  : m_width(width)
  , m_height(height)
  , m_cx(width / 2)
  , m_cy(height / 2)
  , m_div(ConvolutionMatrix::Precision)
  , m_bias(0)
  , m_defaultTarget(0)
  , m_data(width * height, 0)
{
}
} // namespace filters
