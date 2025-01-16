# KPaint
# Copyright (C) 2024-2025 KiriX Company
# # This program is distributed under the terms of
# the End-User License Agreement for KPaint.

if(WIN32)
    # Thumbnails for Windows File Explorer
    add_subdirectory(win)
elseif(APPLE)
    # QuickLook preview / macOS Finder
    add_subdirectory(osx)
else(UNIX)
    # Linux-like
    add_subdirectory(linux)
endif()
