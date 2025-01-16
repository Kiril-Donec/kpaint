// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_CEL_DATA_IO_H_INCLUDED
 define DOC_CEL_DATA_IO_H_INCLUDED
 pragma once
 include "doc/serial_format.h"
 include <iosfwd>
namespace doc {
class CelData;
class SubObjectsIO;
void write_celdata(std::ostream& os, const CelData* cel);
CelData* read_celdata(std::istream& is,
                      SubObjectsIO* subObjects,
                      bool setId = true,
                      SerialFormat serial = SerialFormat::LastVer);
} // namespace doc
 endif
