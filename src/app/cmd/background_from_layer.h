// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_BACKGROUND_FROM_LAYER_H_INCLUDED
 define APP_CMD_BACKGROUND_FROM_LAYER_H_INCLUDED
 pragma once
 include "app/cmd/with_layer.h"
 include "app/cmd_sequence.h"
namespace app { namespace cmd {
using namespace doc;
class BackgroundFromLayer : public CmdSequence,
                            public WithLayer {
public:
  BackgroundFromLayer(Layer* layer);

protected:
  void onExecute() override;
};
}} // namespace app::cmd
 endif
