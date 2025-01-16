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
 include "base/launcher.h"
 include "ui/link_label.h"
 include "ui/message.h"
 include "ui/system.h"
 include "ui/theme.h"
namespace ui {
LinkLabel::LinkLabel(const std::string& urlOrText) : Label(urlOrText), m_url(urlOrText)
{
  disableFlags(IGNORE_MOUSE);
  setType(kLinkLabelWidget);
  initTheme();
}
LinkLabel::LinkLabel(const std::string& url, const std::string& text) : Label(text), m_url(url)
{
  disableFlags(IGNORE_MOUSE);
  setType(kLinkLabelWidget);
  initTheme();
}
void LinkLabel::setUrl(const std::string& url)
{
  m_url = url;
}
bool LinkLabel::onProcessMessage(Message* msg)
{
  switch (msg->type()) {
    case kSetCursorMessage:
      // TODO theme stuff
      if (isEnabled() && hasMouse()) {
        set_mouse_cursor(kHandCursor);
        return true;
      }
      break;
    case kMouseEnterMessage:
    case kMouseLeaveMessage:
      if (isEnabled()) {
        if (hasCapture())
          setSelected(msg->type() == kMouseEnterMessage);
        invalidate(); // TODO theme specific
      }
      break;
    case kMouseMoveMessage:
      if (isEnabled() && hasCapture())
        setSelected(hasMouse());
      break;
    case kMouseDownMessage:
      if (isEnabled()) {
        captureMouse();
        setSelected(true);
      }
      break;
    case kMouseUpMessage:
      if (hasCapture()) {
        releaseMouse();
        setSelected(false);
        invalidate(); // TODO theme specific
        if (hasMouse())
          onClick();
      }
      break;
  }
  return Label::onProcessMessage(msg);
}
void LinkLabel::onClick()
{
  if (!m_url.empty())
    base::launcher::open_url(m_url);
  Click();
}
} // namespace ui
