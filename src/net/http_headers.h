// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Network Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef NET_HTTP_HEADERS_H_INCLUDED
 define NET_HTTP_HEADERS_H_INCLUDED
 pragma once
 include <map>
 include <string>
namespace net {
class HttpHeaders {
public:
  typedef std::map<std::string, std::string> Map;
  typedef Map::iterator iterator;
  typedef Map::const_iterator const_iterator;
  iterator begin() { return m_map.begin(); }
  iterator end() { return m_map.end(); }
  const_iterator begin() const { return m_map.begin(); }
  const_iterator end() const { return m_map.end(); }
  void setHeader(const std::string& name, const std::string& value);

private:
  Map m_map;
};
} // namespace net
// endif // NET_HTTP_HEADERS_H_INCLUDED
