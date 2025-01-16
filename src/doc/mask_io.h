// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_MASK_IO_H_INCLUDED
 define DOC_MASK_IO_H_INCLUDED
 pragma once
 include <iosfwd>
namespace doc {
class Mask;
void write_mask(std::ostream& os, const Mask* mask);
Mask* read_mask(std::istream& is);
} // namespace doc
 endif
