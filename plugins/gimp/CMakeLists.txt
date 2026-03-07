# Auto-generated CMakeLists.txt for gimp
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(gimp SHARED ${PLUGIN_SRC})
target_link_libraries(gimp PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(gimp PROPERTIES PREFIX "")
