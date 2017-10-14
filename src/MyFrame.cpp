#include <memory>
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include <MyFrame.hpp>

namespace app {

    MyFrame::MyFrame(const wxString &title, const wxPoint &pos,
                     const wxSize &size) : wxFrame(nullptr, wxID_ANY, title, pos, size) {

#if wxUSE_MENUS
        // file menu
        wxMenu* menuFile{new wxMenu};
        menuFile->Append(ID::HELLO, "&Hello...\tCtrl-H",
                         "Help string shown in status bar for this menu item");
        menuFile->AppendSeparator();
        menuFile->Append(wxID_EXIT, _T("Exit    Ctrl-Q"), _T("Exit wxWidgets"));

        // help menu
        wxMenu* menuHelp{new wxMenu};
        menuHelp->Append(wxID_ABOUT, _T("About..."), _T("About wxWidgets"));

        // create menu bar
        wxMenuBar* menuBar{new wxMenuBar};
        menuBar->Append(menuFile, _T("&File"));
        menuBar->Append(menuHelp, _T("&Help"));

        SetMenuBar(menuBar);
#endif

#if wxUSE_STATUSBAR
        CreateStatusBar();
        SetStatusText("Welcome to wxWidgets!");
#endif
    }

    void MyFrame::OnExit(wxCommandEvent &event) {
        Close(true);
    }

    void MyFrame::OnAbout(wxCommandEvent& event) {
        wxMessageBox( "This is a wxWidgets' Hello world sample",
                      "About Hello World", wxOK | wxICON_INFORMATION );
    }

    void MyFrame::OnHello(wxCommandEvent& event) {
        wxLogMessage("Hello world from wxWidgets!");
    }

    wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
                    EVT_MENU(ID::HELLO, MyFrame::OnHello)
                    EVT_MENU(wxID_EXIT,  MyFrame::OnExit)
                    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
    wxEND_EVENT_TABLE()
}
