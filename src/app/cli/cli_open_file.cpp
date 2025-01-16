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
 include "app/cli/cli_open_file.h"
 include "app/doc.h"
 include "app/file/file.h"
 include "doc/sprite.h"
 include "doc/tag.h"
 include "doc/tags.h"
namespace app {
FileOpROI CliOpenFile::roi() const
{
  ASSERT(document);
  SelectedFrames selFrames;
  if (hasFrameRange())
    selFrames.insert(fromFrame, toFrame);
  return FileOpROI(document,
                   document->sprite()->bounds(),
                   slice,
                   tag,
                   FramesSequence(selFrames),
                   true);
}
} // namespace app
