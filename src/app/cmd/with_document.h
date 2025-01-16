// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_WITH_DOCUMENT_H_INCLUDED
 define APP_CMD_WITH_DOCUMENT_H_INCLUDED
 pragma once
 include "doc/object_id.h"
namespace app {
class Doc;
namespace cmd {
class WithDocument {
public:
  WithDocument(Doc* doc);
  Doc* document();

private:
  doc::ObjectId m_docId;
};
} // namespace cmd
} // namespace app
 endif
