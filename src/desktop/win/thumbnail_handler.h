// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 Desktop Integration
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DESKTOP_THUMBNAIL_HANDLER_H_INCLUDED
 define DESKTOP_THUMBNAIL_HANDLER_H_INCLUDED
 include "base/win/comptr.h"
 include <propsys.h>
 include <thumbcache.h>
namespace desktop {
class ThumbnailHandler : public IInitializeWithStream,
                         public IThumbnailProvider {
public:
  static HRESULT CreateInstance(REFIID riid, void** ppvObject);
  // IUnknown
  IFACEMETHODIMP QueryInterface(REFIID riid, void** ppv);
  IFACEMETHODIMP_(ULONG) AddRef();
  IFACEMETHODIMP_(ULONG) Release();
  // IInitializeWithStream
  IFACEMETHODIMP Initialize(IStream* pStream, DWORD grfMode);
  // IThumbnailProvider
  IFACEMETHODIMP GetThumbnail(UINT cx, HBITMAP* phbmp, WTS_ALPHATYPE* pdwAlpha);

private:
  ThumbnailHandler();
  virtual ~ThumbnailHandler();
  long m_ref;
  base::ComPtr<IStream> m_stream;
};
} // namespace desktop
 endif
