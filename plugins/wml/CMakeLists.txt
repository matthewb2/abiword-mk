# Auto-generated CMakeLists.txt for wml
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(wml SHARED ${PLUGIN_SRC})
target_link_libraries(wml PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(wml PROPERTIES PREFIX "")
