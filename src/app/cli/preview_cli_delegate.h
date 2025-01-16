// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_CLI_PREVIEW_CLI_DELEGATE_H_INCLUDED
 define APP_CLI_PREVIEW_CLI_DELEGATE_H_INCLUDED
 pragma once
 include "app/cli/cli_delegate.h"
 include <string>
namespace doc {
class LayerGroup;
}
namespace app {
class PreviewCliDelegate : public CliDelegate {
public:
  void showHelp(const AppOptions& programOptions) override;
  void showVersion() override;
  void uiMode() override;
  void shellMode() override;
  void batchMode() override;
  void beforeOpenFile(const CliOpenFile& cof) override;
  void afterOpenFile(const CliOpenFile& cof) override;
  void saveFile(Context* ctx, const CliOpenFile& cof) override;
  void loadPalette(Context* ctx, const std::string& filename) override;
  void exportFiles(Context* ctx, DocExporter& exporter) override;
 ifdef ENABLE_SCRIPTING
  int execScript(const std::string& filename, const Params& params) override;
// endif // ENABLE_SCRIPTING
private:
  void showLayersFilter(const CliOpenFile& cof);
  void showLayerVisibility(const doc::LayerGroup* group, const std::string& indent);
};
} // namespace app
 endif
