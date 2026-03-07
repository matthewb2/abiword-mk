# Auto-generated CMakeLists.txt for collab
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(collab SHARED ${PLUGIN_SRC})
target_link_libraries(collab PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(collab PROPERTIES PREFIX "")
