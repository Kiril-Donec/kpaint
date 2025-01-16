# KPaint
# Copyright (C) 2024-2025 KiriX Company
# # This program is distributed under the terms of
# the End-User License Agreement for KPaint.

add_library(fixmath-lib fixmath.cpp)
target_link_libraries(fixmath-lib laf-base)
target_include_directories(fixmath-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)
