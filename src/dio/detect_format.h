// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document IO Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DIO_DETECT_FORMAT_H_INCLUDED
 define DIO_DETECT_FORMAT_H_INCLUDED
 pragma once
 include "dio/file_format.h"
 include <cstdint>
 include <string>
namespace dio {
FileFormat detect_format(const std::string& filename);
FileFormat detect_format_by_file_content_bytes(const uint8_t* buf, const int n);
FileFormat detect_format_by_file_content(const std::string& filename);
FileFormat detect_format_by_file_extension(const std::string& filename);
} // namespace dio
 endif
