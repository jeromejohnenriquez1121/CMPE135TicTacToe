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
            "Welcome Tic Tac Toe",
            wxDefaultPosition,
            wxSize(600, 50),
            wxALIGN_CENTRE_HORIZONTAL);

    titleText->SetBackgroundColour(wxColor(100, 100, 200));

    this->SetSizerAndFit(vSizer);

    wxPanel *gamePanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(600, 400), wxALIGN_CENTRE_HORIZONTAL);

    button1 = new wxButton(gamePanel, Button1ID, "1", wxPoint(100, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button2 = new wxButton(gamePanel, Button2ID, "2", wxPoint(200, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button3 = new wxButton(gamePanel, Button3ID, "3", wxPoint(300, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    button4 = new wxButton(gamePanel, Button4ID, "3", wxPoint(100, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button5 = new wxButton(gamePanel, Button5ID, "4", wxPoint(200, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button6 = new wxButton(gamePanel, Button6ID, "5", wxPoint(300, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    button7 = new wxButton(gamePanel, Button7ID, "6", wxPoint(100, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button8 = new wxButton(gamePanel, Button8ID, "7", wxPoint(200, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button9 = new wxButton(gamePanel, Button9ID, "8", wxPoint(300, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);


    vSizer->Add(titleText, 0, wxEXPAND);
    vSizer->Add(gamePanel, 1, wxEXPAND);


    this->SetSizerAndFit(vSizer);


}



void Board::markSquare(MarkType mark, int index){
    if(index >= 1 && index <= 9 && !isFilled(index)){
        if(index == 1){
            if(mark == MarkType::X){
                button1->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button1->SetLabel('O');
            }
        }
        else if(index == 2){
            if(mark == MarkType::X){
                button2->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button2->SetLabel('O');
            }
        }
        else if(index == 3){
            if(mark == MarkType::X){
                button3->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button3->SetLabel('O');
            }
        }
        else if(index == 4){
            if(mark == MarkType::X){
                button4->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button4->SetLabel('O');
            }
        }
        else if(index == 5){
            if(mark == MarkType::X){
                button5->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button5->SetLabel('O');
            }
        }
        else if(index == 6){
            if(mark == MarkType::X){
                button6->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button6->SetLabel('O');
            }
        }
        else if(index == 7){
            if(mark == MarkType::X){
                button7->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button7->SetLabel('O');
            }
        }
        else if(index == 8){
            if(mark == MarkType::X){
                button8->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button8->SetLabel('O');
            }
        }
        else if(index == 9){
            if(mark == MarkType::X){
                button9->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button9->SetLabel('O');
            }
        }
    }
    else{
        std::cerr << "Index out of bounds or square filled" << std::endl;
    }
}

bool Board::isFilled(int index){
    return filledSquares[index];
}

void Board::markQuare1(wxCommandEvent &event) {
    markSquare(MarkType::X, 1);
}

void Board::markQuare2(wxCommandEvent &event) {
    markSquare(MarkType::X, 2);
}

void Board::markQuare3(wxCommandEvent &event) {
    markSquare(MarkType::X, 3);
}

void Board::markQuare4(wxCommandEvent &event) {
    markSquare(MarkType::X, 4);
}

void Board::markQuare5(wxCommandEvent &event) {
    markSquare(MarkType::X, 5);
}

void Board::markQuare6(wxCommandEvent &event) {
    markSquare(MarkType::X, 6);
}

void Board::markQuare7(wxCommandEvent &event) {
    markSquare(MarkType::X, 7);
}

void Board::markQuare8(wxCommandEvent &event) {
    markSquare(MarkType::X, 8);
}

void Board::markQuare9(wxCommandEvent &event) {
    markSquare(MarkType::X, 9);
}


