// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_LOOP_TAG_H_INCLUDED
 define APP_LOOP_TAG_H_INCLUDED
 pragma once
 include "doc/frame.h"
namespace doc {
class Sprite;
class Tag;
} // namespace doc
namespace app {
class TagProvider {
public:
  virtual ~TagProvider() {}
  virtual doc::Tag* getTagByFrame(const doc::frame_t frame, const bool getLoopTagIfNone) = 0;
};
doc::Tag* get_animation_tag(const doc::Sprite* sprite, doc::frame_t frame);
doc::Tag* get_loop_tag(const doc::Sprite* sprite);
doc::Tag* create_loop_tag(doc::frame_t from, doc::frame_t to);
} // namespace app
 endif
