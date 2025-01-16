// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_FILE_ACT_FILE_H_INCLUDED
 define DOC_FILE_ACT_FILE_H_INCLUDED
 pragma once
 include <memory>
namespace doc {
class Palette;
namespace file {
std::unique_ptr<Palette> load_act_file(const char* filename);
bool save_act_file(const Palette* pal, const char* filename);
} // namespace file
} // namespace doc
 endif
