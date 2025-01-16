// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_EDITOR_NAVIGATE_STATE_H_INCLUDED
 define APP_UI_EDITOR_NAVIGATE_STATE_H_INCLUDED
 pragma once
 include "app/ui/editor/state_with_wheel_behavior.h"
namespace app {
class NavigateState : public StateWithWheelBehavior {
public:
  NavigateState();
  virtual bool onMouseDown(Editor* editor, ui::MouseMessage* msg) override;
  virtual bool onMouseUp(Editor* editor, ui::MouseMessage* msg) override;
  virtual bool onMouseMove(Editor* editor, ui::MouseMessage* msg) override;
  virtual bool onKeyDown(Editor* editor, ui::KeyMessage* msg) override;
  virtual bool onKeyUp(Editor* editor, ui::KeyMessage* msg) override;

protected:
  void disableQuickTool() const override;
};
} // namespace app
 endif
