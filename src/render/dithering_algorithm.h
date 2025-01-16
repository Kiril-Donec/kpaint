// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Render Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef RENDER_DITHERING_METHOD_H_INCLUDED
 define RENDER_DITHERING_METHOD_H_INCLUDED
 pragma once
namespace render {
 Dithering algorithms
enum class DitheringAlgorithm {
  None,
  Ordered,
  Old,
  ErrorDiffusion,
};
} // namespace render
 endif
