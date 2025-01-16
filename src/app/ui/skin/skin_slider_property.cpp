// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "app/ui/skin/skin_slider_property.h"
namespace app { namespace skin {
const char* SkinSliderProperty::Name = "SkinSliderProperty";
SkinSliderProperty::SkinSliderProperty(ISliderBgPainter* painter)
  : Property(Name)
  , m_painter(painter)
{
}
SkinSliderProperty::~SkinSliderProperty()
{
  delete m_painter;
}
ISliderBgPainter* SkinSliderProperty::getBgPainter() const
{
  return m_painter;
}
}} // namespace app::skin
