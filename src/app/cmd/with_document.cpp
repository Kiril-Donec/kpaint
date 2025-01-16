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
 include "app/cmd/with_document.h"
 include "app/doc.h"
namespace app { namespace cmd {
WithDocument::WithDocument(Doc* doc) : m_docId(doc->id())
{
}
Doc* WithDocument::document()
{
  return doc::get<Doc>(m_docId);
}
}} // namespace app::cmd
