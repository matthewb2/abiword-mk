# Auto-generated CMakeLists.txt for wordperfect
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(wordperfect SHARED ${PLUGIN_SRC})
target_link_libraries(wordperfect PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(wordperfect PROPERTIES PREFIX "")
