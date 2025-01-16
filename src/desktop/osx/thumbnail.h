// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 Desktop Integration
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DESKTOP_THUMBNAIL_H_INCLUDED
 define DESKTOP_THUMBNAIL_H_INCLUDED
 include <CoreFoundation/CoreFoundation.h>
 include <CoreGraphics/CoreGraphics.h>
namespace desktop {
CGImageRef get_thumbnail(CFURLRef url, CFDictionaryRef options, CGSize maxSize);
} // namespace desktop
 endif
