#include <windows.h>
//#include "abiword_export.h"
#include "ap_Win32App.h"   // ⭐ 이 줄 추가
#include "resource.h"   // 🔥 이 줄 추가

int WINAPI WinMain(HINSTANCE hInst,
                   HINSTANCE hPrev,
                   LPSTR cmd,
                   int show)
{
	
    const char CLASS_NAME[] = "HelloWindow";

    WNDCLASS wc = {};
    wc.hInstance     = hInst;
    wc.lpszClassName = CLASS_NAME;

    // ✅ 아이콘 지정
    wc.hIcon   = LoadIcon(hInst, MAKEINTRESOURCE(IDI_APP_ICON));
    //wc.hIconSm = LoadIcon(hInst, MAKEINTRESOURCE(IDI_APP_ICON));

    RegisterClass(&wc);

    AP_Win32App app;
    return app.Run(hInst, hPrev, cmd, show);   
}