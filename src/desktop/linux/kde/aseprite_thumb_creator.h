// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Desktop Integration Module
Gabriel Rauter
// // Licensed under the the MIT License (https://opensource.org/licenses/MIT).
 ifndef _ASEPRITE_THUMBCREATOR_H_
 define _ASEPRITE_THUMBCREATOR_H_
 pragma once
 include <QLoggingCategory>
Q_DECLARE_LOGGING_CATEGORY(LOG_ASEPRITE_THUMBCREATOR)
 include <kio/thumbcreator.h>
  class AsepriteThumbCreator : public ThumbCreator {
public:
  bool create(const QString& path, int width, int height, QImage& img) override;
  Flags flags() const override;
};
 endif
