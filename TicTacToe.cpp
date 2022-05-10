
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


// Define a new application type, each program should derive a class from wxApp
class MyApp : public wxApp
{
public:

    virtual bool OnInit();
};


class MyFrame : public wxFrame
{
public:
    // ctor(s)
    MyFrame(const wxString& title);

    // event handlers (these functions should _not_ be virtual)
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void StartGame(wxCommandEvent &event);

private:
    wxPanel *start_panel;
    wxPanel *game_panel;

wxDECLARE_EVENT_TABLE();
};

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


wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
                EVT_MENU(Minimal_Quit,  MyFrame::OnQuit)
                EVT_MENU(Minimal_About, MyFrame::OnAbout)
                EVT_BUTTON(Start_Button, MyFrame::StartGame)
wxEND_EVENT_TABLE()

// Similar to main function
IMPLEMENT_APP(MyApp)

// ----------------------------------------------------------------------------
// the application class
// ----------------------------------------------------------------------------

bool MyApp::OnInit()
{

    if ( !wxApp::OnInit() )
        return false;

    MyFrame *frame = new MyFrame("TicTacToe");

    frame->Show(true);

    return true;
}

// ----------------------------------------------------------------------------
// main frame
// ----------------------------------------------------------------------------

MyFrame::MyFrame(const wxString& title)
        : wxFrame(NULL, wxID_ANY, title)
{


#if wxUSE_MENUS
    wxMenu *fileMenu = new wxMenu;
    wxMenu *helpMenu = new wxMenu;
    helpMenu->Append(Minimal_About, "&About\tF1", "Show about dialog");
    fileMenu->Append(Minimal_Quit, "E&xit\tAlt-X", "Quit this program");

    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, "&File");
    menuBar->Append(helpMenu, "&Help");

    SetMenuBar(menuBar);
#endif

    bool game_started = false;

    // Title panel
    wxStaticText *title_text = new wxStaticText(this, wxID_ANY, "Welcome to Tic Tac Toe",wxDefaultPosition, wxSize(600, 50), wxALIGN_CENTRE_HORIZONTAL);
    title_text->SetBackgroundColour(wxColor(100, 100, 200));

    game_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(600, 300));
    game_panel->Show(false);

    start_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(600, 300));
    wxButton *start_button = new wxButton(start_panel, wxID_ANY, "Start Game", wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    wxBoxSizer *v_sizer = new wxBoxSizer(wxVERTICAL);
    v_sizer->Add(title_text, 0, wxEXPAND);
    v_sizer->Add(game_panel, 1, wxALIGN_CENTER);
    v_sizer->Add(start_panel, 1, wxALIGN_CENTER);

    // First row
    wxButton *button1  = new wxButton(game_panel, wxID_ANY,"1" ,wxPoint(0, 0), wxSize(100, 100), wxALIGN_CENTER);
    wxButton *button2  = new wxButton(game_panel, wxID_ANY,"2" ,wxPoint(110, 0), wxSize(100, 100), wxALIGN_CENTER);
    wxButton *button3  = new wxButton(game_panel, wxID_ANY,"3" ,wxPoint(220, 0), wxSize(100, 100), wxALIGN_CENTER);

    // Second row
    wxButton *button4  = new wxButton(game_panel, wxID_ANY,"4" ,wxPoint(0, 100), wxSize(100, 100), wxALIGN_CENTER);
    wxButton *button5  = new wxButton(game_panel, wxID_ANY,"5" ,wxPoint(110, 100), wxSize(100, 100), wxALIGN_CENTER);
    wxButton *button6  = new wxButton(game_panel, wxID_ANY,"6" ,wxPoint(220, 100), wxSize(100, 100), wxALIGN_CENTER);

    // Third row
    wxButton *button7  = new wxButton(game_panel, wxID_ANY,"7" ,wxPoint(0, 200), wxSize(100, 100), wxALIGN_CENTER);
    wxButton *button8  = new wxButton(game_panel, wxID_ANY,"8" ,wxPoint(110, 200), wxSize(100, 100), wxALIGN_CENTER);
    wxButton *button9  = new wxButton(game_panel, wxID_ANY,"9" ,wxPoint(220, 200), wxSize(100, 100), wxALIGN_CENTER);


    wxBoxSizer *h_sizer1 = new wxBoxSizer(wxHORIZONTAL);

    v_sizer->Add(h_sizer1, 0, wxALIGN_CENTRE_HORIZONTAL);

    this->SetSizerAndFit(v_sizer);

}


// event handlers

void MyFrame::OnQuit(wxCommandEvent& WXUNUSED(event))
{
    // true is to force the frame to close
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
{
    wxMessageBox(wxString::Format
                         (
                                 "Welcome to %s!\n"
                                 "\n"
                                 "This is the minimal wxWidgets sample\n"
                                 "running under %s.",
                                 wxVERSION_STRING,
                                 wxGetOsDescription()
                         ),
                 "About wxWidgets minimal sample",
                 wxOK | wxICON_INFORMATION,
                 this);
}

void MyFrame::StartGame(wxCommandEvent& event){
    start_panel->Show(false);
    game_panel->Show(true);
}