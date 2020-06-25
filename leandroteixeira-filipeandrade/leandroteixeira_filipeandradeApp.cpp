/***************************************************************
 * Name:      leandroteixeira_filipeandradeApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2017-06-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "leandroteixeira_filipeandradeApp.h"

//(*AppHeaders
#include "leandroteixeira_filipeandradeMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(leandroteixeira_filipeandradeApp);

bool leandroteixeira_filipeandradeApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	leandroteixeira_filipeandradeFrame* Frame = new leandroteixeira_filipeandradeFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
        