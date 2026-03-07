# Auto-generated CMakeLists.txt for docbook
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(docbook SHARED ${PLUGIN_SRC})
target_link_libraries(docbook PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(docbook PROPERTIES PREFIX "")
