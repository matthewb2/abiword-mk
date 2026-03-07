# Auto-generated CMakeLists.txt for service
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(service SHARED ${PLUGIN_SRC})
target_link_libraries(service PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(service PROPERTIES PREFIX "")
