// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "doc/anidir.h"
namespace doc {
std::string convert_anidir_to_string(AniDir anidir)
{
  switch (anidir) {
    case AniDir::FORWARD:           return "forward";
    case AniDir::REVERSE:           return "reverse";
    case AniDir::PING_PONG:         return "pingpong";
    case AniDir::PING_PONG_REVERSE: return "pingpong_reverse";
  }
  return "";
}
doc::AniDir convert_string_to_anidir(const std::string& s)
{
  if (s == "forward")
    return AniDir::FORWARD;
  if (s == "reverse")
    return AniDir::REVERSE;
  if (s == "pingpong")
    return AniDir::PING_PONG;
  if (s == "pingpong_reverse")
    return AniDir::PING_PONG_REVERSE;
  return AniDir::FORWARD;
}
} // namespace doc
