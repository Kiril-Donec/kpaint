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
 include "app/cmd/set_tag_repeat.h"
 include "doc/tag.h"
namespace app { namespace cmd {
SetTagRepeat::SetTagRepeat(Tag* tag, int repeat)
  : WithTag(tag)
  , m_oldRepeat(tag->repeat())
  , m_newRepeat(repeat)
{
}
void SetTagRepeat::onExecute()
{
  tag()->setRepeat(m_newRepeat);
  tag()->incrementVersion();
}
void SetTagRepeat::onUndo()
{
  tag()->setRepeat(m_oldRepeat);
  tag()->incrementVersion();
}
}} // namespace app::cmd
