# Auto-generated CMakeLists.txt for sdw
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(sdw SHARED ${PLUGIN_SRC})
target_link_libraries(sdw PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(sdw PROPERTIES PREFIX "")
