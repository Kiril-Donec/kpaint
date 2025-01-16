# KPaint
# Copyright (C) 2024-2025 KiriX Company
# # This program is distributed under the terms of
# the End-User License Agreement for KPaint.

add_library(
    dio-lib
    aseprite_common.cpp
    aseprite_decoder.cpp
    decode_file.cpp
    decoder.cpp
    detect_format.cpp
    stdio.cpp
)
if(ENABLE_DEVMODE)
    target_compile_definitions(dio-lib PUBLIC -DENABLE_DEVMODE)
endif()
target_link_libraries(
    dio-lib
    ${ZLIB_LIBRARIES}
    fmt
    flic-lib
    laf-base
    fixmath-lib
    doc-lib
)
target_include_directories(dio-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)
