// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Steam Wrapper
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef STEAM_STEAM_H_INCLUDED
 define STEAM_STEAM_H_INCLUDED
 pragma once
 include <memory>
namespace steam {
class SteamAPI {
public:
  static SteamAPI* instance();
  SteamAPI();
  ~SteamAPI();
  bool isInitialized() const;
  void runCallbacks();
  bool writeScreenshot(void* rgbBuffer, uint32_t sizeInBytes, int width, int height);

private:
  class Impl;
  std::unique_ptr<Impl> m_impl;
};
} // namespace steam
 endif
