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
 include "os/font.h"
 include "ui/label.h"
 include "ui/message.h"
 include "ui/size_hint_event.h"
 include "ui/theme.h"
namespace ui {
Label::Label(const std::string& text) : Widget(kLabelWidget)
{
  enableFlags(IGNORE_MOUSE);
  setAlign(LEFT | MIDDLE);
  setText(text);
  initTheme();
}
} // namespace ui
