# Auto-generated CMakeLists.txt for loadbindings
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(loadbindings SHARED ${PLUGIN_SRC})
target_link_libraries(loadbindings PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(loadbindings PROPERTIES PREFIX "")
