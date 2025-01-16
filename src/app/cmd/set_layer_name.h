// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_SET_LAYER_NAME_H_INCLUDED
 define APP_CMD_SET_LAYER_NAME_H_INCLUDED
 pragma once
 include "app/cmd.h"
 include "app/cmd/with_layer.h"
 include <string>
namespace app { namespace cmd {
using namespace doc;
class SetLayerName : public Cmd,
                     public WithLayer {
public:
  SetLayerName(Layer* layer, const std::string& name);

protected:
  void onExecute() override;
  void onUndo() override;
  void onFireNotifications() override;
  size_t onMemSize() const override { return sizeof(*this); }

private:
  std::string m_oldName;
  std::string m_newName;
};
}} // namespace app::cmd
 endif
