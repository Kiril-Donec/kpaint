// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_BACKUP_INDICATOR_H_INCLUDED
 define APP_UI_BACKUP_INDICATOR_H_INCLUDED
 pragma once
 include "ui/timer.h"
namespace app {
class BackupIndicator {
public:
  BackupIndicator();
  ~BackupIndicator();
  void start();
  void stop();

private:
  void onTick();
  ui::Timer m_timer;
  bool m_small;
  bool m_running;
};
} // namespace app
 endif
