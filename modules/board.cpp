//
// Created by Jerome Enriquez on 5/10/22.
//

#include "board.h"
#include <sstream>

static Player *p = new Player("Human", MarkType::X);
static ComputerPlayer *cp = new ComputerPlayer();

Board::Board(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title) {

    for(int i = 0; i < 9; i++){
        filledSquares[i] = false;
    }

    win = false;

    wxBoxSizer *vSizer = new wxBoxSizer(wxVERTICAL);

    titleText = new wxStaticText(
            this,
            wxID_ANY,
            " ",
            wxDefaultPosition,
            wxSize(625, 50),
            wxALIGN_CENTRE_HORIZONTAL);

    titleText->SetBackgroundColour(wxColor(100, 100, 200));

    this->SetSizerAndFit(vSizer);

    wxPanel *gamePanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(625, 400), wxALIGN_CENTRE_HORIZONTAL);

    button1 = new wxButton(gamePanel, Button1ID, " ", wxPoint(100, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button2 = new wxButton(gamePanel, Button2ID, " ", wxPoint(200, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button3 = new wxButton(gamePanel, Button3ID, " ", wxPoint(300, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    button4 = new wxButton(gamePanel, Button4ID, " ", wxPoint(100, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button5 = new wxButton(gamePanel, Button5ID, " ", wxPoint(200, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button6 = new wxButton(gamePanel, Button6ID, " ", wxPoint(300, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    button7 = new wxButton(gamePanel, Button7ID, " ", wxPoint(100, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button8 = new wxButton(gamePanel, Button8ID, " ", wxPoint(200, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button9 = new wxButton(gamePanel, Button9ID, " ", wxPoint(300, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    clearButton = new wxButton(gamePanel, ClearButtonID, "Restart", wxPoint(500, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    changeModeButton = new wxButton(gamePanel, ChangeModeID, "Mode: Smart", wxPoint(500, 350), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);;


    vSizer->Add(titleText, 0, wxEXPAND);
    vSizer->Add(gamePanel, 1, wxEXPAND);

    this->SetSizerAndFit(vSizer);
}



void Board::markSquare(MarkType mark, int index){
    if(index >= 0 && index < 9 && !isFilled(index) && !win){
        if(index == 0){
            if(mark == MarkType::X){
                button1->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button1->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();

        }
        else if(index == 1){
            if(mark == MarkType::X){
                button2->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button2->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();


        }
        else if(index == 2){
            if(mark == MarkType::X){
                button3->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button3->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();


        }
        else if(index == 3){
            if(mark == MarkType::X){
                button4->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button4->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();


        }
        else if(index == 4){
            if(mark == MarkType::X){
                button5->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button5->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();


        }
        else if(index == 5){
            if(mark == MarkType::X){
                button6->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button6->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();



        }
        else if(index == 6){
            if(mark == MarkType::X){
                button7->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button7->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();



        }
        else if(index == 7){
            if(mark == MarkType::X){
                button8->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button8->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();



        }
        else if(index == 8){
            if(mark == MarkType::X){
                button9->SetLabel('X');
            }
            else if(mark == MarkType::O){
                button9->SetLabel('O');
            }
            filledSquares[index] = true;
            checkWin();

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
    markSquare(MarkType::X, 0);
    cp->setMark(MarkType::O, this);
}

void Board::markQuare2(wxCommandEvent &event) {
    markSquare(MarkType::X, 1);
    cp->setMark(MarkType::O, this);

}

void Board::markQuare3(wxCommandEvent &event) {
    markSquare(MarkType::X, 2);
    cp->setMark(MarkType::O, this);

}

void Board::markQuare4(wxCommandEvent &event) {
    markSquare(MarkType::X, 3);
    cp->setMark(MarkType::O, this);

}

void Board::markQuare5(wxCommandEvent &event) {
    markSquare(MarkType::X, 4);
    cp->setMark(MarkType::O, this);

}

void Board::markQuare6(wxCommandEvent &event) {
    markSquare(MarkType::X, 5);
    cp->setMark(MarkType::O, this);

}

void Board::markQuare7(wxCommandEvent &event) {
    markSquare(MarkType::X, 6);
    cp->setMark(MarkType::O, this);

}

void Board::markQuare8(wxCommandEvent &event) {
    markSquare(MarkType::X, 7);
    cp->setMark(MarkType::O, this);

}

void Board::markQuare9(wxCommandEvent &event) {
    markSquare(MarkType::X, 8);
    cp->setMark(MarkType::O, this);

}

void Board::clearBoard(wxCommandEvent &event) {
    button1->SetLabel(" ");
    button2->SetLabel(" ");
    button3->SetLabel(" ");
    button4->SetLabel(" ");
    button5->SetLabel(" ");
    button6->SetLabel(" ");
    button7->SetLabel(" ");
    button8->SetLabel(" ");
    button9->SetLabel(" ");

    for(int i = 0; i < 9; i++){
        filledSquares[i] = false;
    }

    titleText->SetLabel(" ");
    win = false;
    std::cout << "Cleared squares" << std::endl;

}

bool Board::checkWin(){
    std::stringstream ss1;
    std::stringstream ss2;

    std::string pScore; std::string cScore;

    // Rows
    if(button1->GetLabel() == 'X' && button2->GetLabel() == 'X' && button3->GetLabel() == 'X') {
        win = true;
        p->incrementScore();

    }
    else if(button1->GetLabel() == 'O' && button2->GetLabel() == 'O' && button3->GetLabel() == 'O'){
        win = true;
        cp->incrementScore();

    }

    else if(button4->GetLabel() == 'X' && button5->GetLabel() == 'X' && button6->GetLabel() == 'X'){
        win = true;
        p->incrementScore();

    }else if(button4->GetLabel() == 'O' && button5->GetLabel() == 'O' && button6->GetLabel() == 'O'){
        win = true;
        cp->incrementScore();

    }

    else if(button7->GetLabel() == 'X' && button8->GetLabel() == 'X' && button9->GetLabel() == 'X'){
        win = true;
        p->incrementScore();

    }else if(button7->GetLabel() == 'O' && button8->GetLabel() == 'O' && button9->GetLabel() == 'O'){
        win = true;
        cp->incrementScore();

    }

    else if(button1->GetLabel() == 'X' && button4->GetLabel() == 'X' && button7->GetLabel() == 'X'){
        win = true;
        p->incrementScore();

    }else if(button1->GetLabel() == 'O' && button4->GetLabel() == 'O' && button7->GetLabel() == 'O'){
        win = true;
        cp->incrementScore();

    }

    else if(button2->GetLabel() == 'X' && button5->GetLabel() == 'X' && button8->GetLabel() == 'X'){
        win = true;
        p->incrementScore();

    }else if(button2->GetLabel() == 'O' && button5->GetLabel() == 'O' && button8->GetLabel() == 'O'){
        win = true;
        cp->incrementScore();

    }

    else if(button3->GetLabel() == 'X' && button6->GetLabel() == 'X' && button9->GetLabel() == 'X'){
        win = true;
        p->incrementScore();

    }else if(button3->GetLabel() == 'O' && button6->GetLabel() == 'O' && button9->GetLabel() == 'O'){
        win = true;
        cp->incrementScore();

    }

    else if(button1->GetLabel() == 'X' && button5->GetLabel() == 'X' && button9->GetLabel() == 'X'){
        win = true;
        p->incrementScore();

    }else if(button1->GetLabel() == 'O' && button5->GetLabel() == 'O' && button9->GetLabel() == 'O') {
        win = true;
        cp->incrementScore();
    }

    else if(button3->GetLabel() == 'X' && button5->GetLabel() == 'X' && button7->GetLabel() == 'X'){
        win = true;
        p->incrementScore();

    }else if(button3->GetLabel() == 'O' && button5->GetLabel() == 'O' && button7->GetLabel() == 'O') {
        win = true;
        cp->incrementScore();
    }

    ss1 << p->getScore();
    ss1 >> pScore;
    ss2 << cp->getScore();
    ss2 >> cScore;
    std::cout << "CPU score: " << cScore << std::endl;

    if(win){
        titleText->SetLabel(p->getName() + " : " + pScore + " | " + cp->getName() + " : " + cScore);
    }

    return true;
}

void Board::changeMode(wxCommandEvent& event){
    if(cp->getMode() == "Novice"){
        cp->setMode(ModeType::Smart);
    }
    else if(cp->getMode() == "Smart"){
        cp->setMode(ModeType::Novice);
    }

    changeModeButton->SetLabel(cp->getMode());

}



