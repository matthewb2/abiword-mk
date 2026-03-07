# Auto-generated CMakeLists.txt for latex
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(latex SHARED ${PLUGIN_SRC})
target_link_libraries(latex PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(latex PROPERTIES PREFIX "")
