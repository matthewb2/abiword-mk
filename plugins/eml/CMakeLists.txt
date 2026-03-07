# Auto-generated CMakeLists.txt for eml
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(eml SHARED ${PLUGIN_SRC})
target_link_libraries(eml PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(eml PROPERTIES PREFIX "")
