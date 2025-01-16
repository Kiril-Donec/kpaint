// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "doc/color_scales.h"
 include "doc/palette.h"
 include "doc/rgbmap_rgb5a3.h"
namespace doc {
 define RSIZE   32
 define GSIZE   32
 define BSIZE   32
 define ASIZE   8
 define MAPSIZE (RSIZE * GSIZE * BSIZE * ASIZE)
RgbMapRGB5A3::RgbMapRGB5A3() : m_map(MAPSIZE)
{
}
void RgbMapRGB5A3::regenerateMap(const Palette* palette,
                                 const int maskIndex,
                                 const FitCriteria fitCriteria)
{
  // Skip useless regenerations
  if (m_palette == palette && m_modifications == palette->getModifications() &&
      m_maskIndex == maskIndex && m_fitCriteria == fitCriteria)
    return;
  m_palette = palette;
  m_fitCriteria = fitCriteria;
  m_modifications = palette->getModifications();
  m_maskIndex = maskIndex;
  // Mark all entries as invalid (need to be regenerated)
  for (uint16_t& entry : m_map)
    entry |= INVALID;
}
int RgbMapRGB5A3::generateEntry(int i, int r, int g, int b, int a) const
{
  return m_map[i] = findBestfit(scale_5bits_to_8bits(r >> 3),
                                scale_5bits_to_8bits(g >> 3),
                                scale_5bits_to_8bits(b >> 3),
                                scale_3bits_to_8bits(a >> 5),
                                m_maskIndex);
}
} // namespace doc
