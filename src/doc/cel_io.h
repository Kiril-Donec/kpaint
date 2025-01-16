// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_CEL_IO_H_INCLUDED
 define DOC_CEL_IO_H_INCLUDED
 pragma once
 include <iosfwd>
namespace doc {
class Cel;
class SubObjectsIO;
void write_cel(std::ostream& os, const Cel* cel);
Cel* read_cel(std::istream& is, SubObjectsIO* subObjects, bool setId = true);
} // namespace doc
 endif
