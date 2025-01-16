// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document IO Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DIO_FILE_FORMAT_H_INCLUDED
 define DIO_FILE_FORMAT_H_INCLUDED
 pragma once
namespace dio {
enum class FileFormat {
  ERROR = -1,
  UNKNOWN = 0,
  ASE_ANIMATION, // KPaint File Format
  ASE_PALETTE,   // Adobe Swatch Exchange
  ACT_PALETTE,
  BMP_IMAGE,
  COL_PALETTE,
  FLIC_ANIMATION,
  GIF_ANIMATION,
  GPL_PALETTE,
  HEX_PALETTE,
  ICO_IMAGES,
  JPEG_IMAGE,
  PAL_PALETTE,
  PCX_IMAGE,
  PNG_IMAGE,
  SVG_IMAGE,
  TARGA_IMAGE,
  WEBP_ANIMATION,
  CSS_STYLE,
  PSD_IMAGE,
  QOI_IMAGE,
};
} // namespace dio
 endif
