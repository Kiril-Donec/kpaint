// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_WITH_TAG_H_INCLUDED
 define APP_CMD_WITH_TAG_H_INCLUDED
 pragma once
 include "doc/object_id.h"
namespace doc {
class Tag;
}
namespace app { namespace cmd {
using namespace doc;
class WithTag {
public:
  WithTag(Tag* tag);
  Tag* tag();

private:
  ObjectId m_tagId;
};
}} // namespace app::cmd
 endif
