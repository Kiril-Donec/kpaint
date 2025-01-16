// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document IO Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DIO_ASEPRITE_COMMON_H_INCLUDED
 define DIO_ASEPRITE_COMMON_H_INCLUDED
 pragma once
 include "base/ints.h"
 include <map>
 include <string>
 define ASE_FILE_MAGIC                   0xA5E0
 define ASE_FILE_FRAME_MAGIC             0xF1FA
 define ASE_FILE_FLAG_LAYER_WITH_OPACITY 1
 define ASE_FILE_CHUNK_FLI_COLOR2        4
 define ASE_FILE_CHUNK_FLI_COLOR         11
 define ASE_FILE_CHUNK_LAYER             0x2004
 define ASE_FILE_CHUNK_CEL               0x2005
 define ASE_FILE_CHUNK_CEL_EXTRA         0x2006
 define ASE_FILE_CHUNK_COLOR_PROFILE     0x2007
 define ASE_FILE_CHUNK_EXTERNAL_FILE     0x2008
 define ASE_FILE_CHUNK_MASK              0x2016
 define ASE_FILE_CHUNK_PATH              0x2017
 define ASE_FILE_CHUNK_TAGS              0x2018
 define ASE_FILE_CHUNK_PALETTE           0x2019
 define ASE_FILE_CHUNK_USER_DATA         0x2020
 define ASE_FILE_CHUNK_SLICES                                                                      \
  0x2021 // Deprecated chunk (used on dev versions only between v1.2-beta7 and v1.2-beta8)
 define ASE_FILE_CHUNK_SLICE              0x2022
 define ASE_FILE_CHUNK_TILESET            0x2023
 define ASE_FILE_LAYER_IMAGE              0
 define ASE_FILE_LAYER_GROUP              1
 define ASE_FILE_LAYER_TILEMAP            2
 define ASE_FILE_RAW_CEL                  0
 define ASE_FILE_LINK_CEL                 1
 define ASE_FILE_COMPRESSED_CEL           2
 define ASE_FILE_COMPRESSED_TILEMAP       3
 define ASE_FILE_NO_COLOR_PROFILE         0
 define ASE_FILE_SRGB_COLOR_PROFILE       1
 define ASE_FILE_ICC_COLOR_PROFILE        2
 define ASE_COLOR_PROFILE_FLAG_GAMMA      1
 define ASE_PALETTE_FLAG_HAS_NAME         1
 define ASE_USER_DATA_FLAG_HAS_TEXT       1
 define ASE_USER_DATA_FLAG_HAS_COLOR      2
 define ASE_USER_DATA_FLAG_HAS_PROPERTIES 4
 define ASE_CEL_EXTRA_FLAG_PRECISE_BOUNDS 1
 define ASE_SLICE_FLAG_HAS_CENTER_BOUNDS  1
 define ASE_SLICE_FLAG_HAS_PIVOT_POINT    2
 define ASE_TILESET_FLAG_EXTERNAL_FILE    1
 define ASE_TILESET_FLAG_EMBEDDED         2
 define ASE_TILESET_FLAG_ZERO_IS_NOTILE   4
 define ASE_TILESET_FLAG_MATCH_XFLIP      8
 define ASE_TILESET_FLAG_MATCH_YFLIP      16
 define ASE_TILESET_FLAG_MATCH_DFLIP      32
 define ASE_EXTERNAL_FILE_PALETTE         0
 define ASE_EXTERNAL_FILE_TILESET         1
 define ASE_EXTERNAL_FILE_EXTENSION       2
 define ASE_EXTERNAL_FILE_TILE_MANAGEMENT 3
 define ASE_EXTERNAL_FILE_TYPES           4
namespace dio {
struct AsepriteHeader {
  long pos; // TODO used by the encoder in app project
  uint32_t size;
  uint16_t magic;
  uint16_t frames;
  uint16_t width;
  uint16_t height;
  uint16_t depth;
  uint32_t flags;
  uint16_t speed; // Deprecated, use "duration" of AsepriteFrameHeader
  uint32_t next;
  uint32_t frit;
  uint8_t transparent_index;
  uint8_t ignore[3];
  uint16_t ncolors;
  uint8_t pixel_width;
  uint8_t pixel_height;
  int16_t grid_x;
  int16_t grid_y;
  uint16_t grid_width;
  uint16_t grid_height;
};
struct AsepriteFrameHeader {
  uint32_t size;
  uint16_t magic;
  uint32_t chunks;
  uint16_t duration;
};
struct AsepriteChunk {
  int type;
  int start;
};
class AsepriteExternalFiles {
public:
  struct Item {
    std::string fn; // filename
    uint8_t type;   // type has one of the ASE_EXTERNAL_FILE_* values
  };
  using Items = std::map<uint32_t, Item>;
  bool empty() const { return m_items.empty(); }
  const Items& items() const { return m_items; }
  // Adds the external filename with the next autogenerated ID and specified type.
  uint32_t insert(const uint8_t type, const std::string& filename);
  // Adds the external filename using the specified ID and type.
  void insert(uint32_t id, const uint8_t type, const std::string& filename);
  // Returns true if the given filename exists in the external files
  // chunk, and assign its ID in "id"
  bool getIDByFilename(const uint8_t type, const std::string& fn, uint32_t& id) const;
  bool getFilenameByID(uint32_t id, std::string& fn) const;
  std::string tileManagementPlugin() const;

private:
  uint32_t m_lastid = 0; // ID used to add new items
  Items m_items;
  std::map<std::string, uint32_t> m_toID[ASE_EXTERNAL_FILE_TYPES];
};
} // namespace dio
 endif
