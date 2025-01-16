// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_KEY_CONTEXT_H_INCLUDED
 define APP_UI_KEY_CONTEXT_H_INCLUDED
 pragma once
namespace app {
enum class KeyContext {
  Any,
  Normal,
  SelectionTool,
  TranslatingSelection,
  ScalingSelection,
  RotatingSelection,
  MoveTool,
  FreehandTool,
  ShapeTool,
  MouseWheel,
  FramesSelection,
};
} // namespace app
 endif
