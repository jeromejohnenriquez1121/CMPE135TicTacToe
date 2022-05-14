
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
#include "modules/computer_player.h"

// Define a new application type, each program should derive a class from wxApp
class MyApp : public wxApp
{
public:

    virtual bool OnInit();
    Board *TicTacToeBoard = new Board("TicTacToe");
};






// ----------------------------------------------------------------------------
// event tables and other macros for wxWidgets
// ----------------------------------------------------------------------------

wxBEGIN_EVENT_TABLE(Board, wxFrame)
                EVT_BUTTON(Button1ID, Board::markQuare1)
                EVT_BUTTON(Button2ID, Board::markQuare2)
                EVT_BUTTON(Button3ID, Board::markQuare3)
                EVT_BUTTON(Button4ID, Board::markQuare4)
                EVT_BUTTON(Button5ID, Board::markQuare5)
                EVT_BUTTON(Button6ID, Board::markQuare6)
                EVT_BUTTON(Button7ID, Board::markQuare7)
                EVT_BUTTON(Button8ID, Board::markQuare8)
                EVT_BUTTON(Button9ID, Board::markQuare9)
                EVT_BUTTON(ClearButtonID, Board::clearBoard)
                EVT_BUTTON(ChangeModeID, Board::changeMode)
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

    TicTacToeBoard->Show(true);

    return true;
}
