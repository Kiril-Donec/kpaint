// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_TILESET_IO_H_INCLUDED
 define DOC_TILESET_IO_H_INCLUDED
 pragma once
 include "base/ints.h"
 include "doc/serial_format.h"
 include <iosfwd>
namespace doc {
 Tileset serialization format. This field didn't exist in KPaint
 v1.3-alpha3 (so read8() fails = 0)
enum class TilesetSerialFormat : uint8_t {
  // Without version field.
  Ver0 = 0,
  // Extra BYTE with special flags to check the tileset version.
  Ver1 = 1,
  // Tileset has UserData now.
  Ver2 = 2,
  // Tileset name (was missing originally) + each tileset's tile has
  // UserData now.
  Ver3 = 3,
  LastVer = Ver3
};
class CancelIO;
class Sprite;
class Tileset;
bool write_tileset(std::ostream& os, const Tileset* tileset, CancelIO* cancel = nullptr);
Tileset* read_tileset(std::istream& is,
                      Sprite* sprite,
                      bool setId = true,
                      TilesetSerialFormat* tilesetSerial = nullptr,
                      SerialFormat serial = SerialFormat::LastVer);
} // namespace doc
 endif
