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
 include "app/cmd/clear_image.h"
 include "app/doc.h"
 include "doc/image.h"
 include "doc/primitives.h"
namespace app { namespace cmd {
using namespace doc;
ClearImage::ClearImage(Image* image, color_t color) : WithImage(image), m_color(color)
{
}
void ClearImage::onExecute()
{
  Image* image = this->image();
  ASSERT(!m_copy);
  m_copy.reset(Image::createCopy(image));
  clear_image(image, m_color);
  image->incrementVersion();
}
void ClearImage::onUndo()
{
  Image* image = this->image();
  copy_image(image, m_copy.get());
  m_copy.reset();
  image->incrementVersion();
}
}} // namespace app::cmd
