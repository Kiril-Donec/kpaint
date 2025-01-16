# KPaint
# Copyright (C) 2024-2025 KiriX Company
# # This program is distributed under the terms of
# the End-User License Agreement for KPaint.

set(VERSION "1.x-dev")
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/generated_version.h.in"
    "${CMAKE_CURRENT_BINARY_DIR}/generated_version.h"
)
# Custom KPaint website (for testing server-side)
if(NOT "${CUSTOM_WEBSITE_URL}" STREQUAL "")
    add_definitions(-DCUSTOM_WEBSITE_URL="${CUSTOM_WEBSITE_URL}")
endif()
add_library(ver-lib info.c ${gen_ver_fn})
target_include_directories(ver-lib PRIVATE .. "${CMAKE_CURRENT_BINARY_DIR}")
