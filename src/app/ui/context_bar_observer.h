// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CONTEXT_BAR_OBSERVER_H_INCLUDED
 define APP_CONTEXT_BAR_OBSERVER_H_INCLUDED
 pragma once
namespace app {
class ContextBarObserver {
public:
  enum DropAction { DropPixels, CancelDrag };
  virtual ~ContextBarObserver() {}
  virtual void onDropPixels(DropAction action) {}
};
} // namespace app
 endif
