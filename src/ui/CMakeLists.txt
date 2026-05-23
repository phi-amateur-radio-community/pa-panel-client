add_library(PpcUiLib)

target_sources(PpcUiLib PRIVATE OverlayWidget.cpp)

target_link_libraries(PpcUiLib Qt::Widgets)

target_include_directories(PpcUiLib PUBLIC ${CMAKE_SOURCE_DIR}/include)
