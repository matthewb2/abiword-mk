# Auto-generated CMakeLists.txt for mif
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(mif SHARED ${PLUGIN_SRC})
target_link_libraries(mif PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(mif PROPERTIES PREFIX "")
