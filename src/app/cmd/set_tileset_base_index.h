// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_SET_TILESET_BASE_INDEX_H_INCLUDED
 define APP_CMD_SET_TILESET_BASE_INDEX_H_INCLUDED
 pragma once
 include "app/cmd.h"
 include "app/cmd/with_tileset.h"
namespace app { namespace cmd {
using namespace doc;
class SetTilesetBaseIndex : public Cmd,
                            public WithTileset {
public:
  SetTilesetBaseIndex(Tileset* tileset, int baseIndex);

protected:
  void onExecute() override;
  void onUndo() override;
  size_t onMemSize() const override { return sizeof(*this); }

private:
  int m_oldBaseIndex;
  int m_newBaseIndex;
};
}} // namespace app::cmd
 endif
