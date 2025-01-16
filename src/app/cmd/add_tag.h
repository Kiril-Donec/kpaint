// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_ADD_TAG_H_INCLUDED
 define APP_CMD_ADD_TAG_H_INCLUDED
 pragma once
 include "app/cmd.h"
 include "app/cmd/with_sprite.h"
 include "app/cmd/with_tag.h"
 include <sstream>
namespace app { namespace cmd {
using namespace doc;
class AddTag : public Cmd,
               public WithSprite,
               public WithTag {
public:
  AddTag(Sprite* sprite, Tag* tag);

protected:
  void onExecute() override;
  void onUndo() override;
  void onRedo() override;
  size_t onMemSize() const override { return sizeof(*this) + m_size; }

private:
  size_t m_size;
  std::stringstream m_stream;
};
}} // namespace app::cmd
 endif
