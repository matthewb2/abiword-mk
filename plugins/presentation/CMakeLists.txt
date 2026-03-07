# Auto-generated CMakeLists.txt for presentation
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(presentation SHARED ${PLUGIN_SRC})
target_link_libraries(presentation PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(presentation PROPERTIES PREFIX "")
