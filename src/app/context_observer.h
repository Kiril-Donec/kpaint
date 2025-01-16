// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CONTEXT_OBSERVER_H_INCLUDED
 define APP_CONTEXT_OBSERVER_H_INCLUDED
 pragma once
namespace app {
class Doc;
class Site;
class ContextObserver {
public:
  virtual ~ContextObserver() {}
  virtual void onActiveSiteChange(const Site& site) {}
};
} // namespace app
 endif
