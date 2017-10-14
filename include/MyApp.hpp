#ifndef WXWIDGETS_MYAPP_HPP
#define WXWIDGETS_MYAPP_HPP

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

namespace app {
    class MyApp: public wxApp {
        virtual bool OnInit() override;
    };
}

#endif //WXWIDGETS_MYAPP_HPP
