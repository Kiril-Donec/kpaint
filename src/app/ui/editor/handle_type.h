// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_EDITOR_HANDLE_TYPE_H_INCLUDED
 define APP_UI_EDITOR_HANDLE_TYPE_H_INCLUDED
 pragma once
namespace app {
 Handles available to transform a region of pixels in the editor.
enum HandleType {
  // No handle selected
  NoHandle,
  // This is the handle to move the pixels region, generally, the
  // whole region activates this handle.
  MovePixelsHandle,
  MoveSelectionHandle,
  // One of the region's corders to scale.
  ScaleNWHandle,
  ScaleNHandle,
  ScaleNEHandle,
  ScaleWHandle,
  ScaleEHandle,
  ScaleSWHandle,
  ScaleSHandle,
  ScaleSEHandle,
  // Rotate from corners
  RotateNWHandle,
  RotateNEHandle,
  RotateSWHandle,
  RotateSEHandle,
  // Skew from sides
  SkewNHandle,
  SkewWHandle,
  SkewEHandle,
  SkewSHandle,
  // Handle used to move the pivot
  PivotHandle,
};
} // namespace app
 endif
