// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint UI Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef UI_WIDGET_TYPE_H_INCLUDED
 define UI_WIDGET_TYPE_H_INCLUDED
 pragma once
namespace ui {
 Widget types.
enum WidgetType : int {
  // Undefined (or anonymous) widget type.
  kGenericWidget,
  // Known widgets.
  kBoxWidget,
  kButtonWidget,
  kCheckWidget,
  kComboBoxWidget,
  kEntryWidget,
  kGridWidget,
  kImageViewWidget,
  kLabelWidget,
  kLinkLabelWidget,
  kListBoxWidget,
  kListItemWidget,
  kManagerWidget,
  kMenuBarWidget,
  kMenuBoxWidget,
  kMenuItemWidget,
  kMenuWidget,
  kPanelWidget,
  kRadioWidget,
  kSeparatorWidget,
  kSliderWidget,
  kSplitterWidget,
  kTextBoxWidget,
  kViewScrollbarWidget,
  kViewViewportWidget,
  kViewWidget,
  kWindowWidget,
  kWindowTitleLabelWidget,
  kWindowCloseButtonWidget,
  // User widgets.
  kFirstUserWidget,
  kLastUserWidget = 0x7fffffff
};
} // namespace ui
// endif // UI_WIDGET_TYPE_H_INCLUDED
