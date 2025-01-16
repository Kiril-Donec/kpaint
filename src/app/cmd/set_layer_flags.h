// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_SET_LAYER_FLAGS_H_INCLUDED
 define APP_CMD_SET_LAYER_FLAGS_H_INCLUDED
 pragma once
 include "app/cmd.h"
 include "app/cmd/with_layer.h"
 include "doc/layer.h"
namespace app { namespace cmd {
using namespace doc;
class SetLayerFlags : public Cmd,
                      public WithLayer {
public:
  SetLayerFlags(Layer* layer, LayerFlags flags);

protected:
  void onExecute() override;
  void onUndo() override;
  size_t onMemSize() const override { return sizeof(*this); }

private:
  LayerFlags m_oldFlags;
  LayerFlags m_newFlags;
};
}} // namespace app::cmd
 endif
