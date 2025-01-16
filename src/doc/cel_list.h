// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_CEL_LIST_H_INCLUDED
 define DOC_CEL_LIST_H_INCLUDED
 pragma once
 include <vector>
namespace doc {
class Cel;
typedef std::vector<Cel*> CelList;
typedef CelList::iterator CelIterator;
typedef CelList::const_iterator CelConstIterator;
} // namespace doc
// endif // DOC_CEL_LIST_H_INCLUDED
