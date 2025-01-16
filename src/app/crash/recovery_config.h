// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CRASH_RECOVERY_CONFIG_H_INCLUDED
 define APP_CRASH_RECOVERY_CONFIG_H_INCLUDED
 pragma once
namespace app { namespace crash {
 Structure to store the configuration from Preferences instance to
 avoid accessing to Preferences from a non-UI thread.
struct RecoveryConfig {
  double dataRecoveryPeriod;
  int keepEditedSpriteDataFor;
};
}} // namespace app::crash
 endif
