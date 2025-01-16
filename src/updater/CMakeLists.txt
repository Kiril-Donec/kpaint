# KPaint
# Copyright (C) 2024-2025 KiriX Company
# This program is distributed under the terms of
# the End-User License Agreement for KPaint.

add_library(updater-lib user_agent.cpp)
target_link_libraries(updater-lib laf-base ver-lib)
# Only when ENABLE_UPDATER is ON we'll enable the "check for update" portion of the library.
if(ENABLE_UPDATER)
    target_sources(updater-lib PRIVATE check_update.cpp)
    target_link_libraries(updater-lib net-lib ${TINYXML_LIBRARY})
endif()
