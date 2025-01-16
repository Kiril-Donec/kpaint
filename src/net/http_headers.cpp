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
 include "net/http_headers.h"
namespace net {
void HttpHeaders::setHeader(const std::string& name, const std::string& value)
{
  m_map[name] = value;
}
} // namespace net
