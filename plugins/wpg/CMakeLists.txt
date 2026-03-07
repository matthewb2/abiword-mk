# Auto-generated CMakeLists.txt for wpg
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(wpg SHARED ${PLUGIN_SRC})
target_link_libraries(wpg PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(wpg PROPERTIES PREFIX "")
