# -------------------------------
# libxml2 설정 (pkg-config)
# -------------------------------
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBXML2 REQUIRED libxml-2.0)

# 디버깅용 메시지
message(STATUS "LIBXML2_INCLUDE_DIRS = ${LIBXML2_INCLUDE_DIRS}")
message(STATUS "LIBXML2_LIBRARIES = ${LIBXML2_LIBRARIES}")
message(STATUS "LIBXML2_CFLAGS_OTHER = ${LIBXML2_CFLAGS_OTHER}")

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
message(STATUS "AFUTIL_SRC files:")
foreach(f ${AFUTIL_SRC})
    message(STATUS "  ${f}")
endforeach()

# AFUTIL OBJECT 라이브러리 생성
add_library(afutil OBJECT ${AFUTIL_SRC})

# AFUTIL에 libxml2 include와 compile flags 적용
target_include_directories(afutil PUBLIC ${LIBXML2_INCLUDE_DIRS})
target_compile_options(afutil PUBLIC ${LIBXML2_CFLAGS_OTHER})

# 디버깅용: AFUTIL target include 확인
get_target_property(_inc afutil INCLUDE_DIRECTORIES)
message(STATUS "afutil INCLUDE_DIRECTORIES = ${_inc}")