// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_SCRIPT_SECURITY_H_INCLUDED
 define APP_SCRIPT_SECURITY_H_INCLUDED
 pragma once
 ifndef ENABLE_SCRIPTING
  #error ENABLE_SCRIPTING must be defined
 endif
 include "app/script/engine.h"
namespace app { namespace script {
enum class FileAccessMode {
  Execute = 1,
  Write = 2,
  Read = 4,
  OpenSocket = 8,
  LoadLib = 16,
  Full = Execute | Write | Read | OpenSocket | LoadLib,
};
enum class ResourceType {
  File,
  Command,
  WebSocket,
};
void overwrite_unsecure_functions(lua_State* L);
bool ask_access(lua_State* L,
                const char* filename,
                const FileAccessMode mode,
                const ResourceType resourceType);
}} // namespace app::script
 endif
