# Auto-generated CMakeLists.txt for aiksaurus
file(GLOB PLUGIN_SRC
    dummy.cpp
)
add_library(aiksaurus SHARED ${PLUGIN_SRC})
target_link_libraries(aiksaurus PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(aiksaurus PROPERTIES PREFIX "")
add_subdirectory(aiksaurusgtk3)
add_subdirectory(win)
add_subdirectory(xp)
