// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_DOCS_OBSERVER_H_INCLUDED
 define APP_DOCS_OBSERVER_H_INCLUDED
 pragma once
namespace app {
class Doc;
class CreateDocArgs {
public:
  CreateDocArgs() : m_doc(nullptr) {}
  Doc* document() { return m_doc; }
  void setDocument(Doc* doc) { m_doc = doc; }

private:
  Doc* m_doc;
};
class DocsObserver {
public:
  virtual ~DocsObserver() {}
  virtual void onAddDocument(Doc* doc) {}
  virtual void onRemoveDocument(Doc* doc) {}
};
} // namespace app
 endif
