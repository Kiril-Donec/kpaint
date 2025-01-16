// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "doc/cel.h"
 include "doc/image.h"
 include "doc/layer.h"
 include "doc/primitives.h"
 include "doc/sprite.h"
 include "doc/sprites.h"
 include <algorithm>
 include <memory>
namespace doc {
Sprites::Sprites(Document* doc) : m_doc(doc)
{
  ASSERT(doc != NULL);
}
Sprites::~Sprites()
{
  deleteAll();
}
Sprite* Sprites::add(Sprite* spr)
{
  ASSERT(spr != NULL);
  m_sprites.insert(begin(), spr);
  spr->setDocument(m_doc);
  return spr;
}
void Sprites::remove(Sprite* spr)
{
  iterator it = std::find(begin(), end(), spr);
  ASSERT(it != end());
  if (it != end()) {
    (*it)->setDocument(NULL);
    m_sprites.erase(it);
  }
}
void Sprites::move(Sprite* spr, int index)
{
  remove(spr);
  m_sprites.insert(begin() + index, spr);
}
void Sprites::deleteAll()
{
  std::vector<Sprite*> copy = m_sprites;
  for (iterator it = copy.begin(), end = copy.end(); it != end; ++it) {
    Sprite* spr = *it;
    delete spr;
  }
  m_sprites.clear();
}
} // namespace doc
