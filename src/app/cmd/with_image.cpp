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
 include "app/cmd/with_image.h"
 include "doc/image.h"
namespace app { namespace cmd {
using namespace doc;
WithImage::WithImage(Image* image) : m_imageId(image->id())
{
}
Image* WithImage::image()
{
  return get<Image>(m_imageId);
}
}} // namespace app::cmd
