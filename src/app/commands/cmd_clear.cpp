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
 include "app/app.h"
 include "app/commands/command.h"
 include "app/ui/input_chain.h"
namespace app {
class ClearCommand : public Command {
public:
  ClearCommand();

protected:
  bool onEnabled(Context* ctx) override;
  void onExecute(Context* ctx) override;
};
ClearCommand::ClearCommand() : Command(CommandId::Clear(), CmdUIOnlyFlag)
{
}
bool ClearCommand::onEnabled(Context* ctx)
{
  return App::instance()->inputChain().canClear(ctx);
}
void ClearCommand::onExecute(Context* ctx)
{
  App::instance()->inputChain().clear(ctx);
}
Command* CommandFactory::createClearCommand()
{
  return new ClearCommand;
}
} // namespace app
