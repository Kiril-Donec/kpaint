// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_I18N_LANG_INFO_INCLUDED
 define APP_I18N_LANG_INFO_INCLUDED
 pragma once
 include <string>
namespace app {
struct LangInfo {
  std::string id;
  std::string path;
  std::string displayName;
  LangInfo() = default;
  LangInfo(const std::string& id, const std::string& path, const std::string& displayName)
    : id(id)
    , path(path)
    , displayName(displayName.empty() ? id : displayName)
  {
  }
  bool operator<(const LangInfo& other) const { return id < other.id; }
};
} // namespace app
 endif
