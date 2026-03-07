# Auto-generated CMakeLists.txt for openwriter
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(openwriter SHARED ${PLUGIN_SRC})
target_link_libraries(openwriter PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(openwriter PROPERTIES PREFIX "")
