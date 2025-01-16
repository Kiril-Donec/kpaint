// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_UTIL_FILETOKS_H_INCLUDED
 define APP_UTIL_FILETOKS_H_INCLUDED
 pragma once
 include <stdio.h>
void tok_reset_line_num();
int tok_line_num();
char* tok_read(FILE* f, char* buf, char* leavings, int sizeof_leavings);
 endif
