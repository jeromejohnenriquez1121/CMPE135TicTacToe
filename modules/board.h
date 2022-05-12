//
// Created by Jerome Enriquez on 5/10/22.
//

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

#include "computer_player.h"

#ifndef BOARD_H
#define BOARD_H

#include "mark_enum.h"



class Board : public wxFrame{
public:
    //Constructor
    Board(const wxString& title);

    // Event handlers
    void markQuare1(wxCommandEvent& event);
    void markQuare2(wxCommandEvent& event);
    void markQuare3(wxCommandEvent& event);
    void markQuare4(wxCommandEvent& event);
    void markQuare5(wxCommandEvent& event);
    void markQuare6(wxCommandEvent& event);
    void markQuare7(wxCommandEvent& event);
    void markQuare8(wxCommandEvent& event);
    void markQuare9(wxCommandEvent& event);
    void clearBoard(wxCommandEvent& event);
    void changeMode(wxCommandEvent& event);

    // Member methods
    void markSquare(MarkType mark, int index);
    bool isFilled(int index);
    bool checkWin();

    // wxButtons used for the game
    wxButton *button1;
    wxButton *button2;
    wxButton *button3;
    wxButton *button4;
    wxButton *button5;
    wxButton *button6;
    wxButton *button7;
    wxButton *button8;
    wxButton *button9;
    wxButton *clearButton;
    wxButton *changeModeButton;

private:
    // wxPanels used in the game
    wxPanel *gamePanel;
    wxStaticText *titleText;

    // Instance Variables
    bool hasWinner;
    bool filledSquares[9];

    wxDECLARE_EVENT_TABLE();
};


enum ButtonID
{
    Button1ID = wxID_LAST + 1,
    Button2ID,
    Button3ID,
    Button4ID,
    Button5ID,
    Button6ID,
    Button7ID,
    Button8ID,
    Button9ID,
    ClearButtonID,
    ChangeModeID
};



#endif //BOARD_H
