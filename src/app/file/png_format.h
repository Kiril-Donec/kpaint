// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_FILE_PNG_FORMAT_H_INCLUDED
 define APP_FILE_PNG_FORMAT_H_INCLUDED
 pragma once
namespace app {
 This can be used to save opaque png files with one pixel with
 alpha=254, which is needed by Twitter to publish png images and
 avoid automatic conversion to jpg files.
class PngEncoderOneAlphaPixel {
public:
  PngEncoderOneAlphaPixel(bool state);
  ~PngEncoderOneAlphaPixel();
};
} // namespace app
 endif
