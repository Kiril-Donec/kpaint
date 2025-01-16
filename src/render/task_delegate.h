// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Render Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef RENDER_TASK_DELEGATE_H_INCLUDED
 define RENDER_TASK_DELEGATE_H_INCLUDED
 pragma once
namespace render {
class TaskDelegate {
public:
  virtual ~TaskDelegate() {}
  virtual void notifyTaskProgress(double progress) = 0;
  virtual bool continueTask() = 0;
};
} // namespace render
// endif // RENDER_TASK_H_INCLUDED
