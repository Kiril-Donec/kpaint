// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_TIMELINE_ANI_CONTROLS_H_INCLUDED
 define APP_UI_TIMELINE_ANI_CONTROLS_H_INCLUDED
 pragma once
 include "app/ui/button_set.h"
 include "ui/widget.h"
 include <string>
 include <vector>
namespace ui {
class TooltipManager;
}
namespace app {
class Editor;
class AniControls : public ButtonSet {
public:
  AniControls(ui::TooltipManager* tooltipManager);
  void updateUsingEditor(Editor* editor);

protected:
  void onRightClick(Item* item) override;

private:
  void onClickButton();
  const char* getCommandId(int index) const;
  std::string getTooltipFor(int index) const;
};
} // namespace app
 endif
