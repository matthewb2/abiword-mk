add_executable(abiword_app
    Win32Main.cpp
    Win32Main.rc
)

target_link_libraries(abiword_app
    abiword
    ${GLIB_LIBRARIES}
)

set_target_properties(abiword_app PROPERTIES
    OUTPUT_NAME abiword
    WIN32_EXECUTABLE TRUE
)