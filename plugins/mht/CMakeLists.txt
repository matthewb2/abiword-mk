# Auto-generated CMakeLists.txt for mht
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(mht SHARED ${PLUGIN_SRC})
target_link_libraries(mht PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(mht PROPERTIES PREFIX "")
