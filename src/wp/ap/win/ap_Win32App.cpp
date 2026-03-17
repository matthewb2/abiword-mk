#include "ap_Win32App.h"
#include <windows.h>
#include <glib.h>


AP_Win32App::AP_Win32App() {}

int AP_Win32App::Run(HINSTANCE, HINSTANCE, char*, int)
{
     g_print("Hello from libhello (GLib)!\n");
    MessageBoxW(NULL, L"AbiWord DLL 버전 Core OK", L"ABIWORD", MB_OK);
    return 0;
}