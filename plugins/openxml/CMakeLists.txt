# Auto-generated CMakeLists.txt for openxml
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(openxml SHARED ${PLUGIN_SRC})
target_link_libraries(openxml PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(openxml PROPERTIES PREFIX "")
