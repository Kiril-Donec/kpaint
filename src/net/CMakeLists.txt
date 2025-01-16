# KPaint
# Copyright (C) 2024-2025 KiriX Company
# # This program is distributed under the terms of
# the End-User License Agreement for KPaint.

add_library(net-lib http_headers.cpp http_request.cpp http_response.cpp)
target_link_libraries(net-lib laf-base ${CURL_LIBRARIES})
