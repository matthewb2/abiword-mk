cmake_minimum_required(VERSION 3.16)
cmake_policy(SET CMP0167 OLD)

project(AbiWord
    VERSION 3.0
    LANGUAGES C CXX
)
set(PACKAGE "abiword")
set(ABIWORD_SERIES "3.0")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#
# Options
#

option(ABIWORD_ENABLE_PLUGINS "Build plugins" ON)
option(ABIWORD_WIN32_UI "Use Win32 UI" ON)

#
# Platform
#

if(WIN32)

add_compile_definitions(
    _WIN32
    WIN32
    ABIWORD_TARGET_WIN32
    TOOLKIT_WIN
    XP_WIN
    UT_PLATFORM_WIN32
    UT_COMPILER_GCC
    HAVE_GCC_INLINE_ASM
    HAVE_STDINT_H
    HAVE_STRING_H
    WITH_ENCHANT
)

endif()

#
# config.h
#

configure_file(
    ${CMAKE_SOURCE_DIR}/config.h.in
    ${CMAKE_BINARY_DIR}/config.h
)

include_directories(
    ${CMAKE_BINARY_DIR}
    ${CMAKE_SOURCE_DIR}/src/text/fmt/xp
)

#
# pkg-config
#

find_package(PkgConfig REQUIRED)
find_package(Boost REQUIRED)
pkg_check_modules(GLIB REQUIRED glib-2.0)
pkg_check_modules(FRIBIDI REQUIRED fribidi)
pkg_check_modules(LIBXML2 REQUIRED libxml-2.0)
pkg_check_modules(GSF REQUIRED libgsf-1)
pkg_check_modules(CAIRO cairo)
pkg_check_modules(PANGO pango)
pkg_check_modules(ENCHANT enchant-2)

#
# Global include paths
#

include_directories(

    ${GLIB_INCLUDE_DIRS}
    ${FRIBIDI_INCLUDE_DIRS}
    ${LIBXML2_INCLUDE_DIRS}
    ${GSF_INCLUDE_DIRS}
    ${CAIRO_INCLUDE_DIRS}
    ${PANGO_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
    ${ENCHANT_INCLUDE_DIRS}
    src
    src/plugins      # ← 이 줄 추가
    src/af
    src/af/util
    src/af/util/xp
    src/af/util/win

    src/af/ev
    src/af/ev/xp
    src/af/ev/win

    src/af/gr
    src/af/gr/xp
    src/af/gr/win

    src/af/xap
    src/af/xap/xp
    src/af/xap/win

    src/af/tf
    src/af/tf/xp

    src/wp
    src/wp/ap
    src/wp/ap/xp
    src/wp/ap/win

    src/wp/main
    src/wp/main/xp
    src/wp/main/win

    src/wp/impexp
    src/wp/impexp/xp

    src/text
    src/text/fmt
    src/text/fmt/xp
    src/text/ptbl
    src/text/ptbl/xp
)

#
# compile flags
#

add_compile_options(

    ${GLIB_CFLAGS_OTHER}
    ${FRIBIDI_CFLAGS_OTHER}
    ${LIBXML2_CFLAGS_OTHER}
    ${GSF_CFLAGS_OTHER}
    ${CAIRO_CFLAGS_OTHER}
    ${PANGO_CFLAGS_OTHER}

    -Wno-overloaded-virtual    
    -Wno-deprecated
    -Wno-deprecated-declarations
    -Wno-unused-parameter
    -Wno-mismatched-new-delete
)

#
# source tree
#

add_subdirectory(src)

#
# plugins
#

if(ABIWORD_ENABLE_PLUGINS)

add_subdirectory(plugins)

endif()

#
# install
#

install(TARGETS abiword
    RUNTIME DESTINATION bin
)