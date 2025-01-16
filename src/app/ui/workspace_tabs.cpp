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
 include "app/ui/workspace_tabs.h"
namespace app {
using namespace ui;
WorkspaceTabs::WorkspaceTabs(TabsDelegate* tabsDelegate) : Tabs(tabsDelegate), m_panel(nullptr)
{
}
WorkspaceTabs::~WorkspaceTabs()
{
}
void WorkspaceTabs::setPanel(WorkspacePanel* panel)
{
  ASSERT(!m_panel);
  m_panel = panel;
}
} // namespace app
