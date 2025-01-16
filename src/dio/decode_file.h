// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document IO Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DIO_DECODE_FILE_H_INCLUDED
 define DIO_DECODE_FILE_H_INCLUDED
 pragma once
namespace dio {
class DecodeDelegate;
class FileInterface;
bool decode_file(DecodeDelegate* delegate, FileInterface* f);
} // namespace dio
 endif
