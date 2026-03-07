# Auto-generated CMakeLists.txt for kword
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(kword SHARED ${PLUGIN_SRC})
target_link_libraries(kword PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(kword PROPERTIES PREFIX "")
