// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_LAUNCHER_H_INCLUDED
 define APP_LAUNCHER_H_INCLUDED
 pragma once
 include <string>
namespace app { namespace launcher {
void open_url(const std::string& url);
void open_file(const std::string& file);
void open_folder(const std::string& file);
}} // namespace app::launcher
 endif
