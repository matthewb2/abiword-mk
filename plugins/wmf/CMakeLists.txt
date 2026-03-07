# Auto-generated CMakeLists.txt for wmf
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(wmf SHARED ${PLUGIN_SRC})
target_link_libraries(wmf PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(wmf PROPERTIES PREFIX "")
