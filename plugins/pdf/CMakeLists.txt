# Auto-generated CMakeLists.txt for pdf
file(GLOB PLUGIN_SRC
    dummy.cpp
)

add_library(pdf SHARED ${PLUGIN_SRC})
target_link_libraries(pdf PRIVATE abiword_core ${GTK3_LIBRARIES} ${HUNSPELL_LIBRARIES} ${LIBWPW_LIBRARIES})
set_target_properties(pdf PROPERTIES PREFIX "")
