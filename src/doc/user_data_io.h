// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_USER_DATA_IO_H_INCLUDED
 define DOC_USER_DATA_IO_H_INCLUDED
 pragma once
 include "doc/serial_format.h"
 include <iosfwd>
namespace doc {
class UserData;
void write_user_data(std::ostream& os, const UserData& userData);
UserData read_user_data(std::istream& is, SerialFormat serial = SerialFormat::LastVer);
} // namespace doc
 endif
