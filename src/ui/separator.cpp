// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "gfx/size.h"
 include "ui/message.h"
 include "ui/separator.h"
 include "ui/size_hint_event.h"
 include "ui/theme.h"
 include <algorithm>
namespace ui {
using namespace gfx;
Separator::Separator(const std::string& text, int align) : Widget(kSeparatorWidget)
{
  enableFlags(IGNORE_MOUSE);
  setAlign(align);
  if (!text.empty())
    setText(text);
  initTheme();
}
void Separator::onSizeHint(SizeHintEvent& ev)
{
  Size maxSize(0, 0);
  for (auto child : children()) {
    Size reqSize = child->sizeHint();
    maxSize.w = std::max(maxSize.w, reqSize.w);
    maxSize.h = std::max(maxSize.h, reqSize.h);
  }
  if (hasText()) {
    maxSize.w = std::max(maxSize.w, textWidth());
    maxSize.h = std::max(maxSize.h, textHeight());
  }
  int w = maxSize.w + border().width();
  int h = maxSize.h + border().height();
  ev.setSizeHint(Size(w, h));
}
} // namespace ui
