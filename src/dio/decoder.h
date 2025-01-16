// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document IO Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DIO_DECODER_H_INCLUDED
 define DIO_DECODER_H_INCLUDED
 pragma once
 include <cstdint>
 include <cstring>
namespace doc {
class Document;
}
namespace dio {
class DecodeDelegate;
class FileInterface;
class Decoder {
public:
  Decoder();
  virtual ~Decoder();
  virtual void initialize(DecodeDelegate* delegate, FileInterface* f);
  virtual bool decode() = 0;

protected:
  DecodeDelegate* delegate() { return m_delegate; }
  FileInterface* f() { return m_f; }
  uint8_t read8();
  uint16_t read16();
  uint32_t read32();
  uint64_t read64();
  size_t readBytes(uint8_t* buf, size_t n);

private:
  DecodeDelegate* m_delegate;
  FileInterface* m_f;
};
} // namespace dio
 endif
