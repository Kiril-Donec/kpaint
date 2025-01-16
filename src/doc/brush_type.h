// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_BRUSH_TYPE_H_INCLUDED
 define DOC_BRUSH_TYPE_H_INCLUDED
 pragma once
 include <string>
namespace doc {
enum BrushType {
  kCircleBrushType = 0,
  kSquareBrushType = 1,
  kLineBrushType = 2,
  kImageBrushType = 3,
  kFirstBrushType = kCircleBrushType,
  kLastBrushType = kImageBrushType,
};
std::string brush_type_to_string_id(BrushType brushType);
BrushType string_id_to_brush_type(const std::string& s);
} // namespace doc
 endif
