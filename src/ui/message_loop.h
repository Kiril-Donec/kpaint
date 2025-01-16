// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_MESSAGE_LOOP_H_INCLUDED
 define UI_MESSAGE_LOOP_H_INCLUDED
 pragma once
namespace ui {
class Manager;
class MessageLoop {
public:
  MessageLoop(Manager* manager);
  void pumpMessages();

private:
  Manager* m_manager;
};
} // namespace ui
 endif
