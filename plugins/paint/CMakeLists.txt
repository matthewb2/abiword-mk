# Auto-generated CMakeLists.txt for paint
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(paint SHARED ${PLUGIN_SRC})
target_link_libraries(paint PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(paint PROPERTIES PREFIX "")
