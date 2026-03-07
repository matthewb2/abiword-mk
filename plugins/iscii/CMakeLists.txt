# Auto-generated CMakeLists.txt for iscii
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(iscii SHARED ${PLUGIN_SRC})
target_link_libraries(iscii PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(iscii PROPERTIES PREFIX "")
