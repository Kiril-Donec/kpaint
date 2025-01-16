// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_REMOVE_LAYER_H_INCLUDED
 define APP_CMD_REMOVE_LAYER_H_INCLUDED
 pragma once
 include "app/cmd/add_layer.h"
namespace app { namespace cmd {
using namespace doc;
class RemoveLayer : public AddLayer {
public:
  RemoveLayer(Layer* layer);

protected:
  void onExecute() override;
  void onUndo() override;
  void onRedo() override;
};
}} // namespace app::cmd
 endif
