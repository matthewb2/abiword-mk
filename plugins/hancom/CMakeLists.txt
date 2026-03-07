# Auto-generated CMakeLists.txt for hancom
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(hancom SHARED ${PLUGIN_SRC})
target_link_libraries(hancom PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(hancom PROPERTIES PREFIX "")
