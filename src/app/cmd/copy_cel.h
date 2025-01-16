// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_COPY_CEL_H_INCLUDED
 define APP_CMD_COPY_CEL_H_INCLUDED
 pragma once
 include "app/cmd/with_layer.h"
 include "app/cmd_sequence.h"
 include "doc/color.h"
 include "doc/frame.h"
namespace app { namespace cmd {
using namespace doc;
class CopyCel : public CmdSequence {
public:
  CopyCel(Layer* srcLayer, frame_t srcFrame, Layer* dstLayer, frame_t dstFrame, bool continuous);

protected:
  void onExecute() override;
  void onFireNotifications() override;

private:
  WithLayer m_srcLayer, m_dstLayer;
  frame_t m_srcFrame, m_dstFrame;
  bool m_continuous;
};
}} // namespace app::cmd
 endif
