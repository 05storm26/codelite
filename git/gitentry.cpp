
//////////////////////////////////////////////////////////////////////////////

#include "gitentry.h"

const wxEventType wxEVT_GIT_CONFIG_CHANGED = ::wxNewEventType();

#ifdef __WXMSW__
#    define GIT_EXE "git"
#    define GITK_EXE "gitk"
#elif defined(__WXMAC__)
#    define GIT_EXE "/usr/local/git/bin/git"
#    define GITK_EXE "/usr/local/git/bin/gitk"
#else
#    define GIT_EXE "/usr/bin/git"
#    define GITK_EXE "/usr/bin/gitk"
#endif


GitEntry::GitEntry()
    : clConfigItem("git-settings")
#ifdef __WXMSW__
    , m_flags(Git_Show_Terminal)
#else
    , m_flags(0)
#endif
    , m_gitDiffDlgSashPos(0)
    , m_gitConsoleSashPos(0)
    , m_colourTrackedFile(*wxGREEN)
    , m_colourDiffFile(*wxRED)
    , m_gitCommitDlgHSashPos(0)
    , m_gitCommitDlgVSashPos(0)
{
}

GitEntry::~GitEntry()
{
}

void GitEntry::FromJSON(const JSONElement& json)
{
    m_entries           = json.namedObject("m_entries").toStringMap();
    wxString track, diff;
    track               = json.namedObject("m_colourTrackedFile").toString();
    diff                = json.namedObject("m_colourDiffFile").toString();
    m_pathGIT           = json.namedObject("m_pathGIT").toString();
    m_pathGITK          = json.namedObject("m_pathGITK").toString();
    m_flags             = json.namedObject("m_flags").toSize_t(m_flags);
    m_gitDiffDlgSashPos = json.namedObject("m_gitDiffDlgSashPos").toInt(m_gitDiffDlgSashPos);
    m_gitConsoleSashPos = json.namedObject("m_gitConsoleSashPos").toInt(m_gitConsoleSashPos);
    m_gitCommitDlgHSashPos = json.namedObject("m_gitCommitDlgHSashPos").toInt(m_gitCommitDlgHSashPos);
    m_gitCommitDlgVSashPos = json.namedObject("m_gitCommitDlgVSashPos").toInt(m_gitCommitDlgVSashPos);
    
    // override the colour only if it is a valid colour
    if ( !track.IsEmpty() ) {
        m_colourTrackedFile = track;
    }
    if ( !diff.IsEmpty() ) {
        m_colourDiffFile = diff;
    }
}

JSONElement GitEntry::ToJSON() const
{
    JSONElement json = JSONElement::createObject(GetName());
    json.addProperty("m_entries",           m_entries);
    if ( m_colourTrackedFile.IsOk() ) {
        json.addProperty("m_colourTrackedFile", m_colourTrackedFile.GetAsString(wxC2S_HTML_SYNTAX));
    }
    
    if ( m_colourDiffFile.IsOk() ) {
        json.addProperty("m_colourDiffFile",    m_colourDiffFile.GetAsString(wxC2S_HTML_SYNTAX));
    }
    
    json.addProperty("m_pathGIT",           m_pathGIT);
    json.addProperty("m_pathGITK",          m_pathGITK);
    json.addProperty("m_flags",             m_flags);
    json.addProperty("m_gitDiffDlgSashPos", m_gitDiffDlgSashPos);
    json.addProperty("m_gitConsoleSashPos", m_gitConsoleSashPos);
    json.addProperty("m_gitCommitDlgHSashPos", m_gitCommitDlgHSashPos);
    json.addProperty("m_gitCommitDlgVSashPos", m_gitCommitDlgVSashPos);
    return json;
}

wxString GitEntry::GetGITExecutablePath() const
{
    if ( m_pathGIT.IsEmpty() ) {
        return GIT_EXE;
        
    } else {
        return m_pathGIT;
    }
}

wxString GitEntry::GetGITKExecutablePath() const
{
    if ( m_pathGITK.IsEmpty() ) {
        return GITK_EXE;
        
    } else {
        return m_pathGITK;
    }
}
