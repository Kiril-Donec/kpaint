// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Render Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef RENDER_ERROR_DIFFUSION_H_INCLUDED
 define RENDER_ERROR_DIFFUSION_H_INCLUDED
 pragma once
 include "doc/image_ref.h"
 include "render/ordered_dither.h"
 include <vector>
namespace render {
class ErrorDiffusionDither : public DitheringAlgorithmBase {
public:
  ErrorDiffusionDither(int transparentIndex = -1);
  int dimensions() const override { return 2; }
  bool zigZag() const override { return true; }
  void start(const doc::Image* srcImage, doc::Image* dstImage, const double factor) override;
  void finish() override;
  doc::color_t ditherRgbToIndex2D(const int x,
                                  const int y,
                                  const doc::RgbMap* rgbmap,
                                  const doc::Palette* palette) override;

private:
  int m_transparentIndex;
  const doc::Image* m_srcImage;
  int m_width, m_lastY;
  static const int kChannels = 4;
  std::vector<int> m_err[kChannels];
  int m_factor;
};
} // namespace render
 endif
