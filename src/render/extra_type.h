// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Render Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef RENDER_EXTRA_TYPE_H_INCLUDED
 define RENDER_EXTRA_TYPE_H_INCLUDED
 pragma once
namespace render {
enum class ExtraType {
  NONE,
  // The extra cel indicates a "patch" for the current layer/frame
  // given in Render::setExtraImage()
  PATCH,
  // The extra cel indicates an extra composition for the current
  // layer/frame.
  COMPOSITE,
  // Composite the current cel two times (don't use the extral cel),
  // but the second time using the extral blend mode.
  OVER_COMPOSITE,
};
} // namespace render
 endif
