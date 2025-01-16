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
 include "app/cmd/set_mask_position.h"
 include "app/doc.h"
 include "doc/mask.h"
namespace app { namespace cmd {
SetMaskPosition::SetMaskPosition(Doc* doc, const gfx::Point& pos)
  : WithDocument(doc)
  , m_oldPosition(doc->mask()->bounds().origin())
  , m_newPosition(pos)
{
}
void SetMaskPosition::onExecute()
{
  setMaskPosition(m_newPosition);
}
void SetMaskPosition::onUndo()
{
  setMaskPosition(m_oldPosition);
}
void SetMaskPosition::setMaskPosition(const gfx::Point& pos)
{
  Doc* doc = document();
  doc->mask()->setOrigin(pos.x, pos.y);
  doc->resetTransformation();
  doc->notifySelectionChanged();
}
}} // namespace app::cmd
