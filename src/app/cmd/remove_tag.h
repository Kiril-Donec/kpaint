// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_REMOVE_TAG_H_INCLUDED
 define APP_CMD_REMOVE_TAG_H_INCLUDED
 pragma once
 include "app/cmd/add_tag.h"
namespace app { namespace cmd {
using namespace doc;
class RemoveTag : public AddTag {
public:
  RemoveTag(Sprite* sprite, Tag* tag);

protected:
  void onExecute() override;
  void onUndo() override;
  void onRedo() override;
};
}} // namespace app::cmd
 endif
