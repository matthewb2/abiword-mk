# Auto-generated CMakeLists.txt for xp
file(GLOB PLUGIN_SRC
    ap_wp_sidebar.cpp
)
add_library(xp SHARED ${PLUGIN_SRC})
target_link_libraries(xp PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(xp PROPERTIES PREFIX "")
add_subdirectory(ToolbarIcons)
