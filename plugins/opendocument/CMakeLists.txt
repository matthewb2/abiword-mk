# Auto-generated CMakeLists.txt for opendocument
file(GLOB PLUGIN_SRC
    dummy.cpp
)
add_library(opendocument SHARED ${PLUGIN_SRC})
target_link_libraries(opendocument PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(opendocument PROPERTIES PREFIX "")
add_subdirectory(common)
add_subdirectory(exp)
add_subdirectory(imp)
