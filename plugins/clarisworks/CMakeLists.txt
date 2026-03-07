# Auto-generated CMakeLists.txt for clarisworks
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(clarisworks SHARED ${PLUGIN_SRC})
target_link_libraries(clarisworks PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(clarisworks PROPERTIES PREFIX "")
