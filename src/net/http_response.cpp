// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Network Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifdef HAVE_CONFIG_H
  #include "config.h"
 endif
 include "net/http_response.h"
 include <ostream>
namespace net {
void HttpResponse::write(const char* data, std::size_t length)
{
  m_stream->write(data, length);
}
} // namespace net
