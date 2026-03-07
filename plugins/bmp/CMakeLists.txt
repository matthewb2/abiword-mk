# Auto-generated CMakeLists.txt for bmp
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(bmp SHARED ${PLUGIN_SRC})
target_link_libraries(bmp PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(bmp PROPERTIES PREFIX "")
