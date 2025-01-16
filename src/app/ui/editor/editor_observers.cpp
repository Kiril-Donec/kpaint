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
 include "app/ui/editor/editor_observer.h"
 include "app/ui/editor/editor_observers.h"
namespace app {
void EditorObservers::notifyDestroyEditor(Editor* editor)
{
  notify_observers(&EditorObserver::onDestroyEditor, editor);
}
void EditorObservers::notifyStateChanged(Editor* editor)
{
  notify_observers(&EditorObserver::onStateChanged, editor);
}
void EditorObservers::notifyScrollChanged(Editor* editor)
{
  notify_observers(&EditorObserver::onScrollChanged, editor);
}
void EditorObservers::notifyZoomChanged(Editor* editor)
{
  notify_observers(&EditorObserver::onZoomChanged, editor);
}
void EditorObservers::notifyBeforeFrameChanged(Editor* editor)
{
  notify_observers(&EditorObserver::onBeforeFrameChanged, editor);
}
void EditorObservers::notifyAfterFrameChanged(Editor* editor)
{
  notify_observers(&EditorObserver::onAfterFrameChanged, editor);
}
void EditorObservers::notifyBeforeLayerChanged(Editor* editor)
{
  notify_observers(&EditorObserver::onBeforeLayerChanged, editor);
}
void EditorObservers::notifyAfterLayerChanged(Editor* editor)
{
  notify_observers(&EditorObserver::onAfterLayerChanged, editor);
}
} // namespace app
