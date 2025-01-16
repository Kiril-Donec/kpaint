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
 include "app/commands/command.h"
 include "app/context.h"
 include "app/context_access.h"
 include "app/doc.h"
 include "app/launcher.h"
namespace app {
class OpenInFolderCommand : public Command {
public:
  OpenInFolderCommand();

protected:
  bool onEnabled(Context* context) override;
  void onExecute(Context* context) override;
};
OpenInFolderCommand::OpenInFolderCommand() : Command(CommandId::OpenInFolder(), CmdUIOnlyFlag)
{
}
bool OpenInFolderCommand::onEnabled(Context* context)
{
  const ContextReader reader(context);
  return reader.document() && reader.document()->isAssociatedToFile();
}
void OpenInFolderCommand::onExecute(Context* context)
{
  launcher::open_folder(context->activeDocument()->filename());
}
Command* CommandFactory::createOpenInFolderCommand()
{
  return new OpenInFolderCommand;
}
} // namespace app
