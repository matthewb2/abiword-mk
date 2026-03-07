#
# Collect sources
#

file(GLOB_RECURSE UTIL_SRC

    af/util/xp/*.cpp
    af/util/win/*.cpp
)

# MSVC 전용 파일 제거
list(FILTER UTIL_SRC EXCLUDE REGEX "ut_xml_msxml.cpp")

file(GLOB_RECURSE EV_SRC

    af/ev/xp/*.cpp
    af/ev/win/*.cpp
)

file(GLOB_RECURSE GR_SRC

    af/gr/xp/*.cpp
    af/gr/win/*.cpp
)

file(GLOB_RECURSE XAP_SRC

    af/xap/xp/*.cpp
    af/xap/win/*.cpp
)

file(GLOB_RECURSE TF_SRC

    af/tf/xp/*.cpp
)

file(GLOB_RECURSE WP_SRC

    wp/ap/xp/*.cpp
    wp/ap/win/*.cpp

    wp/main/xp/*.cpp
    wp/main/win/*.cpp

    wp/impexp/xp/*.cpp
)

file(GLOB_RECURSE TEXT_SRC

    text/fmt/xp/*.cpp
    text/ptbl/xp/*.cpp
)

#
# executable
#

add_executable(abiword WIN32

    ${UTIL_SRC}
    ${EV_SRC}
    ${GR_SRC}
    ${XAP_SRC}
    ${TF_SRC}
    ${WP_SRC}
    ${TEXT_SRC}
)

#
# config.h forced include
#

target_compile_options(abiword PRIVATE
    -include ${CMAKE_BINARY_DIR}/config.h
)


target_compile_options(abiword PRIVATE

    ${GLIB_CFLAGS}
    ${FRIBIDI_CFLAGS}
    ${LIBXML2_CFLAGS}
    ${GSF_CFLAGS}
    ${CAIRO_CFLAGS}
    ${PANGO_CFLAGS}
    ${BOOST_CFLAGS}
)

target_compile_definitions(abiword PRIVATE

    WIN32
    _WIN32
    _WINDOWS
    UT_PLATFORM_WIN32
    __i386__
)
#
# link libraries
#

target_link_libraries(abiword

    ${GLIB_LIBRARIES}
    ${FRIBIDI_LIBRARIES}
    ${LIBXML2_LIBRARIES}
    ${GSF_LIBRARIES}
    ${CAIRO_LIBRARIES}
    ${PANGO_LIBRARIES}
    ${BOOST_LIBRARIES}

    gdi32
    user32
    comdlg32
    shell32
    ole32
    oleaut32
    uuid
    winspool
)