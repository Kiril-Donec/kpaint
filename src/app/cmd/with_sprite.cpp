// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "app/cmd/with_sprite.h"
 include "doc/sprite.h"
namespace app { namespace cmd {
WithSprite::WithSprite(doc::Sprite* sprite) : m_spriteId(sprite->id())
{
}
doc::Sprite* WithSprite::sprite()
{
  return doc::get<doc::Sprite>(m_spriteId);
}
}} // namespace app::cmd
