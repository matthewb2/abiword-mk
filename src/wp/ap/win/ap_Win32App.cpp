#include "ap_Win32App.h"
#include <windows.h>
#include <glib.h>
#include "xap_App.h"
#include "pd_Document.h"

AP_Win32App::AP_Win32App() {}

int AP_Win32App::Run(HINSTANCE, HINSTANCE, char*, int)
{
     g_print("Hello from libhello (GLib)!\n");
    MessageBoxW(NULL, L"AbiWord DLL 버전 Core OK", L"ABIWORD", MB_OK);
        PD_Document doc;
    doc.newDocument();
    doc.insertText(0, "AbiWord Core Test");
    doc.saveAs("test.abw");
    return 0;
}