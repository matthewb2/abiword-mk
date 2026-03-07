# Auto-generated CMakeLists.txt for mswrite
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(mswrite SHARED ${PLUGIN_SRC})
target_link_libraries(mswrite PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(mswrite PROPERTIES PREFIX "")
