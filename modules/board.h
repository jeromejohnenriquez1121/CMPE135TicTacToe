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

#include "marks_enum.h"

#ifndef BOARD_H
#define BOARD_H

class Board : public wxFrame{
public:
    //Constructor
    Board(const wxString& title);

    // Event handlers


    //void ClearBoard(wxCommandEvent &event);
    void markSquare(MarkType mark, int index);
    bool isFilled(int index);

private:
    wxPanel *startPanel;
    wxPanel *gamePanel;

    wxButton *boardSquares[9];
    bool filledSquares[9];
};



#endif //BOARD_H
