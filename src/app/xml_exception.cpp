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
 include "app/xml_exception.h"
 include "fmt/format.h"
 include "tinyxml2.h"
namespace app {
using namespace tinyxml2;
XmlException::XmlException(const std::string& filename, const XMLDocument* doc) noexcept
{
  try {
    setMessage(fmt::format("Error in XML file '{}' (line {})\nError {}: {}",
                           filename,
                           doc->ErrorLineNum(),
                           int(doc->ErrorID()),
                           doc->ErrorStr())
                 .c_str());
  }
  catch (...) {
    // No throw
  }
}
} // namespace app
