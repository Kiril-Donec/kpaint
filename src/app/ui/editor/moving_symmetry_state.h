// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_EDITOR_MOVING_SYMMETRY_STATE_H_INCLUDED
 define APP_UI_EDITOR_MOVING_SYMMETRY_STATE_H_INCLUDED
 pragma once
 include "app/pref/preferences.h"
 include "app/ui/editor/standby_state.h"
namespace app {
class Editor;
class MovingSymmetryState : public StandbyState {
public:
  MovingSymmetryState(Editor* editor,
                      ui::MouseMessage* msg,
                      app::gen::SymmetryMode mode,
                      Option<double>& symmetryAxis);
  virtual bool onMouseUp(Editor* editor, ui::MouseMessage* msg) override;
  virtual bool onMouseMove(Editor* editor, ui::MouseMessage* msg) override;
  virtual bool onUpdateStatusBar(Editor* editor) override;
  virtual bool requireBrushPreview() override { return false; }

private:
  app::gen::SymmetryMode m_symmetryMode;
  Option<double>& m_symmetryAxis;
  int m_symmetryAxisStart;
  gfx::PointF m_mouseStart;
};
} // namespace app
 endif
