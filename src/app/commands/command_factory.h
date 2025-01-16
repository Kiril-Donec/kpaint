// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_COMMANDS_COMMAND_FACTORY_H_INCLUDED
 define APP_COMMANDS_COMMAND_FACTORY_H_INCLUDED
 pragma once
namespace app {
class Command;
class CommandFactory {
public:
 undef FOR_EACH_COMMAND
 define FOR_EACH_COMMAND(Name) static Command* create##Name##Command();
 include "app/commands/commands_list.h"
 undef FOR_EACH_COMMAND
};
} // namespace app
 endif
