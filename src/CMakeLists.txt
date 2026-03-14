# -------------------------------
# libxml2 설정 (pkg-config)
# -------------------------------
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBXML2 REQUIRED libxml-2.0)
pkg_check_modules(GLIB REQUIRED glib-2.0)
pkg_check_modules(GOBJECT REQUIRED gobject-2.0)
pkg_check_modules(GIO REQUIRED gio-2.0)


# 디버깅용 메시지
message(STATUS "LIBXML2_INCLUDE_DIRS = ${LIBXML2_INCLUDE_DIRS}")
message(STATUS "LIBXML2_LIBRARIES = ${LIBXML2_LIBRARIES}")
message(STATUS "LIBXML2_CFLAGS_OTHER = ${LIBXML2_CFLAGS_OTHER}")
message(STATUS "GLIB_LIBRARIES = ${GLIB_LIBRARIES}")
message(STATUS "GLIB_INCLUDE_DIRS = ${GLIB_INCLUDE_DIRS}")
message(STATUS "GOBJECT_INCLUDE_DIRS = ${GOBJECT_INCLUDE_DIRS}")
message(STATUS "GIO_INCLUDE_DIRS = ${GIO_INCLUDE_DIRS}")

# -------------------------------
# AFUTIL 소스
# -------------------------------
file(GLOB_RECURSE AFUTIL_SRC
    af/util/xp/*.cpp
    af/util/win/*.cpp
)

# MinGW에서는 ut_xml_msxml.cpp 제외
if(MINGW)
    list(FILTER AFUTIL_SRC EXCLUDE REGEX "ut_xml_msxml\\.cpp$")
endif()

# 디버깅용: 포함되는 AFUTIL_SRC 확인
#message(STATUS "AFUTIL_SRC files:")
#foreach(f ${AFUTIL_SRC})
#    message(STATUS "  ${f}")
#endforeach()

# AFUTIL OBJECT 라이브러리 생성
add_library(afutil OBJECT ${AFUTIL_SRC})

# AFUTIL에 libxml2 include와 compile flags 적용
target_include_directories(afutil PUBLIC ${LIBXML2_INCLUDE_DIRS})
target_compile_options(afutil PUBLIC ${LIBXML2_CFLAGS_OTHER})

# 디버깅용: AFUTIL target include 확인
get_target_property(_inc afutil INCLUDE_DIRECTORIES)
message(STATUS "afutil INCLUDE_DIRECTORIES = ${_inc}")


# -------------------------------
# XAP, TEXT, WP 소스
# -------------------------------
file(GLOB_RECURSE XAP_SRC
    af/xap/xp/*.cpp
    af/xap/win/*.cpp
)

file(GLOB_RECURSE TEXT_SRC
    text/ptbl/xp/*.cpp
    text/fmt/xp/*.cpp
    text/fl/xp/*.cpp
    text/fun/xp/*.cpp
    text/toc/xp/*.cpp
    text/ie/*.cpp
)

list(FILTER TEXT_SRC EXCLUDE REGEX "fl_Squiggles\\.cpp$")
list(FILTER TEXT_SRC EXCLUDE REGEX "fv_View_protected\\.cpp$")
list(FILTER TEXT_SRC EXCLUDE REGEX "/t/")


file(GLOB_RECURSE WP_SRC
    wp/ap/xp/*.cpp
    wp/ap/win/*.cpp
)

# -------------------------------
# Spell 기능 제거 (CMake 빌드 오류 방지)
# -------------------------------
list(FILTER WP_SRC EXCLUDE REGEX "ap_Dialog_Spell\\.cpp$")
list(FILTER WP_SRC EXCLUDE REGEX "ap_Win32Dialog_Spell\\.cpp$")
list(FILTER WP_SRC EXCLUDE REGEX "ap_Dialog_Grammar\\.cpp$")

# 디버깅용: 포함되는 WP_SRC 확인
message(STATUS "WP_SRC files:")
foreach(f ${WP_SRC})
    message(STATUS "  ${f}")
endforeach()

file(GLOB GR_SRC
    af/gr/xp/*.cpp
    af/gr/win/*.cpp
)



add_library(xap OBJECT ${XAP_SRC})
add_library(text OBJECT ${TEXT_SRC})
add_library(wp OBJECT ${WP_SRC})
add_library(gr OBJECT ${GR_SRC})

# -------------------------------
# libabiword DLL 생성
# -------------------------------
add_library(libabiword SHARED
    $<TARGET_OBJECTS:afutil>
    $<TARGET_OBJECTS:xap>
    $<TARGET_OBJECTS:text>
    $<TARGET_OBJECTS:wp>
    $<TARGET_OBJECTS:gr>
)

# Include 경로
target_include_directories(libabiword PUBLIC
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/af
    ${CMAKE_SOURCE_DIR}/src/af/util
    ${CMAKE_SOURCE_DIR}/src/af/util/xp
    ${CMAKE_SOURCE_DIR}/src/af/util/win
    ${CMAKE_SOURCE_DIR}/src/af/xap
    ${CMAKE_SOURCE_DIR}/src/af/xap/xp
    ${CMAKE_SOURCE_DIR}/src/af/xap/win
    ${CMAKE_SOURCE_DIR}/src/text
    ${CMAKE_SOURCE_DIR}/src/text/ptbl
    ${CMAKE_SOURCE_DIR}/src/text/ptbl/xp
    ${CMAKE_SOURCE_DIR}/src/wp
    ${CMAKE_SOURCE_DIR}/src/wp/ap
    ${CMAKE_SOURCE_DIR}/src/wp/ap/xp
    ${CMAKE_SOURCE_DIR}/src/wp/ap/win
    ${LIBXML2_INCLUDE_DIRS}  # libxml2 include 추가
    ${GLIB_INCLUDE_DIRS}
    ${GOBJECT_INCLUDE_DIRS}
    ${GIO_INCLUDE_DIRS}
)

# Windows DLL export
set_target_properties(libabiword PROPERTIES
    WINDOWS_EXPORT_ALL_SYMBOLS ON
)

# Windows 시스템 라이브러리 + libxml2 링크
target_link_libraries(libabiword
    gdi32
    comctl32
    ole32
    uuid
    shell32
    ${LIBXML2_LIBRARIES}
    ${GLIB_LIBRARIES}
    ${GOBJECT_LIBRARIES}
    ${GIO_LIBRARIES}
)

# libxml2 compile flags
target_compile_options(libabiword PUBLIC ${LIBXML2_CFLAGS_OTHER})