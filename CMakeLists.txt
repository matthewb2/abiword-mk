cmake_minimum_required(VERSION 3.16)
cmake_policy(SET CMP0167 OLD)

project(AbiWord
    VERSION 3.0
    LANGUAGES C CXX
)
set(PACKAGE "abiword")
set(ABIWORD_SERIES "3.0.2")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Windows에서 자동 export
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#
# Options
#

option(ABIWORD_ENABLE_PLUGINS "Build plugins" ON)
option(ABIWORD_WIN32_UI "Use Win32 UI" ON)

add_definitions(-DNDEBUG)

#
# Platform
#

if(WIN32)

add_compile_definitions(
    NDEBUG
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

# -----------------------------
# 외부 라이브러리
# -----------------------------

find_package(PkgConfig REQUIRED)
find_package(Boost REQUIRED)

pkg_check_modules(GLIB REQUIRED glib-2.0)
pkg_check_modules(GOBJECT REQUIRED gobject-2.0)
pkg_check_modules(GIO REQUIRED gio-2.0)
pkg_check_modules(LIBXML2 REQUIRED libxml-2.0)
pkg_check_modules(FRIBIDI REQUIRED fribidi)
pkg_check_modules(GSF REQUIRED libgsf-1)
pkg_check_modules(ENCHANT enchant-2)
pkg_check_modules(CAIRO cairo)
pkg_check_modules(PANGO pango)
pkg_check_modules(ZLIB REQUIRED zlib)
pkg_check_modules(JPEG REQUIRED libjpeg)
pkg_check_modules(PNG REQUIRED libpng)
pkg_check_modules(XSLT REQUIRED libxslt)
pkg_check_modules(WV REQUIRED wv-1.0)


# -----------------------------
# AbiWord source
# -----------------------------

file(GLOB_RECURSE ABIWORD_SRC
    src/af/ev/xp/*.cpp
    src/af/ev/win/*.cpp
    src/af/tf/xp/*.cpp    
    src/af/util/xp/*.cpp
    src/af/util/win/*.cpp
    src/af/xap/xp/*.cpp
    src/af/xap/win/*.cpp
    src/af/gr/xp/*.cpp
    src/af/gr/win/*.cpp
    src/text/fmt/xp/*.cpp
    src/text/fmt/win/*.cpp
    src/text/ptbl/xp/*.cpp    
    src/wp/ap/xp/*.cpp
    src/wp/ap/win/*.cpp
    src/wp/impexp/xp/*.cpp
    src/wp/impexp/win/*.cpp
    
)
list(FILTER ABIWORD_SRC EXCLUDE REGEX "fl_Squiggles\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "fv_View_protected\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ap_Dialog_Spell\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ap_Win32Dialog_Spell\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ap_Dialog_Grammar\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ap_wp_sidebar_static\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ie_exp_MsWord_97\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ie_imp_MsWord_97\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ie_exp_RTF\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ie_imp_RTF\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "gr_CairoGraphics\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "gr_CairoNullGraphics\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ut_xml_msxml\\.cpp$")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "/t/")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "Copie")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "pascal")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "copy")



file(GLOB FV_VIEW_SRC
    src/text/fmt/xp/fv_View*.cpp
)
list(FILTER FV_VIEW_SRC EXCLUDE REGEX "spell")
list(FILTER FV_VIEW_SRC EXCLUDE REGEX "protected")

file(GLOB IMPEXP_SRC
    src/wp/impexp/xp/*.cpp
    src/wp/impexp/win/*.cpp
)

# spell 기능 끄기
set(ENABLE_SPELL OFF CACHE BOOL "Disable spell support")

#
# compile flags
#

add_compile_options(
    ${LIBXML2_CFLAGS_OTHER}
    ${GSF_CFLAGS_OTHER}
   
    -Wno-overloaded-virtual    
    -Wno-deprecated
    -Wno-deprecated-declarations
    -Wno-unused-parameter
    -Wno-mismatched-new-delete
)

add_definitions(-DNDEBUG)
add_compile_definitions(
    NDEBUG
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

# -----------------------------
# libabiword.dll
# -----------------------------

add_library(abiword SHARED 
    ${ABIWORD_SRC}
    ${FV_VIEW_SRC}
    ${IMPEXP_SRC}  
    )

target_include_directories(abiword PUBLIC
    src
    src/af/util/xp
    src/af/util/win
    src/af/xap/xp
    src/af/xap/win
    src/af/gr/xp
    src/af/gr/win
    src/af/ev/xp
    src/af/ev/win
    

    src/text/ptbl/xp
    src/text/fmt/xp
    src/text/layout/xp

    src/wp/ap/xp
    src/wp/ap/win
    src/wp/impexp/xp
    
    
    ${LIBXML2_INCLUDE_DIRS}
    ${GLIB_INCLUDE_DIRS}
    ${GOBJECT_INCLUDE_DIRS}
    ${GIO_INCLUDE_DIRS}
    ${GSF_INCLUDE_DIRS}
    ${CAIRO_INCLUDE_DIRS}
    ${PANGO_INCLUDE_DIRS}
    ${FRIBIDI_INCLUDE_DIRS}
    ${ENCHANT_INCLUDE_DIRS}
    ${XSLT_INCLUDE_DIRS}
    ${WV_INCLUDE_DIRS}
    
)

target_link_libraries(abiword
    gdi32
    comctl32
    ole32
    uuid
    shell32
    winspool
    imm32
    comdlg32
    ${LIBXML2_LIBRARIES}
    ${GLIB_LIBRARIES}
    ${GOBJECT_LIBRARIES}
    ${GIO_LIBRARIES}
    ${GSF_LIBRARIES}
    ${CAIRO_LIBRARIES}
    ${PANGO_LIBRARIES}
    ${FRIBIDI_LIBRARIES}
    ${ENCHANT_LIBRARIES}
    ${ZLIB_LIBRARIES}
    ${JPEG_LIBRARIES}
    ${PNG_LIBRARIES}
    ${XSLT_LIBRARIES}
    ${WV_LIBRARIES}
)

target_compile_definitions(abiword PRIVATE ABI_BUILD)

# -----------------------------
# abiword.exe
# -----------------------------

add_executable(abiword_app
    src/wp/main/win/Win32Main.cpp
)

target_link_libraries(abiword_app
    abiword
)
