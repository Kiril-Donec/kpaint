// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_TOOLS_TOOL_GROUP_H_INCLUDED
 define APP_TOOLS_TOOL_GROUP_H_INCLUDED
 pragma once
 include <string>
namespace app { namespace tools {
 A group of tools.
class ToolGroup {
public:
  ToolGroup(const char* id) : m_id(id) {}
  const std::string& id() const { return m_id; }

private:
  std::string m_id;
};
}} // namespace app::tools
// endif // TOOLS_TOOL_GROUP_H_INCLUDED
