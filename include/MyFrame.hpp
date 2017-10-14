#ifndef WXWIDGETS_MYFRAME_HPP
#define WXWIDGETS_MYFRAME_HPP

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

namespace app {
    class MyFrame: public wxFrame {
    public:
        MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

    DECLARE_EVENT_TABLE();

    private:
        void OnHello(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
    };

    enum ID: unsigned char{HELLO = 1, EXIT, ABOUT};
}

#endif //WXWIDGETS_MYFRAME_HPP
