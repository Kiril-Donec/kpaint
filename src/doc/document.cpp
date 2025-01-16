// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "base/fs.h"
 include "doc/document.h"
 include "doc/sprite.h"
namespace doc {
Document::Document() : Object(ObjectType::Document), m_sprites(this)
{
}
Document::~Document()
{
}
int Document::width() const
{
  return sprite()->width();
}
int Document::height() const
{
  return sprite()->height();
}
ColorMode Document::colorMode() const
{
  return (ColorMode)sprite()->pixelFormat();
}
std::string Document::name() const
{
  return base::get_file_name(m_filename);
}
void Document::setFilename(const std::string& filename)
{
  // Normalize the path (if the filename has a path)
  if (!base::get_file_path(filename).empty())
    m_filename = base::normalize_path(filename);
  else
    m_filename = filename;
  onFileNameChange();
}
void Document::onFileNameChange()
{
  // Do nothing
}
} // namespace doc
