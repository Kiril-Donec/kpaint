// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "ui/manager.h"
 include "ui/overlay.h"
 include "ui/overlay_manager.h"
 include <algorithm>
namespace ui {
static bool zorder_less_than(const OverlayRef& a, const OverlayRef& b)
{
  return *a < *b;
}
OverlayManager* OverlayManager::m_singleton = nullptr;
OverlayManager* OverlayManager::instance()
{
  if (m_singleton == nullptr)
    m_singleton = new OverlayManager;
  return m_singleton;
}
void OverlayManager::destroyInstance()
{
  delete m_singleton;
}
OverlayManager::OverlayManager()
{
}
OverlayManager::~OverlayManager()
{
}
void OverlayManager::addOverlay(const OverlayRef& overlay)
{
  iterator it = std::lower_bound(begin(), end(), overlay, zorder_less_than);
  m_overlays.insert(it, overlay);
}
void OverlayManager::removeOverlay(const OverlayRef& overlay)
{
  if (overlay)
    overlay->restoreOverlappedArea(gfx::Rect());
  iterator it = std::find(begin(), end(), overlay);
  ASSERT(it != end());
  if (it != end())
    m_overlays.erase(it);
}
void OverlayManager::restoreOverlappedAreas(const gfx::Rect& restoreBounds)
{
  if (m_overlays.empty())
    return;
  for (auto& overlay : *this)
    overlay->restoreOverlappedArea(restoreBounds);
}
void OverlayManager::drawOverlays()
{
  if (m_overlays.empty())
    return;
  for (auto& overlay : *this)
    overlay->captureOverlappedArea();
  for (auto& overlay : *this)
    overlay->drawOverlay();
}
} // namespace ui
