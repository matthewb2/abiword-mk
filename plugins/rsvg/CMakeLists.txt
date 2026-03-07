# Auto-generated CMakeLists.txt for rsvg
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(rsvg SHARED ${PLUGIN_SRC})
target_link_libraries(rsvg PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(rsvg PROPERTIES PREFIX "")
