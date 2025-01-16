// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CMD_RESELECT_MASK_H_INCLUDED
 define APP_CMD_RESELECT_MASK_H_INCLUDED
 pragma once
 include "app/cmd.h"
 include "app/cmd/with_document.h"
 include <memory>
namespace doc {
class Mask;
}
namespace app { namespace cmd {
using namespace doc;
class ReselectMask : public Cmd,
                     public WithDocument {
public:
  ReselectMask(Doc* doc);

protected:
  void onExecute() override;
  void onUndo() override;
  size_t onMemSize() const override;

private:
  std::unique_ptr<Mask> m_oldMask;
};
}} // namespace app::cmd
 endif
