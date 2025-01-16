# KPaint
# Copyright (C) 2024-2025 KiriX Company
# # This program is distributed under the terms of
# the End-User License Agreement for KPaint.

# Gabriel Rauter Desktop shortcut
install(FILES kpaint.desktop DESTINATION share/applications)
# GNOME Thumbnailer
install(FILES mime/kpaint.xml DESTINATION share/mime/packages)
install(PROGRAMS kpaint-thumbnailer DESTINATION bin)
install(FILES gnome/kpaint.thumbnailer DESTINATION share/thumbnailers)
# Qt Thumbnailer
if(ENABLE_QT_THUMBNAILER)
    add_subdirectory(kde)
endif()
