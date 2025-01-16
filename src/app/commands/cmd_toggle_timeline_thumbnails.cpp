// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company

Carlo Caputo
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "app/app.h"
 include "app/commands/command.h"
 include "app/context.h"
 include "app/doc.h"
 include "app/pref/preferences.h"
  namespace app
{
  using namespace gfx;
  class ToggleTimelineThumbnailsCommand : public Command {
  public:
    ToggleTimelineThumbnailsCommand()
      : Command(CommandId::ToggleTimelineThumbnails(), CmdUIOnlyFlag)
    {
    }

  protected:
    bool onChecked(Context* context) override
    {
      DocumentPreferences& docPref = Preferences::instance().document(context->activeDocument());
      return docPref.thumbnails.enabled();
    }
    void onExecute(Context* context) override
    {
      DocumentPreferences& docPref = Preferences::instance().document(context->activeDocument());
      // Loading default zoom when activating thumbnail
      if (docPref.thumbnails.zoom() <= 1 && !docPref.thumbnails.enabled())
        docPref.thumbnails.zoom(2);
      docPref.thumbnails.enabled(!docPref.thumbnails.enabled());
    }
  };
  Command* CommandFactory::createToggleTimelineThumbnailsCommand()
  {
    return new ToggleTimelineThumbnailsCommand;
  }
} // namespace app
