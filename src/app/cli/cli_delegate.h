// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CLI_CLI_DELEGATE_H_INCLUDED
 define APP_CLI_CLI_DELEGATE_H_INCLUDED
 pragma once
 include <string>
namespace app {
class AppOptions;
class Context;
class DocExporter;
class Params;
struct CliOpenFile;
class CliDelegate {
public:
  virtual ~CliDelegate() {}
  virtual void showHelp(const AppOptions& options) {}
  virtual void showVersion() {}
  virtual void uiMode() {}
  virtual void shellMode() {}
  virtual void batchMode() {}
  virtual void beforeOpenFile(const CliOpenFile& cof) {}
  virtual void afterOpenFile(const CliOpenFile& cof) {}
  virtual void saveFile(Context* ctx, const CliOpenFile& cof) {}
  virtual void loadPalette(Context* ctx, const std::string& filename) {}
  virtual void exportFiles(Context* ctx, DocExporter& exporter) {}
 ifdef ENABLE_SCRIPTING
  virtual int execScript(const std::string& filename, const Params& params) { return 0; }
// endif // ENABLE_SCRIPTING
};
} // namespace app
 endif
