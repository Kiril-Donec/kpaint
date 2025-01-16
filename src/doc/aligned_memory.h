// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_ALIGNED_MEMORY_H_INCLUDED
  #pragma once
  #include "base/memory.h"
 Enable DOC_USE_ALIGNED_PIXELS in case that you want to start using
 SIMD optimizations. Probably more testing is required as the
 program was not well-suited for a rowstride > image width.
 #define DOC_USE_ALIGNED_PIXELS 1
  #if DOC_USE_ALIGNED_PIXELS
    #define doc_align_size(size)    (base_align_size(size))
    #define doc_aligned_alloc(size) base_aligned_alloc(size)
    #define doc_aligned_free(ptr)   base_aligned_free(ptr)
  #else
    #define doc_align_size(size)    (size)
    #define doc_aligned_alloc(size) malloc(size)
    #define doc_aligned_free(ptr)   free(ptr)
  #endif
 endif
