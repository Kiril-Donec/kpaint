// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_RES_RESOURCES_LOADER_H_INCLUDED
 define APP_RES_RESOURCES_LOADER_H_INCLUDED
 pragma once
 include "base/concurrent_queue.h"
 include <memory>
 include <thread>
namespace app {
class Resource;
class ResourcesLoaderDelegate;
class ResourcesLoader {
public:
  ResourcesLoader(std::unique_ptr<ResourcesLoaderDelegate>&& delegate);
  ~ResourcesLoader();
  void cancel();
  bool isDone() const { return m_done; }
  bool next(std::unique_ptr<Resource>& resource);
  void reload();

private:
  void threadLoadResources();
  std::thread* createThread();
  typedef base::concurrent_queue<Resource*> Queue;
  std::unique_ptr<ResourcesLoaderDelegate> m_delegate;
  bool m_done;
  bool m_cancel;
  Queue m_queue;
  std::unique_ptr<std::thread> m_thread;
};
} // namespace app
 endif
