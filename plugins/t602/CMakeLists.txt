# Auto-generated CMakeLists.txt for t602
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(t602 SHARED ${PLUGIN_SRC})
target_link_libraries(t602 PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(t602 PROPERTIES PREFIX "")
