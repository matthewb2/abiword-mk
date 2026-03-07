# Auto-generated CMakeLists.txt for grammar
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(grammar SHARED ${PLUGIN_SRC})
target_link_libraries(grammar PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(grammar PROPERTIES PREFIX "")
