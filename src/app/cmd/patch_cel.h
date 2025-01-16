// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_PATCH_CEL_H_INCLUDED
 define APP_CMD_PATCH_CEL_H_INCLUDED
 pragma once
 include "app/cmd/with_cel.h"
 include "app/cmd_sequence.h"
 include "gfx/fwd.h"
 include "gfx/point.h"
namespace doc {
class Cel;
class Image;
} // namespace doc
namespace app { namespace cmd {
class PatchCel : public CmdSequence,
                 public WithCel {
public:
  PatchCel(doc::Cel* dstCel,
           const doc::Image* patch,
           const gfx::Region& patchedRegion,
           const gfx::Point& patchPos);

protected:
  void onExecute() override;
  const doc::Image* m_patch;
  const gfx::Region& m_region;
  gfx::Point m_pos;
};
}} // namespace app::cmd
 endif
