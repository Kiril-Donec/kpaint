// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "app/commands/quick_command.h"
namespace app {
QuickCommand::QuickCommand(const char* id, std::function<void()> execute)
  : Command(id, CmdUIOnlyFlag)
  , m_execute(execute)
{
}
QuickCommand::~QuickCommand()
{
}
void QuickCommand::onExecute(Context* context)
{
  m_execute();
}
} // namespace app
