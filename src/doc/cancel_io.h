// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_CANCEL_IO_H_INCLUDED
 define DOC_CANCEL_IO_H_INCLUDED
 pragma once
namespace doc {
class CancelIO {
public:
  virtual ~CancelIO() {}
  virtual bool isCanceled() = 0;
};
} // namespace doc
 endif
