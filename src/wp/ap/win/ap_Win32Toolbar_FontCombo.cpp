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

#include <windows.h>
#include <stdlib.h>
#include <glib.h>

#include "ut_assert.h"
#include "ut_vector.h"
#include "ut_string.h"
#include "ap_Win32Toolbar_FontCombo.h"
#include "ap_Toolbar_Id.h"
#include "xap_Frame.h"
#include "ut_debugmsg.h"
#include "ut_Win32LocaleString.h"

/*****************************************************************/

EV_Toolbar_Control * AP_Win32Toolbar_FontCombo::static_constructor(EV_Toolbar * pToolbar,
                                            XAP_Toolbar_Id id)
{
    g_printerr("[DEBUG] static_constructor called for id=%d\n", id);
    AP_Win32Toolbar_FontCombo * p = new AP_Win32Toolbar_FontCombo(pToolbar,id);
    if (!p) {
        g_printerr("[DEBUG] Failed to create ComboBox window for id=%d\n", id);
    }
    return p;
}

AP_Win32Toolbar_FontCombo::AP_Win32Toolbar_FontCombo(EV_Toolbar * pToolbar,
                                           XAP_Toolbar_Id id)
    : EV_Toolbar_Control(pToolbar/*,id*/)
{
    g_printerr("[DEBUG] FontCombo Constructor Entered\n");
    UT_return_if_fail (id==AP_TOOLBAR_ID_FMT_FONT);

    m_nPixels = 160;        // TODO: do a better calculation
    m_nLimit = LF_FACESIZE;
    m_bSort = true;
    g_printerr("[DEBUG] FontCombo Constructor Exited\n");
}

AP_Win32Toolbar_FontCombo::~AP_Win32Toolbar_FontCombo(void)
{
    g_printerr("[DEBUG] FontCombo Destructor Entered\n");
    UT_VECTOR_FREEALL(char *, m_vecContents);
    g_printerr("[DEBUG] FontCombo Destructor Exited\n");
}

/*****************************************************************/

#include <set>
static std::set<std::string> seenFonts;

bool AP_Win32Toolbar_FontCombo::populate(void)
{
    g_printerr("[DEBUG] FontCombo populate Entered, this=%p\n", (void*)this);

    // clear anything that's already there
    g_printerr("[DEBUG] populate: clearing m_vecContents\n");
    m_vecContents.clear();
    
    g_printerr("[DEBUG] populate: clearing m_vecFontCharSet\n");
    m_vecFontCharSet.clear();

    g_printerr("[DEBUG] populate: clearing seenFonts\n");
    seenFonts.clear();

    // populate the vector
    HWND hwnd = NULL;
    g_printerr("[DEBUG] populate: calling GetDC\n");
    HDC hdc = GetDC(hwnd);
    if (!hdc) {
        g_printerr("[DEBUG] Failed to get DC for Font enumeration, hwnd=%p\n", (void*)hwnd);
        return false;
    }
    g_printerr("[DEBUG] populate: GetDC succeeded, hdc=%p\n", (void*)hdc);

    LOGFONTW lf;
    lf.lfCharSet = DEFAULT_CHARSET;
    *lf.lfFaceName = 0;
    lf.lfPitchAndFamily = 0;
    
    g_printerr("[DEBUG] populate: calling EnumFontFamiliesExW\n");
    int enumResult = EnumFontFamiliesExW(hdc, &lf, (FONTENUMPROCW) AP_Win32Toolbar_FontCombo::_EnumFontsProc, (LONG_PTR) this, 0);
    g_printerr("[DEBUG] populate: EnumFontFamiliesExW finished with result=%d\n", enumResult);

    ReleaseDC(hwnd, hdc);
    g_printerr("[DEBUG] populate: ReleaseDC called\n");

    seenFonts.clear();
    g_printerr("[DEBUG] FontCombo populate Exited successfully\n");

    return true;
}

int CALLBACK AP_Win32Toolbar_FontCombo::_EnumFontsProc(LPLOGFONTW lplf, 
                             LPTEXTMETRICW /*lptm*/,
                             DWORD dwStyle, 
                             LPARAM lParam)
{
    g_printerr("[DEBUG] _EnumFontsProc Entered, lParam=%p\n", (void*)lParam);

    AP_Win32Toolbar_FontCombo * ctl = (AP_Win32Toolbar_FontCombo *) lParam;
    if (!ctl) {
        g_printerr("[DEBUG] _EnumFontsProc: ctl is NULL\n");
        return 0;
    }

    // filter out fonts we don't use
    if (dwStyle & RASTER_FONTTYPE)
        return 1;

    // filter out vertical fonts which aren't supported
    if (lplf->lfFaceName[0] == '@')
        return 1;

    g_printerr("[DEBUG] _EnumFontsProc: processing font face name\n");
    UT_Win32LocaleString str;
    str.fromLocale (lplf->lfFaceName);
    char * p = g_strdup((str.utf8_str().utf8_str()));
    if (!p) {
        g_printerr("[DEBUG] _EnumFontsProc: g_strdup failed\n");
        return 1;
    }

    if (seenFonts.find(p) != seenFonts.end()) {
        FREEP(p);
        return 1;
    }

    g_printerr("[DEBUG] _EnumFontsProc: adding item to vectors, p=%p\n", (void*)p);
    ctl->m_vecContents.addItem(p);
    ctl->m_vecFontCharSet.addItem((void*)lplf->lfCharSet);

    seenFonts.insert(p);

    return 1;
}

UT_uint32 AP_Win32Toolbar_FontCombo::getDroppedWidth() const
{
    return getPixelWidth() + 100;
}