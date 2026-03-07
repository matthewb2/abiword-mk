# Auto-generated CMakeLists.txt for epub
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(epub SHARED ${PLUGIN_SRC})
target_link_libraries(epub PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(epub PROPERTIES PREFIX "")
