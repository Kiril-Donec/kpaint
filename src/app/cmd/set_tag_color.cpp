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
 include "app/cmd/set_tag_color.h"
 include "doc/tag.h"
namespace app { namespace cmd {
SetTagColor::SetTagColor(Tag* tag, doc::color_t color)
  : WithTag(tag)
  , m_oldColor(tag->color())
  , m_newColor(color)
{
}
void SetTagColor::onExecute()
{
  tag()->setColor(m_newColor);
  tag()->incrementVersion();
}
void SetTagColor::onUndo()
{
  tag()->setColor(m_oldColor);
  tag()->incrementVersion();
}
}} // namespace app::cmd
