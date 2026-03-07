# Auto-generated CMakeLists.txt for unix
file(GLOB PLUGIN_SRC
    test_main.cpp
)
add_library(unix SHARED ${PLUGIN_SRC})
target_link_libraries(unix PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(unix PROPERTIES PREFIX "")
