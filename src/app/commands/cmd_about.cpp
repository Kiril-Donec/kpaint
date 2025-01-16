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
 include "about.xml.h"
 include "app/app.h"
 include "app/commands/command.h"
 include "app/modules/gui.h"
 include "app/ui/main_window.h"
 include "fmt/format.h"
 include "ver/info.h"
namespace app {
using namespace ui;
class AboutCommand : public Command {
public:
  AboutCommand();

protected:
  void onExecute(Context* context) override;
};
AboutCommand::AboutCommand() : Command(CommandId::About(), CmdUIOnlyFlag)
{
}
void AboutCommand::onExecute(Context* context)
{
  gen::About window;
  window.title()->setText(fmt::format("{} v{}", get_app_name(), get_app_version()));
  window.licenses()->Click.connect([&window] {
    window.closeWindow(nullptr);
    App::instance()->mainWindow()->showBrowser("docs/LICENSES.md");
  });
  window.credits()->Click.connect([&window] {
    window.closeWindow(nullptr);
    App::instance()->mainWindow()->showBrowser("README.md", "Authors");
  });
  window.i18nCredits()->Click.connect([&window] {
    window.closeWindow(nullptr);
    App::instance()->mainWindow()->showBrowser("strings/README.md", "Translators");
  });
  window.openWindowInForeground();
}
Command* CommandFactory::createAboutCommand()
{
  return new AboutCommand;
}
} // namespace app
