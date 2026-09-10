/* AbiWord
 * Copyright (C) 1998 AbiSource, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <io.h>
#include <stdio.h>
#include <conio.h>
#undef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#include <windows.h>
#include "ap_Win32App.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

int WINAPI wWinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    LPWSTR szCmdLine, int iCmdShow)
{
    g_printerr("[DEBUG] 1. Entered wWinMain\n");

#ifdef _WIN32
    typedef BOOL (WINAPI * AttachConsole_t) (DWORD);
    AttachConsole_t p_AttachConsole =
        (AttachConsole_t) GetProcAddress (GetModuleHandleW(L"kernel32.dll"), "AttachConsole");

	if (p_AttachConsole != NULL && p_AttachConsole (ATTACH_PARENT_PROCESS))
    {
        g_printerr("[DEBUG] 2. Attached console successfully\n");

        g_printerr("[DEBUG] 2-1. Checking stdout pointer: %p\n", (void*)stdout);
        if (stdout != NULL) {
            g_printerr("[DEBUG] 2-2. About to call _wfreopen for stdout\n");
            _wfreopen (L"CONOUT$", L"w", stdout);
            
            g_printerr("[DEBUG] 2-3. About to check fileno(stdout)\n");
            int fd_out = fileno (stdout);
            g_printerr("[DEBUG] 2-4. fileno(stdout) = %d\n", fd_out);
            
            if (fd_out != -1) {
                dup2 (fd_out, 1);
            }
        }

        g_printerr("[DEBUG] 2-5. Finished stdout setup\n");
    }
    
#endif

    g_printerr("[DEBUG] 3. About to call AP_Win32App::WinMain (hInstance=%p, szCmdLine=%p)\n", 
               (void*)hInstance, (void*)szCmdLine);

    // 경고 방지를 위한 const_cast 처리
    int ret = AP_Win32App::WinMain(const_cast<char*>("Abiword"), hInstance, hPrevInstance, const_cast<char*>("abiword.exe"), iCmdShow);

    g_printerr("[DEBUG] 4. Exiting wWinMain with ret=%d\n", ret);

    return ret;
}

#if !defined (_MSC_VER) && !defined (UNICODE)

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    PSTR szCmdLine, int iCmdShow)
{
#ifdef _WIN32
	if (fileno (stdout) != -1 &&
		_get_osfhandle (fileno (stdout)) != -1)
	{
		/* stdout is fine, presumably redirected to a file or pipe */
	}
    else
    {
		typedef BOOL (WINAPI * AttachConsole_t) (DWORD);

		AttachConsole_t p_AttachConsole =
			(AttachConsole_t) GetProcAddress (GetModuleHandle ("kernel32.dll"), "AttachConsole");

		if (p_AttachConsole != NULL && p_AttachConsole (ATTACH_PARENT_PROCESS))
		{
			freopen ("CONOUT$", "w", stdout);
			dup2 (fileno (stdout), 1);
			freopen ("CONOUT$", "w", stderr);
			dup2 (fileno (stderr), 2);

		}
	}
#endif

	return AP_Win32App::WinMain("Abiword", hInstance, hPrevInstance, szCmdLine, iCmdShow);
}

#endif