// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_BRUSH_PATTERN_H_INCLUDED
 define DOC_BRUSH_PATTERN_H_INCLUDED
 pragma once
namespace doc {
enum class BrushPattern {
  ALIGNED_TO_SRC = 0,
  ALIGNED_TO_DST = 1,
  PAINT_BRUSH = 2,
  DEFAULT = ALIGNED_TO_SRC, // Default for preferences
  DEFAULT_FOR_UI = ALIGNED_TO_SRC,
  DEFAULT_FOR_SCRIPTS = PAINT_BRUSH,
};
} // namespace doc
 endif
