// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_I18N_XML_TRANSLATOR_INCLUDED
 define APP_I18N_XML_TRANSLATOR_INCLUDED
 pragma once
 include <string>
namespace tinyxml2 {
class XMLElement;
}
namespace app {
class XmlTranslator {
public:
  std::string operator()(const tinyxml2::XMLElement* elem, const char* attrName);
  void clearStringIdPrefix();
  void setStringIdPrefix(const char* prefix);

private:
  std::string m_stringIdPrefix;
};
} // namespace app
 endif
