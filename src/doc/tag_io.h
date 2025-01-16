// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_TAG_IO_H_INCLUDED
 define DOC_TAG_IO_H_INCLUDED
 pragma once
 include "doc/serial_format.h"
 include <iosfwd>
namespace doc {
class Tag;
void write_tag(std::ostream& os, const Tag* tag);
Tag* read_tag(std::istream& is, bool setId = true, SerialFormat serial = SerialFormat::LastVer);
} // namespace doc
 endif
