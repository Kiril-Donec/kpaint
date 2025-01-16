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
 include "app/i18n/strings.h"
 include "app/ui/rgbmap_algorithm_selector.h"
namespace app {
RgbMapAlgorithmSelector::RgbMapAlgorithmSelector()
{
  // addItem() must match the RgbMapAlgorithm enum
  static_assert(int(doc::RgbMapAlgorithm::DEFAULT) == 0 && int(doc::RgbMapAlgorithm::RGB5A3) == 1 &&
                  int(doc::RgbMapAlgorithm::OCTREE) == 2,
                "Unexpected doc::RgbMapAlgorithm values");
  addItem(Strings::rgbmap_algorithm_selector_default());
  addItem(Strings::rgbmap_algorithm_selector_rgb5a3());
  addItem(Strings::rgbmap_algorithm_selector_octree());
  algorithm(doc::RgbMapAlgorithm::DEFAULT);
}
doc::RgbMapAlgorithm RgbMapAlgorithmSelector::algorithm()
{
  return (doc::RgbMapAlgorithm)getSelectedItemIndex();
}
void RgbMapAlgorithmSelector::algorithm(const doc::RgbMapAlgorithm mapAlgo)
{
  setSelectedItemIndex((int)mapAlgo);
}
} // namespace app
