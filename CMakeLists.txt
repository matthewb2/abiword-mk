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
# XP Core Sources (플랫폼 독립)
# ========================================
file(GLOB_RECURSE CORE_SRC
    src/af/util/xp/*.cpp        
    src/af/xap/xp/*.cpp
    src/af/gr/xp/*.cpp
    src/af/ev/xp/*.cpp
    src/text/ptbl/xp/*.cpp
    src/text/fmt/xp/*.cpp
    src/text/layout/xp/*.cpp
    src/wp/ap/xp/*.cpp
    src/wp/impexp/xp/*.cpp
)

add_library(abiword_core SHARED ${CORE_SRC})

target_compile_definitions(abiword_core PRIVATE 
    ABIWORD_CORE_BUILD
    ABI_BUILD
    WITH_ENCHANT
)

target_include_directories(abiword_core PRIVATE
    ${CAIRO_INCLUDE_DIRS}
    ${PANGO_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/af/util/xp   # ⭐ 핵심
    ${CMAKE_SOURCE_DIR}/src/af/xap/xp   # ⭐ 추가
    ${CMAKE_SOURCE_DIR}/src/af/gr/xp
    ${CMAKE_SOURCE_DIR}/src/af/ev/xp
    ${CMAKE_SOURCE_DIR}/src/af/util/win   # ut_sleep.h 위치
    
        
)

target_compile_definitions(abiword_core PRIVATE 
    ABIWORD_CORE_BUILD
    ABI_BUILD
    WITH_ENCHANT
)

target_include_directories(abiword_core PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

target_link_libraries(abiword_core PRIVATE
    PkgConfig::GIO
    PkgConfig::GOBJECT
    PkgConfig::GLIB
    PkgConfig::LIBXML2
    PkgConfig::FRIBIDI
    PkgConfig::GSF
    PkgConfig::PANGO
    PkgConfig::ENCHANT
    PkgConfig::ZLIB
    PkgConfig::JPEG
    PkgConfig::PNG
    PkgConfig::XSLT
    PkgConfig::WV
    PkgConfig::CAIRO   # ⭐ 추가
)



target_compile_options(abiword_core PRIVATE
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


target_link_libraries(abiword_app 
abiword_core
gdi32 comctl32 ole32 uuid shell32 winspool imm32 comdlg32 version
)

target_include_directories(abiword_app PRIVATE ${CMAKE_SOURCE_DIR}/src
)

