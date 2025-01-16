// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_ALGORITHM_POLYGON_H_INCLUDED
 define DOC_ALGORITHM_POLYGON_H_INCLUDED
 pragma once
 include "doc/algorithm/hline.h"
 include "gfx/fwd.h"
 include <vector>
namespace doc { namespace algorithm {
void polygon(int vertices, const int* points, void* data, AlgoHLine proc);
bool createUnion(std::vector<int>& pairs, const int x, int& ints);
}} // namespace doc::algorithm
 endif
