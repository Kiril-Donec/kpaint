// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_LAYER_FROM_BACKGROUND_H_INCLUDED
 define APP_CMD_LAYER_FROM_BACKGROUND_H_INCLUDED
 pragma once
 include "app/cmd_sequence.h"
namespace doc {
class Layer;
}
namespace app { namespace cmd {
using namespace doc;
class LayerFromBackground : public CmdSequence {
public:
  LayerFromBackground(Layer* layer);
};
}} // namespace app::cmd
 endif
