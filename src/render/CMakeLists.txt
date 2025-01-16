# KPaint
# Copyright (C) 2024-2025 KiriX Company
# # This program is distributed under the terms of
# the End-User License Agreement for KPaint.

add_library(
    render-lib
    error_diffusion.cpp
    get_sprite_pixel.cpp
    gradient.cpp
    ordered_dither.cpp
    quantization.cpp
    rasterize.cpp
    render.cpp
    zoom.cpp
)
target_link_libraries(render-lib doc-lib laf-gfx laf-base)
