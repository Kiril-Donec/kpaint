// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CHECK_UPDATE_DELEGATE_H_INCLUDED
 define APP_CHECK_UPDATE_DELEGATE_H_INCLUDED
 pragma once
 ifdef ENABLE_UPDATER
  #include <string>
namespace app {
class CheckUpdateDelegate {
public:
  virtual ~CheckUpdateDelegate() {}
  virtual void onCheckingUpdates() = 0;
  virtual void onUpToDate() = 0;
  virtual void onNewUpdate(const std::string& url, const std::string& version) = 0;
};
} // namespace app
// endif // ENABLE_UPDATER
// endif // APP_CHECK_UPDATE_DELEGATE_H_INCLUDED
