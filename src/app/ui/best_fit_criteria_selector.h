// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UI_BEST_FIT_CRITERIA_SELECTOR_H_INCLUDED
 define APP_UI_BEST_FIT_CRITERIA_SELECTOR_H_INCLUDED
 pragma once
 include "doc/fit_criteria.h"
 include "doc/palette.h"
 include "ui/combobox.h"
namespace app {
class BestFitCriteriaSelector : public ui::ComboBox {
public:
  BestFitCriteriaSelector();
  doc::FitCriteria criteria();
  void criteria(doc::FitCriteria criteria);
};
} // namespace app
 endif
