// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_COLOR_SPECTRUM_H_INCLUDED
 define APP_UI_COLOR_SPECTRUM_H_INCLUDED
 pragma once
 include "app/ui/color_selector.h"
namespace app {
class ColorSpectrum : public ColorSelector {
public:
  ColorSpectrum();

protected:
 if SK_ENABLE_SKSL
  const char* getMainAreaShader() override;
  const char* getBottomBarShader() override;
  void setShaderParams(SkRuntimeShaderBuilder& builder, bool main) override;
 endif
  app::Color getMainAreaColor(const int u, const int umax, const int v, const int vmax) override;
  app::Color getBottomBarColor(const int u, const int umax) override;
  void onPaintMainArea(ui::Graphics* g, const gfx::Rect& rc) override;
  void onPaintBottomBar(ui::Graphics* g, const gfx::Rect& rc) override;
  void onPaintSurfaceInBgThread(os::Surface* s,
                                const gfx::Rect& main,
                                const gfx::Rect& bottom,
                                const gfx::Rect& alpha,
                                bool& stop) override;
  int onNeedsSurfaceRepaint(const app::Color& newColor) override;

private:
  std::string m_mainShader;
  std::string m_bottomShader;
};
} // namespace app
 endif
