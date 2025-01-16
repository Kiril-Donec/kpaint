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
 include "ui/register_message.h"
namespace ui {
static int registered_messages = (int)kFirstRegisteredMessage;
RegisterMessage::RegisterMessage()
{
  m_type = (MessageType)registered_messages++;
}
} // namespace ui
