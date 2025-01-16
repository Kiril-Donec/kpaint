// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_SET_CEL_FRAME_H_INCLUDED
 define APP_CMD_SET_CEL_FRAME_H_INCLUDED
 pragma once
 include "app/cmd.h"
 include "app/cmd/with_cel.h"
 include "doc/frame.h"
namespace app { namespace cmd {
using namespace doc;
class SetCelFrame : public Cmd,
                    public WithCel {
public:
  SetCelFrame(Cel* cel, frame_t frame);

protected:
  void onExecute() override;
  void onUndo() override;
  void onFireNotifications() override;
  size_t onMemSize() const override { return sizeof(*this); }

private:
  frame_t m_oldFrame;
  frame_t m_newFrame;
};
}} // namespace app::cmd
 endif
