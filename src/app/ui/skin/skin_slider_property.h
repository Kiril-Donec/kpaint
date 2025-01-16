// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_SKIN_SKIN_SLIDER_PROPERTY_H_INCLUDED
 define APP_UI_SKIN_SKIN_SLIDER_PROPERTY_H_INCLUDED
 pragma once
 include "app/ui/skin/skin_property.h"
 include "gfx/rect.h"
 include <memory>
namespace ui {
class Slider;
class Graphics;
} // namespace ui
namespace app { namespace skin {
class ISliderBgPainter {
public:
  virtual ~ISliderBgPainter() {}
  virtual void paint(ui::Slider* slider, ui::Graphics* graphics, const gfx::Rect& rc) = 0;
};
class SkinSliderProperty : public ui::Property {
public:
  static const char* Name;
  // The given painter is deleted automatically when this
  // property the destroyed.
  SkinSliderProperty(ISliderBgPainter* painter);
  ~SkinSliderProperty();
  ISliderBgPainter* getBgPainter() const;

private:
  ISliderBgPainter* m_painter;
};
}} // namespace app::skin
 endif
