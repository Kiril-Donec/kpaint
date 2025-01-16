// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UTIL_MSK_FILE_H_INCLUDED
 define APP_UTIL_MSK_FILE_H_INCLUDED
 pragma once
namespace doc {
class Mask;
}
namespace app {
doc::Mask* load_msk_file(const char* filename);
int save_msk_file(const doc::Mask* mask, const char* filename);
} // namespace app
 endif
