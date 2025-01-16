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
 include "app/color_spaces.h"
 include "app/file/file_op_config.h"
namespace app {
void FileOpConfig::fillFromPreferences()
{
  auto& pref = Preferences::instance();
  preserveColorProfile = pref.color.manage();
  filesWithProfile = pref.color.filesWithProfile();
  missingProfile = pref.color.missingProfile();
  newBlend = pref.experimental.newBlend();
  defaultSliceColor = pref.slices.defaultColor();
  workingCS = get_working_rgb_space_from_preferences();
  rgbMapAlgorithm = pref.quantization.rgbmapAlgorithm();
  fitCriteria = pref.quantization.fitCriteria();
  cacheCompressedTilesets = pref.tileset.cacheCompressedTilesets();
}
} // namespace app
