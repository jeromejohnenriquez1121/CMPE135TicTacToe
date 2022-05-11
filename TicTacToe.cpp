
// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

// for all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWidgets headers)
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "modules/board.h"

// Define a new application type, each program should derive a class from wxApp
class MyApp : public wxApp
{
public:

    virtual bool OnInit();
};


//class MyFrame : public wxFrame
//{
//public:
//    // ctor(s)
//    MyFrame(const wxString& title);
//
//    // event handlers (these functions should _not_ be virtual)
//    void OnQuit(wxCommandEvent& event);
//    void OnAbout(wxCommandEvent& event);
//    void StartGame(wxCommandEvent &event);
//
//private:
//    wxPanel *start_panel;
//    wxPanel *game_panel;
//
//wxDECLARE_EVENT_TABLE();
//};

// ----------------------------------------------------------------------------
// constants
// ----------------------------------------------------------------------------


enum
{
    // menu items
    Minimal_Quit = wxID_EXIT,
    Minimal_About = wxID_ABOUT,
    Start_Button = wxID_ANY,
};

// ----------------------------------------------------------------------------
// event tables and other macros for wxWidgets
// ----------------------------------------------------------------------------


//wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
//                EVT_MENU(Minimal_Quit,  MyFrame::OnQuit)
//                EVT_MENU(Minimal_About, MyFrame::OnAbout)
//wxEND_EVENT_TABLE()



// Similar to main function
IMPLEMENT_APP(MyApp)

// ----------------------------------------------------------------------------
// the application class
// ----------------------------------------------------------------------------

bool MyApp::OnInit()
{

    if ( !wxApp::OnInit() )
        return false;

    //MyFrame *frame = new MyFrame("TicTacToe");

    // frame->Show(true);

    Board *TicTacToeBoard = new Board("TicTacToe");
    TicTacToeBoard->Show(true);

    return true;
}

// ----------------------------------------------------------------------------
// main frame
// ----------------------------------------------------------------------------

//MyFrame::MyFrame(const wxString& title)
//        : wxFrame(NULL, wxID_ANY, title)
//{
//
//
//#if wxUSE_MENUS
//    wxMenu *fileMenu = new wxMenu;
//    wxMenu *helpMenu = new wxMenu;
//    helpMenu->Append(Minimal_About, "&About\tF1", "Show about dialog");
//    fileMenu->Append(Minimal_Quit, "E&xit\tAlt-X", "Quit this program");
//
//    wxMenuBar *menuBar = new wxMenuBar();
//    menuBar->Append(fileMenu, "&File");
//    menuBar->Append(helpMenu, "&Help");
//
//    SetMenuBar(menuBar);
//#endif
//
//    bool game_started = false;
//
//    // Title panel
//    wxStaticText *title_text = new wxStaticText(this, wxID_ANY, "Welcome to Tic Tac Toe",wxDefaultPosition, wxSize(600, 50), wxALIGN_CENTRE_HORIZONTAL);
//    title_text->SetBackgroundColour(wxColor(100, 100, 200));
//
//
//}
//
//
//// event handlers
//
//void MyFrame::OnQuit(wxCommandEvent& WXUNUSED(event))
//{
//    // true is to force the frame to close
//    Close(true);
//}
//
//void MyFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
//{
//    wxMessageBox(wxString::Format
//                         (
//                                 "Welcome to %s!\n"
//                                 "\n"
//                                 "This is the minimal wxWidgets sample\n"
//                                 "running under %s.",
//                                 wxVERSION_STRING,
//                                 wxGetOsDescription()
//                         ),
//                 "About wxWidgets minimal sample",
//                 wxOK | wxICON_INFORMATION,
//                 this);
//}
//
//void MyFrame::StartGame(wxCommandEvent& event){
//    start_panel->Show(false);
//    game_panel->Show(true);
//}