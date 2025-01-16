// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_IMAGE_REF_H_INCLUDED
 define DOC_IMAGE_REF_H_INCLUDED
 pragma once
 include "doc/image.h"
 include <memory>
namespace doc {
typedef std::shared_ptr<Image> ImageRef;
} // namespace doc
 endif
