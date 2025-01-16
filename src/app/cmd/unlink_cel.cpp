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
 include "app/cmd/unlink_cel.h"
 include "doc/cel.h"
 include "doc/image.h"
 include "doc/layer.h"
 include "doc/sprite.h"
namespace app { namespace cmd {
using namespace doc;
UnlinkCel::UnlinkCel(Cel* cel)
  : WithCel(cel)
  , m_newImageId(0)
  , m_oldCelDataId(cel->dataRef()->id())
  , m_newCelDataId(0)
{
  ASSERT(cel->links());
}
void UnlinkCel::onExecute()
{
  Cel* cel = this->cel();
  CelDataRef oldCelData = cel->sprite()->getCelDataRef(m_oldCelDataId);
  ASSERT(oldCelData);
  ImageRef imgCopy(Image::createCopy(oldCelData->image()));
  CelDataRef celDataCopy(new CelData(*oldCelData));
  celDataCopy->setImage(imgCopy, cel->layer());
  celDataCopy->setUserData(oldCelData->userData());
  if (m_newImageId) {
    imgCopy->setId(m_newImageId);
    celDataCopy->setId(m_newCelDataId);
  }
  else {
    m_newImageId = imgCopy->id();
    m_newCelDataId = celDataCopy->id();
  }
  cel->setDataRef(celDataCopy);
  cel->incrementVersion();
}
void UnlinkCel::onUndo()
{
  Cel* cel = this->cel();
  CelDataRef oldCelData = cel->sprite()->getCelDataRef(m_oldCelDataId);
  ASSERT(oldCelData);
  cel->setDataRef(oldCelData);
  cel->incrementVersion();
}
}} // namespace app::cmd
