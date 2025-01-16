// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_REGISTER_MESSAGE_H_INCLUDED
 define UI_REGISTER_MESSAGE_H_INCLUDED
 pragma once
 include "ui/message_type.h"
namespace ui {
class RegisterMessage {
public:
  RegisterMessage();
  operator MessageType() { return m_type; }

private:
  MessageType m_type;
};
} // namespace ui
 endif
