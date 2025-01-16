// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_PROPERTY_H_INCLUDED
 define UI_PROPERTY_H_INCLUDED
 pragma once
 include "base/disable_copying.h"
 include <memory>
 include <string>
namespace ui {
class Property {
public:
  Property(const std::string& name);
  virtual ~Property();
  std::string getName() const;

private:
  std::string m_name;
  DISABLE_COPYING(Property);
};
typedef std::shared_ptr<Property> PropertyPtr;
} // namespace ui
 endif
