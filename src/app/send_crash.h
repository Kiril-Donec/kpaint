// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_SEND_CRASH_H_INCLUDED
 define APP_SEND_CRASH_H_INCLUDED
 pragma once
 include "app/notification_delegate.h"
 include "app/task.h"
 include <string>
namespace app {
 if !ENABLE_SENTRY
class SendCrash : public INotificationDelegate {
public:
  static std::string DefaultMemoryDumpFilename();
  ~SendCrash();
  void search();

public: // INotificationDelegate impl
  virtual std::string notificationText() override;
  virtual void notificationClick() override;

private:
  void onClickFilename();
  void onClickDevFilename();

private:
  Task m_task;
  std::string m_dumpFilename;
};
// endif // !ENABLE_SENTRY
} // namespace app
// endif // APP_SEND_CRASH_H_INCLUDED
