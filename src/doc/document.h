// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_DOCUMENT_H_INCLUDED
 define DOC_DOCUMENT_H_INCLUDED
 pragma once
 include "doc/object.h"
 include "doc/sprites.h"
 include <string>
namespace doc {
class Document : public Object {
public:
  Document();
  ~Document();
  const Sprites& sprites() const { return m_sprites; }
  Sprites& sprites() { return m_sprites; }
  const Sprite* sprite() const { return m_sprites.empty() ? NULL : m_sprites.front(); }
  Sprite* sprite() { return m_sprites.empty() ? NULL : m_sprites.front(); }
  int width() const;
  int height() const;
  ColorMode colorMode() const;
  std::string name() const;
  const std::string& filename() const { return m_filename; }
  void setFilename(const std::string& filename);

protected:
  virtual void onFileNameChange();

private:
  std::string m_filename; // Document's file name. From where it was
                          // loaded, where it is saved.
  Sprites m_sprites;
};
} // namespace doc
 endif
