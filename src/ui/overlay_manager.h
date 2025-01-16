// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_OVERLAY_MANAGER_H_INCLUDED
 define UI_OVERLAY_MANAGER_H_INCLUDED
 pragma once
 include "base/ref.h"
 include "gfx/rect.h"
 include "ui/base.h"
 include "ui/overlay.h"
 include <vector>
namespace os {
class Surface;
}
namespace ui {
class OverlayManager {
  friend class UISystem; // So it can call destroyInstance() from ~UISystem
  static OverlayManager* m_singleton;
  OverlayManager();
  ~OverlayManager();

public:
  static OverlayManager* instance();
  void addOverlay(const OverlayRef& overlay);
  void removeOverlay(const OverlayRef& overlay);
  void drawOverlays();
  void restoreOverlappedAreas(const gfx::Rect& bounds);

private:
  static void destroyInstance();
  typedef std::vector<OverlayRef> OverlayList;
  typedef OverlayList::iterator iterator;
  iterator begin() { return m_overlays.begin(); }
  iterator end() { return m_overlays.end(); }
  OverlayList m_overlays;
};
} // namespace ui
 endif
