#include <memory>
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include <MyApp.hpp>
#include <MyFrame.hpp>

namespace app {
    bool MyApp::OnInit()  {
        std::shared_ptr<wxFrame> frame(new MyFrame("Hello World", wxPoint(50, 50), wxSize(450, 340)));
        frame->Show(true);
        return true;
    }
}
