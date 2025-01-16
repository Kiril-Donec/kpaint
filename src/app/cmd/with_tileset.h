// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_WITH_TILESET_H_INCLUDED
 define APP_CMD_WITH_TILESET_H_INCLUDED
 pragma once
 include "doc/object_id.h"
namespace doc {
class Tileset;
}
namespace app { namespace cmd {
class WithTileset {
public:
  WithTileset(doc::Tileset* tileset);
  doc::Tileset* tileset();

private:
  doc::ObjectId m_tilesetId;
};
}} // namespace app::cmd
 endif
