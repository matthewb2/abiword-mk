file(GLOB PLUGIN_DIRS *)

foreach(dir ${PLUGIN_DIRS})

    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${dir})

        add_subdirectory(${dir})

    endif()

endforeach()