/* AbiWord
 * Copyright (C) 2002 Dom Lachowicz and others
 * Copyright (C) 2004, 2009 Hubert Figuiere
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

#include <stdio.h>

#include "ev_EditMethod.h"
#include "ap_Features.h"
#include "ap_App.h"
#include "ap_Args.h"
#include "ap_Prefs_SchemeIds.h"
#include "ap_Strings.h"
#include "xap_Frame.h"
#include "xap_ModuleManager.h"
#include "pd_Document.h"
#include "ie_imp.h"

#if defined(TOOLKIT_WIN)

#include "ut_Win32LocaleString.h"
#include "ap_Win32App.h" //needed for AP_Win32App::s_fromWinLocaleToUTF8()

AP_App::AP_App (HINSTANCE hInstance, const char * szAppName)
  : XAP_App_BaseClass ( hInstance, szAppName )
#else
AP_App::AP_App (const char * szAppName)
  : XAP_App_BaseClass ( szAppName )
#endif
{
}

AP_App::~AP_App ()
{
}

/*!
 *  Open windows requested on commandline.
 * 
 * \return False if an unknown command line option was used, true
 * otherwise.  
 */
bool AP_App::openCmdLineFiles(const AP_Args * args)
{
    g_printerr("[DEBUG] 4-1. Entered AP_App::openCmdLineFiles\n");
    int kWindowsOpened = 0;
    const char *file = NULL;
	if (AP_Args::m_sFiles == NULL) {
			g_printerr("[DEBUG] 4-2-1. m_sFiles is NULL, about to call newFrame()\n");
			XAP_Frame * pFrame = newFrame();
			g_printerr("[DEBUG] 4-2-2. newFrame() returned: %p, about to call loadDocument()\n", (void*)pFrame);
			
			if (pFrame) {
				pFrame->loadDocument((const char *)NULL, IEFT_Unknown);
				g_printerr("[DEBUG] 4-2-3. loadDocument() finished successfully\n");
			} else {
				g_printerr("[DEBUG] 4-2-3. pFrame is NULL, cannot call loadDocument()\n");
			}
			return true;
		}

    g_printerr("[DEBUG] 4-3. Entering file argument loop\n");
    int i = 0;
    while ((file = AP_Args::m_sFiles[i++]) != NULL) {
        g_printerr("[DEBUG] 4-4. Processing file argument: %s\n", file ? file : "(null)");
        char * uri = NULL;

        uri = UT_go_shell_arg_to_uri (file);
        g_printerr("[DEBUG] 4-5. Converted to URI: %s\n", uri ? uri : "(null)");

        XAP_Frame * pFrame = newFrame();
        g_printerr("[DEBUG] 4-6. New frame created for file\n");

        UT_Error error = pFrame->loadDocument (uri, IEFT_Unknown, true);
        g_printerr("[DEBUG] 4-7. loadDocument finished with error code: %d\n", error);
        g_free (uri);

        if (UT_IS_IE_SUCCESS(error))
        {
            g_printerr("[DEBUG] 4-8. loadDocument succeeded\n");
            kWindowsOpened++;
            if (error == UT_IE_TRY_RECOVER) {
                pFrame->showMessageBox(AP_STRING_ID_MSG_OpenRecovered,
                           XAP_Dialog_MessageBox::b_O,
                           XAP_Dialog_MessageBox::a_OK);
            }
        }
        else
        {
            g_printerr("[DEBUG] 4-9. loadDocument failed, opening fallback untitled document\n");
            kWindowsOpened++;
            pFrame->loadDocument((const char *)NULL, IEFT_Unknown);
            pFrame->raise();

            errorMsgBadFile (pFrame, file, error);
        }

        if (args->m_sMerge) {
            g_printerr("[DEBUG] 4-10. Processing mail merge link\n");
            PD_Document * pDoc = static_cast<PD_Document*>(pFrame->getCurrentDoc());
            pDoc->setMailMergeLink(args->m_sMerge);
        }
    }

    if (kWindowsOpened == 0)
    {
        g_printerr("[DEBUG] 4-11. kWindowsOpened is 0, opening untitled fallback frame\n");
        // no documents specified or openable, open an untitled one
        
        XAP_Frame * pFrame = newFrame();
        pFrame->loadDocument((const char *)NULL, IEFT_Unknown);
        if (args->m_sMerge) {
            PD_Document * pDoc = static_cast<PD_Document*>(pFrame->getCurrentDoc());
            pDoc->setMailMergeLink(args->m_sMerge);
        }
    }

    g_printerr("[DEBUG] 4-12. Leaving AP_App::openCmdLineFiles successfully\n");
    return true;
}

bool AP_App::openCmdLinePlugins(const AP_Args * Args, bool &bSuccess)
{
	if(Args->m_sPluginArgs)
	{
//
// Start a plugin rather than the main abiword application.
//
	    const char * szName = NULL;
		XAP_Module * pModule = NULL;
		const char * szRequest = NULL;
		bool bFound = false;	
		if(Args->m_sPluginArgs[0])
		{
			szRequest = Args->m_sPluginArgs[0];
			const UT_GenericVector<XAP_Module*> * pVec = XAP_ModuleManager::instance().enumModules ();
			UT_DEBUGMSG((" %d plugins loaded \n",pVec->getItemCount()));
			for (UT_sint32 i = 0; (i < pVec->size()) && !bFound; i++)
			{
				pModule = pVec->getNthItem (i);
				szName = pModule->getModuleInfo()->name;
				UT_DEBUGMSG(("%s\n", szName));
				if(strcmp(szName,szRequest) == 0)
				{
					bFound = true;
				}
			}
		}
		if(!bFound)
		{
			fprintf(stderr, "Plugin %s not found or loaded \n",szRequest);
			bSuccess = false;
			return false;
		}
//
// You must put the name of the ev_EditMethod in the usage field
// of the plugin registered information.
//
		const char * evExecute = pModule->getModuleInfo()->usage;
		EV_EditMethodContainer* pEMC = Args->getApp()->getEditMethodContainer();
		const EV_EditMethod * pInvoke = pEMC->findEditMethodByName(evExecute);
		if(!pInvoke)
		{
			fprintf(stderr, "Plugin %s invoke method %s not found \n",
					Args->m_sPluginArgs[0],evExecute);
			bSuccess = false;
			return false;
		}
//
// Execute the plugin, then quit
//
		UT_String *sCommandLine = Args->getPluginOptions();
		bSuccess = ev_EditMethod_invoke(pInvoke, *sCommandLine);
		delete sCommandLine;
		return false;
	}
	return true;
}


bool	AP_App::initialize(void)
{
	return XAP_App_BaseClass::initialize(AP_PREF_KEY_KeyBindings,AP_PREF_DEFAULT_KeyBindings);
}

void AP_App::errorMsgBadArg (AP_Args *, int)
{
	UT_ASSERT_HARMLESS(UT_SHOULD_NOT_HAPPEN);
}

void AP_App::errorMsgBadFile(XAP_Frame *, const char *, UT_Error)
{
	UT_ASSERT_HARMLESS(UT_SHOULD_NOT_HAPPEN);
}

bool AP_App::doWindowlessArgs (const AP_Args *, bool & /*bSuccess*/)
{
	return false;
}

void AP_App::saveRecoveryFiles()
{
	IEFileType abiType = IE_Imp::fileTypeForSuffix(".abw");

	for(UT_sint32 i = 0; i < m_vecFrames.getItemCount(); i++) {
		XAP_Frame * curFrame = m_vecFrames[i];
		if(!curFrame) {
			continue;
		}
		try {
			if (NULL == curFrame->getFilename()) {
				curFrame->backup(".abw.saved",abiType);
			}
			else {
				curFrame->backup(".saved",abiType);
			}
		}
		catch(...) {
			// just continue
		}
	}
}

