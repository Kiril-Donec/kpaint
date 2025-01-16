// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_STRING_IO_H_INCLUDED
 define DOC_STRING_IO_H_INCLUDED
 pragma once
 include <string>
namespace doc {
void write_string(std::ostream& os, const std::string& str);
std::string read_string(std::istream& is);
} // namespace doc
 endif
