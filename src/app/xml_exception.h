// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_XML_EXCEPTION_H_INCLUDED
 define APP_XML_EXCEPTION_H_INCLUDED
 pragma once
 include "base/exception.h"
namespace tinyxml2 {
class XMLDocument;
}
namespace app {
class XmlException : public base::Exception {
public:
  XmlException(const std::string& filename, const tinyxml2::XMLDocument* doc) noexcept;
};
} // namespace app
 endif
