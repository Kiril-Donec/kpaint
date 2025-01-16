// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_LOAD_MATRIX_H_INCLUDED
 define APP_LOAD_MATRIX_H_INCLUDED
 pragma once
 include <string>
namespace render {
class DitheringMatrix;
};
namespace app {
void load_dithering_matrix_from_sprite(const std::string& filename,
                                       render::DitheringMatrix& matrix);
} // namespace app
 endif
