// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "ui/manager.h"
 include "ui/message_loop.h"
namespace ui {
MessageLoop::MessageLoop(Manager* manager) : m_manager(manager)
{
}
void MessageLoop::pumpMessages()
{
  if (m_manager->generateMessages())
    m_manager->dispatchMessages();
}
} // namespace ui
