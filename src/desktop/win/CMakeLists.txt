# KPaint
# Copyright (C) 2024-2025 KiriX Company
# # This program is distributed under the terms of
# the End-User License Agreement for KPaint.

add_library(
    kpaint-thumbnailer
    SHARED
    dllmain.cpp
    exports.def
    thumbnail_handler.cpp
)
target_link_libraries(kpaint-thumbnailer laf-base dio-lib render-lib shlwapi)
