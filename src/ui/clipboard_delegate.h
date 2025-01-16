// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_CLIPBOARD_DELEGATE_H_INCLUDED
 define UI_CLIPBOARD_DELEGATE_H_INCLUDED
 pragma once
 include <string>
namespace ui {
class ClipboardDelegate {
public:
  virtual ~ClipboardDelegate() {}
  virtual void setClipboardText(const std::string& text) = 0;
  virtual bool getClipboardText(std::string& text) = 0;
};
} // namespace ui
 endif
