// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_WITH_CEL_H_INCLUDED
 define APP_CMD_WITH_CEL_H_INCLUDED
 pragma once
 include "doc/object_id.h"
namespace doc {
class Cel;
}
namespace app { namespace cmd {
using namespace doc;
class WithCel {
public:
  WithCel(Cel* cel);
  Cel* cel();

private:
  ObjectId m_celId;
};
}} // namespace app::cmd
 endif
