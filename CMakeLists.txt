cmake_minimum_required(VERSION 3.10)
project(abiword_dll)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS OFF)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLIB REQUIRED IMPORTED_TARGET glib-2.0)
pkg_check_modules(GOBJECT  REQUIRED IMPORTED_TARGET gobject-2.0)
pkg_check_modules(GIO      REQUIRED IMPORTED_TARGET gio-2.0)
pkg_check_modules(LIBXML2  REQUIRED IMPORTED_TARGET libxml-2.0)
pkg_check_modules(FRIBIDI  REQUIRED IMPORTED_TARGET fribidi)
pkg_check_modules(GSF      REQUIRED IMPORTED_TARGET libgsf-1)
pkg_check_modules(CAIRO    REQUIRED IMPORTED_TARGET cairo)
pkg_check_modules(PANGO    REQUIRED IMPORTED_TARGET pango)
pkg_check_modules(ZLIB     REQUIRED IMPORTED_TARGET zlib)
pkg_check_modules(JPEG     REQUIRED IMPORTED_TARGET libjpeg)
pkg_check_modules(PNG      REQUIRED IMPORTED_TARGET libpng)
pkg_check_modules(XSLT     REQUIRED IMPORTED_TARGET libxslt)
pkg_check_modules(WV       REQUIRED IMPORTED_TARGET wv-1.0)
pkg_check_modules(ENCHANT  REQUIRED IMPORTED_TARGET enchant-2)

# ========================================
# AbiWord Sources
# ========================================
file(GLOB_RECURSE XAP_SRC src/af/xap/*.cpp)
file(GLOB_RECURSE UTIL_SRC src/af/util/*.cpp)

file(GLOB_RECURSE AP_SRC src/wp/ap/**/*.cpp)
file(GLOB_RECURSE IMPEXP_SRC src/wp/impexp/**/*.cpp)

file(GLOB_RECURSE FMT_SRC src/text/fmt/xp/*.cpp)
file(GLOB_RECURSE PTBL_SRC src/text/ptbl/xp/*.cpp)


#file(GLOB_RECURSE EV_SRC src/af/ev/*.cpp)
#file(GLOB_RECURSE GR_SRC src/af/gr/*.cpp)
#file(GLOB_RECURSE TF_SRC src/af/tf/*.cpp)

set(ABIWORD_SRC
    ${XAP_SRC}    
    ${UTIL_SRC}
    ${AP_SRC}    
    ${IMPEXP_SRC}
 #   ${EV_SRC}
 #   ${GR_SRC}
 #   ${TF_SRC}    
    ${FMT_SRC}
    ${PTBL_SRC}    
)

# 테스트/불필요 파일 제외
list(FILTER ABIWORD_SRC EXCLUDE REGEX "Grammar")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "MsWord_97")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "CairoGraphics")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "msxml")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "fl_Squiggles")
list(FILTER ABIWORD_SRC EXCLUDE REGEX "ap_Dialog_Spell")

set(ABIWORD_INCLUDE_DIRS
    ${CMAKE_SOURCE_DIR}    
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
    ${CMAKE_SOURCE_DIR}/src/wp/ap/win    
    src/wp/impexp/xp
    ${GLIB_INCLUDE_DIRS}
    
)

   
# ========================================
# libabiword.dll
# ========================================
add_library(abiword SHARED
    ${ABIWORD_SRC}    
)

target_compile_definitions(abiword PRIVATE 
        ABIWORD_DLL_BUILD
        ABIWORD_DLL_EXPORTS
        ABI_BUILD
        _WIN32
        XP_WIN
        TOOLKIT_WIN
        WITH_ENCHANT
)
target_include_directories(abiword PRIVATE ${ABIWORD_INCLUDE_DIRS})

target_link_libraries(abiword PRIVATE    
        gdi32
        comctl32
        ole32
        uuid
        shell32
        winspool
        imm32
        comdlg32
        version
        PkgConfig::GIO
        PkgConfig::GOBJECT
        PkgConfig::GLIB
        PkgConfig::LIBXML2
        PkgConfig::FRIBIDI
        PkgConfig::GSF
        PkgConfig::CAIRO
        PkgConfig::PANGO
        PkgConfig::ENCHANT
        PkgConfig::ZLIB
        PkgConfig::JPEG
        PkgConfig::PNG
        PkgConfig::XSLT
        PkgConfig::WV
)

target_compile_options(abiword PRIVATE
    ${GLIB_CFLAGS_OTHER}
    -Wno-deprecated
    -Wno-deprecated-declarations
    -Wno-overloaded-virtual
    -Wno-unused-parameter
)

# EXE
add_executable(abiword_app
    src/wp/main/win/Win32Main.cpp 
    src/wp/main/win/resource.rc
)


target_link_libraries(abiword_app abiword)

target_include_directories(abiword_app PRIVATE ${ABIWORD_INCLUDE_DIRS})

