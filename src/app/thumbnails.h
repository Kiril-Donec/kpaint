// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company

Carlo Caputo
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_THUMBNAILS_H_INCLUDED
 define APP_THUMBNAILS_H_INCLUDED
 pragma once
 include "gfx/size.h"
 include "os/surface.h"
  namespace doc
{
  class Cel;
}
namespace os {
class Surface;
}
namespace app { namespace thumb {
os::SurfaceRef get_cel_thumbnail(const doc::Cel* cel, const gfx::Size& fitInSize);
}} // namespace app::thumb
 endif
