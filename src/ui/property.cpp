// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 include "ui/property.h"
namespace ui {
Property::Property(const std::string& name) : m_name(name)
{
}
Property::~Property()
{
}
std::string Property::getName() const
{
  return m_name;
}
} // namespace ui
