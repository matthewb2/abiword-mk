#include "xap_App.h"

namespace AbiWord {
    const char* getBuildInfo() { return "3.0.5 MinGW Build"; }
}
const char* XAP_App::s_szBuild_Version = "3.0.5";
const char* XAP_App::s_szAbiSuite_Home = "";
const char* XAP_App::s_szBuild_CompileDate = __DATE__;
const char* XAP_App::s_szBuild_CompileTime = __TIME__;
const char* XAP_App::s_szBuild_Target = "x86_64-w64-mingw64";
const char* XAP_App::s_szBuild_Options = "MinGW";
const char* XAP_App::s_szBuild_ID = "MSYS2";
