// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_ANIDIR_H_INCLUDED
 define DOC_ANIDIR_H_INCLUDED
 pragma once
 include <string>
namespace doc {
enum class AniDir {
  FORWARD = 0,
  REVERSE = 1,
  PING_PONG = 2,         // First playback is in forward
  PING_PONG_REVERSE = 3, // First playback is in reverse
};
std::string convert_anidir_to_string(AniDir anidir);
doc::AniDir convert_string_to_anidir(const std::string& s);
} // namespace doc
// endif // DOC_ANIDIR_H_INCLUDED
