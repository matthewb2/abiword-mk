# Auto-generated CMakeLists.txt for urldict
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(urldict SHARED ${PLUGIN_SRC})
target_link_libraries(urldict PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(urldict PROPERTIES PREFIX "")
