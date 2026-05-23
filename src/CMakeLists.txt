add_executable(pa_panel_client main.cpp)
add_custom_command(TARGET pa_panel_client POST_BUILD
        COMMAND windeployqt $<TARGET_FILE:pa_panel_client>
)

target_link_libraries(pa_panel_client
        Qt::Core
        Qt::Gui
        Qt::Widgets
        PpcUiLib
)

target_include_directories(pa_panel_client PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(ui)
