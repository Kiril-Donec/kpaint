// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_ALERT_H_INCLUDED
 define UI_ALERT_H_INCLUDED
 pragma once
 include "ui/window.h"
 include <memory>
 include <string>
 include <vector>
namespace ui {
class Box;
class CheckBox;
class Slider;
class Alert;
typedef std::shared_ptr<Alert> AlertPtr;
class Alert : public Window {
public:
  Alert();
  void setTitle(const std::string& title);
  void addLabel(const std::string& text, const int align);
  void addSeparator();
  void addButton(const std::string& text);
  void addProgress();
  void setProgress(double progress);
  CheckBox* addCheckBox(const std::string& text);
  int show();
  static AlertPtr create(const std::string& msg);
  static int show(const std::string& msg);

private:
  void processString(std::string& buf);
  Slider* m_progress;
  Box* m_labelsPlaceholder;
  Box* m_buttonsPlaceholder;
  Box* m_progressPlaceholder;
  std::vector<Widget*> m_buttons;
};
} // namespace ui
 endif
