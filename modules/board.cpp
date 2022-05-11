//
// Created by Jerome Enriquez on 5/10/22.
//

#include "board.h"

Board::Board(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title) {

    for(int i = 0; i < 9; i++){
        filledSquares[i] = false;
    }

    wxBoxSizer *vSizer = new wxBoxSizer(wxVERTICAL);

    wxStaticText *titleText = new wxStaticText(
            this,
            wxID_ANY,
            "Tic Tac Toe",
            wxDefaultPosition,
            wxSize(600, 50),
            wxALIGN_CENTRE_HORIZONTAL);



    titleText->SetBackgroundColour(wxColor(100, 100, 200));


    startPanel = new wxPanel(this,
                             wxID_ANY,
                             wxDefaultPosition,
                             wxSize(600, 300),
                             wxALIGN_CENTRE_HORIZONTAL);

    wxButton *startButton = new wxButton(startPanel,
                                         wxID_ANY,
                                         "Start game",
                                         wxDefaultPosition,
                                         wxDefaultSize,
                                         wxALIGN_CENTER);

    gamePanel = new wxPanel(this,
                             wxID_ANY,
                             wxDefaultPosition,
                             wxSize(600, 300),
                             wxALIGN_CENTRE_HORIZONTAL);

    gamePanel->SetBackgroundColour(wxColor(0, 66, 99));
    gamePanel->Show(false);




    vSizer->Add(titleText, 0, wxEXPAND);
    vSizer->Add(startPanel, 1, wxALIGN_CENTRE_HORIZONTAL);
    vSizer->Add(gamePanel, 1, wxALIGN_CENTRE_HORIZONTAL);

    //   vSizer->Add(startButton, 0, wxALIGN_CENTRE_HORIZONTAL);



    this->SetSizerAndFit(vSizer);
}



void Board::markSquare(MarkType mark, int index){
    if(index >= 1 && index <= 9 && isFilled(index)){
        if(mark == MarkType::X){
            boardSquares[index]->SetLabel('X');
        }
        else if(mark == MarkType::O){
            boardSquares[index]->SetLabel('O');
        }
    }
    else{
        std::cerr << "Index out of bounds or square filled" << std::endl;
    }
}

bool Board::isFilled(int index){
    return filledSquares[index];
}

void Board::StartGame(wxCommandEvent &event) {
    startPanel->Show(false);
    gamePanel->Show(true);
}