#ifndef BUILDTABTOPPANEL_H
#define BUILDTABTOPPANEL_H
#include "cl_defs.h"

#if CL_USE_NEW_BUILD_TAB

#include "wxcrafter.h"

class NewBuildTab;
class BuildTabTopPanel : public BuildTabTopPanelBaseClass
{
private:
    NewBuildTab* m_buildTab;

public:
    BuildTabTopPanel(wxWindow* parent);
    virtual ~BuildTabTopPanel();
protected:
    virtual void OnAutoScrollUI(wxUpdateUIEvent& event);
    virtual void OnAutoScroll(wxCommandEvent& event);
    virtual void OnPaste(wxCommandEvent& event);
    virtual void OnPasteUI(wxUpdateUIEvent& event);
    virtual void OnCopyBuildOutput(wxCommandEvent& event);
    virtual void OnCopyBuildOutputUI(wxUpdateUIEvent& event);
    virtual void OnClearBuildOutput(wxCommandEvent& event);
    virtual void OnClearBuildOutputUI(wxUpdateUIEvent& event);
    virtual void OnSaveBuildOutput(wxCommandEvent& event);
    virtual void OnSaveBuildOutputUI(wxUpdateUIEvent& event);
    virtual void OnToolPinCommandToolClicked(wxCommandEvent& event);
};
#endif // CL_USE_NEW_BUILD_TAB
#endif // BUILDTABTOPPANEL_H
