# Auto-generated CMakeLists.txt for s5
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(s5 SHARED ${PLUGIN_SRC})
target_link_libraries(s5 PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(s5 PROPERTIES PREFIX "")
