#pragma once
//#include "abiword_export.h"
#include <windows.h>

class AP_Win32App
{
public:
    AP_Win32App();
    int Run(HINSTANCE, HINSTANCE, char*, int);
};