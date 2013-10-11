//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : editorsettingsmiscbasepanel.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __editorsettingsmiscbasepanel__
#define __editorsettingsmiscbasepanel__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/statline.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/aui/auibook.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class EditorSettingsMiscBasePanel
///////////////////////////////////////////////////////////////////////////////
class EditorSettingsMiscBasePanel : public wxPanel 
{
	private:
	
	protected:
		wxAuiNotebook* m_auinotebook1;
		wxPanel* m_panel1;
		wxStaticText* m_staticText7;
		wxChoice* m_choiceIconSet;
		wxStaticText* m_staticText8;
		wxChoice* m_toolbarIconSize;
		wxCheckBox* m_useSingleToolbar;
		wxCheckBox* m_checkBoxEnableMSWTheme;
		wxStaticLine* m_staticline1;
		wxCheckBox* m_showSplashScreen;
		wxCheckBox* m_singleAppInstance;
		wxCheckBox* m_versionCheckOnStartup;
		wxCheckBox* m_fullFilePath;
		wxPanel* m_panel2;
		wxStaticText* m_staticText1;
		wxChoice* m_fileEncoding;
		wxCheckBox* m_SetLocale;
		
		wxStaticText* m_staticTextLocale;
		wxChoice* m_AvailableLocales;
		wxPanel* m_panel3;
		wxStaticText* m_staticText2;
		wxButton* m_clearButton;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_maxItemsFindReplace;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_spinCtrlMaxOpenTabs;
		wxPanel* m_panel4;
		wxStaticText* m_staticText6;
		wxChoice* m_choice4;
		wxButton* m_buttonOpenLog;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnEnableThemeUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void LocaleChkUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void LocaleStaticUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void LocaleChoiceUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void OnClearButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClearUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void OnLogVerbosityChanged( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnShowLogFile( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		EditorSettingsMiscBasePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 449,382 ), long style = wxTAB_TRAVERSAL );
		~EditorSettingsMiscBasePanel();
	
};

#endif //__editorsettingsmiscbasepanel__
