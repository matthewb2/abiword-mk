# Auto-generated CMakeLists.txt for passepartout
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(passepartout SHARED ${PLUGIN_SRC})
target_link_libraries(passepartout PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(passepartout PROPERTIES PREFIX "")
