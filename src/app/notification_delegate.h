// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_NOTIFICATION_DELEGATE_H_INCLUDED
 define APP_NOTIFICATION_DELEGATE_H_INCLUDED
 pragma once
 include <string>
namespace app {
class INotificationDelegate {
public:
  virtual ~INotificationDelegate() {}
  virtual std::string notificationText() = 0;
  virtual void notificationClick() = 0;
};
} // namespace app
 endif
