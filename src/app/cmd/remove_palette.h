// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_REMOVE_PALETTE_H_INCLUDED
 define APP_CMD_REMOVE_PALETTE_H_INCLUDED
 pragma once
 include "app/cmd/add_palette.h"
namespace app { namespace cmd {
using namespace doc;
class RemovePalette : public AddPalette {
public:
  RemovePalette(Sprite* sprite, Palette* pal);

protected:
  void onExecute() override;
  void onUndo() override;
};
}} // namespace app::cmd
 endif
