// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 include "app/commands/command.h"
 include "app/context.h"
 ifdef ENABLE_DRM
  #include "app/ui/enter_license.h"
 else
  #include "app/i18n/strings.h"
  #include "ui/alert.h"
 endif
namespace app {
class EnterLicenseCommand : public Command {
public:
  EnterLicenseCommand();

protected:
  void onExecute(Context* context) override;
};
EnterLicenseCommand::EnterLicenseCommand() : Command(CommandId::EnterLicense(), CmdUIOnlyFlag)
{
}
void EnterLicenseCommand::onExecute(Context* context)
{
 ifdef ENABLE_DRM
  // Load the window widget
  app::EnterLicense window;
  // Open the window
  window.openWindowInForeground();
 else
  ui::Alert::show(Strings::alerts_enter_license_disabled());
 endif
}
Command* CommandFactory::createRegisterCommand()
{
  return new EnterLicenseCommand;
}
} // namespace app
