// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_CLEAR_CEL_H_INCLUDED
 define APP_CMD_CLEAR_CEL_H_INCLUDED
 pragma once
 include "app/cmd.h"
 include "app/cmd/with_cel.h"
 include "app/cmd_sequence.h"
namespace app { namespace cmd {
using namespace doc;
class ClearCel : public Cmd,
                 public WithCel {
public:
  ClearCel(Cel* cel);

protected:
  void onExecute() override;
  void onUndo() override;
  void onRedo() override;
  size_t onMemSize() const override { return sizeof(*this) + m_seq.memSize(); }

private:
  CmdSequence m_seq;
};
}} // namespace app::cmd
 endif
