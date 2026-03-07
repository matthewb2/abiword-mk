# Auto-generated CMakeLists.txt for pdb
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(pdb SHARED ${PLUGIN_SRC})
target_link_libraries(pdb PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(pdb PROPERTIES PREFIX "")
