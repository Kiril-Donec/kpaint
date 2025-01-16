// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Desktop Integration Module
Gabriel Rauter
// // Licensed under the the MIT License (https://opensource.org/licenses/MIT).
 include "aseprite_thumb_creator.h"
 include <QCryptographicHash>
 include <QFile>
 include <QImage>
 include <QProcess>
 include <QStringList>
 include <cstdio>
  extern "C" { Q_DECL_EXPORT ThumbCreator * new_creator(){ return new AsepriteThumbCreator();
}
}
;
bool AsepriteThumbCreator::create(const QString& path, int width, int height, QImage& img)
{
  QProcess process;
  QStringList list;
  QString tmpFile = QString(
    QCryptographicHash::hash(path.toLocal8Bit(), QCryptographicHash::Md5).toHex());
  list << path << tmpFile;
  process.start(QString("kpaint-thumbnailer"), list);
  if (!process.waitForFinished())
    return false;
  img.load(tmpFile);
  QFile::remove(tmpFile);
  return true;
}
AsepriteThumbCreator::Flags AsepriteThumbCreator::flags() const
{
  return DrawFrame;
}
