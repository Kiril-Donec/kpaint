// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_GRID_IO_H_INCLUDED
 define DOC_GRID_IO_H_INCLUDED
 pragma once
 include <iosfwd>
namespace doc {
class Grid;
bool write_grid(std::ostream& os, const Grid& grid);
Grid read_grid(std::istream& is);
} // namespace doc
 endif
