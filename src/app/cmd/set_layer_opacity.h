// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_SET_LAYER_OPACITY_H_INCLUDED
 define APP_CMD_SET_LAYER_OPACITY_H_INCLUDED
 pragma once
 include "app/cmd.h"
 include "app/cmd/with_layer.h"
namespace doc {
class LayerImage;
}
namespace app { namespace cmd {
using namespace doc;
class SetLayerOpacity : public Cmd,
                        public WithLayer {
public:
  SetLayerOpacity(LayerImage* layer, int opacity);

protected:
  void onExecute() override;
  void onUndo() override;
  void onFireNotifications() override;
  size_t onMemSize() const override { return sizeof(*this); }

private:
  int m_oldOpacity;
  int m_newOpacity;
};
}} // namespace app::cmd
 endif
