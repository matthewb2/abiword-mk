# Auto-generated CMakeLists.txt for mathview
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(mathview SHARED ${PLUGIN_SRC})
target_link_libraries(mathview PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(mathview PROPERTIES PREFIX "")
