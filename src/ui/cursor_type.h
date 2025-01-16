// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_CURSOR_TYPE_H_INCLUDED
 define UI_CURSOR_TYPE_H_INCLUDED
 pragma once
namespace ui {
enum CursorType {
  kOutsideDisplay = -1,
  kFirstCursorType = 0,
  kNoCursor = 0,
  kArrowCursor,
  kArrowPlusCursor, // Copy element
  kCrosshairCursor,
  kForbiddenCursor,
  kHandCursor,   // Hand to press a link
  kScrollCursor, // Hand to scroll
  kMoveCursor,   // Drag and drop cursor
  kSizeNSCursor,
  kSizeWECursor,
  kSizeNCursor,
  kSizeNECursor,
  kSizeECursor,
  kSizeSECursor,
  kSizeSCursor,
  kSizeSWCursor,
  kSizeWCursor,
  kSizeNWCursor,
  kLastCursorType = kSizeNWCursor,
  kCursorTypes,
  kCustomCursor,
};
} // namespace ui
 endif
