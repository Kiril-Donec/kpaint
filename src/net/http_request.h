// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Network Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef NET_HTTP_REQUEST_H_INCLUDED
 define NET_HTTP_REQUEST_H_INCLUDED
 pragma once
 include "base/disable_copying.h"
 include <string>
namespace net {
class HttpHeaders;
class HttpRequestImpl;
class HttpResponse;
class HttpRequest {
public:
  HttpRequest(const std::string& url);
  ~HttpRequest();
  void setHeaders(const HttpHeaders& headers);
  bool send(HttpResponse& response);
  void abort();

private:
  HttpRequestImpl* m_impl;
  DISABLE_COPYING(HttpRequest);
};
} // namespace net
 endif
