// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_DOCUMENT_UNDO_OBSERVER_H_INCLUDED
 define APP_DOCUMENT_UNDO_OBSERVER_H_INCLUDED
 pragma once
namespace undo {
class UndoState;
}
namespace app {
class DocUndo;
class DocUndoObserver {
public:
  virtual ~DocUndoObserver() {}
  virtual void onAddUndoState(DocUndo* history) {}
  virtual void onDeleteUndoState(DocUndo* history, undo::UndoState* state) {}
  virtual void onCurrentUndoStateChange(DocUndo* history) {}
  virtual void onClearRedo(DocUndo* history) {}
  virtual void onTotalUndoSizeChange(DocUndo* history) {}
  virtual void onNewSavedState(DocUndo* history) {}
};
} // namespace app
 endif
