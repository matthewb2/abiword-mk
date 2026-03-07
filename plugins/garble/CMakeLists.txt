# Auto-generated CMakeLists.txt for garble
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(garble SHARED ${PLUGIN_SRC})
target_link_libraries(garble PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(garble PROPERTIES PREFIX "")
