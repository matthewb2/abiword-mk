# Auto-generated CMakeLists.txt for hrtext
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(hrtext SHARED ${PLUGIN_SRC})
target_link_libraries(hrtext PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(hrtext PROPERTIES PREFIX "")
