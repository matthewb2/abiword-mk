# Auto-generated CMakeLists.txt for xslfo
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(xslfo SHARED ${PLUGIN_SRC})
target_link_libraries(xslfo PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(xslfo PROPERTIES PREFIX "")
