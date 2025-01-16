// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_WITH_SPRITE_H_INCLUDED
 define APP_CMD_WITH_SPRITE_H_INCLUDED
 pragma once
 include "doc/object_id.h"
namespace doc {
class Sprite;
}
namespace app { namespace cmd {
class WithSprite {
public:
  WithSprite(doc::Sprite* sprite);
  doc::Sprite* sprite();

private:
  doc::ObjectId m_spriteId;
};
}} // namespace app::cmd
 endif
