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

    hasWinner = false;

    wxBoxSizer *vSizer = new wxBoxSizer(wxVERTICAL);

    titleText = new wxStaticText(
            this,
            wxID_ANY,
            " ",
            wxDefaultPosition,
            wxSize(625, 20),
            wxALIGN_CENTRE_HORIZONTAL);

    this->SetSizerAndFit(vSizer);

    gamePanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(625, 400), wxALIGN_CENTRE_HORIZONTAL);

    // First Row
    button1 = new wxButton(gamePanel, Button1ID, " ", wxPoint(100, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button2 = new wxButton(gamePanel, Button2ID, " ", wxPoint(200, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button3 = new wxButton(gamePanel, Button3ID, " ", wxPoint(300, 100), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    // Second Row
    button4 = new wxButton(gamePanel, Button4ID, " ", wxPoint(100, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button5 = new wxButton(gamePanel, Button5ID, " ", wxPoint(200, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button6 = new wxButton(gamePanel, Button6ID, " ", wxPoint(300, 200), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    // Third Row
    button7 = new wxButton(gamePanel, Button7ID, " ", wxPoint(100, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button8 = new wxButton(gamePanel, Button8ID, " ", wxPoint(200, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    button9 = new wxButton(gamePanel, Button9ID, " ", wxPoint(300, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);

    // Side Buttons
    clearButton = new wxButton(gamePanel, ClearButtonID, "Restart", wxPoint(500, 300), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
    changeModeButton = new wxButton(gamePanel, ChangeModeID, "Mode: Smart", wxPoint(500, 350), wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);;


    vSizer->Add(titleText, 0, wxEXPAND);
    vSizer->Add(gamePanel, 1, wxEXPAND);

    this->SetSizerAndFit(vSizer);
}

void Board::fillSquare(MarkType mark, wxButton *button, int index) {
    if(index >= 0 && index < 9 && !filledSquares[index] && !hasWinner){
        if(mark == MarkType::X){
            button->SetLabel("X");
        }
        else if(mark == MarkType::O){
            button->SetLabel("O");
        }

        filledSquares[index] = true;
        checkWin();
    }
    else if(index >= 0 && index < 9 && hasWinner){
        std::cerr << "Cannot fill squares if game ended." << std::endl;
    }
    else{
        std::cerr << "Index out of bounds." << std::endl;
    }
}

bool Board::isFilled(int index){
    return filledSquares[index];
}

void Board::markQuare1(wxCommandEvent &event) {
    fillSquare(p->getMark(), button1, 0);
    cp->setMark(cp->getMark(), this);
}

void Board::markQuare2(wxCommandEvent &event) {
    fillSquare(p->getMark(), button2, 1);
    cp->setMark(cp->getMark(), this);

}

void Board::markQuare3(wxCommandEvent &event) {
    fillSquare(MarkType::X, button3, 2);
    cp->setMark(MarkType::O, this);

}

void Board::markQuare4(wxCommandEvent &event) {
    fillSquare(p->getMark(), button4, 3);
    cp->setMark(cp->getMark(), this);

}

void Board::markQuare5(wxCommandEvent &event) {
    fillSquare(p->getMark(), button5, 4);
    cp->setMark(cp->getMark(), this);

}

void Board::markQuare6(wxCommandEvent &event) {
    fillSquare(p->getMark(), button6, 5);
    cp->setMark(cp->getMark(), this);

}

void Board::markQuare7(wxCommandEvent &event) {
    fillSquare(p->getMark(), button7, 6);
    cp->setMark(cp->getMark(), this);

}

void Board::markQuare8(wxCommandEvent &event) {
    fillSquare(p->getMark(), button8, 7);
    cp->setMark(cp->getMark(), this);

}

void Board::markQuare9(wxCommandEvent &event) {
    fillSquare(p->getMark(), button9, 8);
    cp->setMark(cp->getMark(), this);

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
    hasWinner = false;
    std::cout << "Cleared squares" << std::endl;

}

bool Board::checkWin(){
    std::stringstream ss1;
    std::stringstream ss2;

    std::string pScore; std::string cScore;

    // Rows
    if(button1->GetLabel() == 'X' && button2->GetLabel() == 'X' && button3->GetLabel() == 'X') {
        hasWinner = true;
        p->incrementScore();
    }
    else if(button1->GetLabel() == 'O' && button2->GetLabel() == 'O' && button3->GetLabel() == 'O'){
        hasWinner = true;
        cp->incrementScore();
    }
    else if(button4->GetLabel() == 'X' && button5->GetLabel() == 'X' && button6->GetLabel() == 'X'){
        hasWinner = true;
        p->incrementScore();
    }else if(button4->GetLabel() == 'O' && button5->GetLabel() == 'O' && button6->GetLabel() == 'O'){
        hasWinner = true;
        cp->incrementScore();
    }
    else if(button7->GetLabel() == 'X' && button8->GetLabel() == 'X' && button9->GetLabel() == 'X'){
        hasWinner = true;
        p->incrementScore();
    }else if(button7->GetLabel() == 'O' && button8->GetLabel() == 'O' && button9->GetLabel() == 'O'){
        hasWinner = true;
        cp->incrementScore();
    }
    else if(button1->GetLabel() == 'X' && button4->GetLabel() == 'X' && button7->GetLabel() == 'X'){
        hasWinner = true;
        p->incrementScore();
    }else if(button1->GetLabel() == 'O' && button4->GetLabel() == 'O' && button7->GetLabel() == 'O'){
        hasWinner = true;
        cp->incrementScore();
    }
    else if(button2->GetLabel() == 'X' && button5->GetLabel() == 'X' && button8->GetLabel() == 'X'){
        hasWinner = true;
        p->incrementScore();
    }else if(button2->GetLabel() == 'O' && button5->GetLabel() == 'O' && button8->GetLabel() == 'O'){
        hasWinner = true;
        cp->incrementScore();
    }
    else if(button3->GetLabel() == 'X' && button6->GetLabel() == 'X' && button9->GetLabel() == 'X'){
        hasWinner = true;
        p->incrementScore();
    }else if(button3->GetLabel() == 'O' && button6->GetLabel() == 'O' && button9->GetLabel() == 'O'){
        hasWinner = true;
        cp->incrementScore();
    }
    else if(button1->GetLabel() == 'X' && button5->GetLabel() == 'X' && button9->GetLabel() == 'X'){
        hasWinner = true;
        p->incrementScore();
    }else if(button1->GetLabel() == 'O' && button5->GetLabel() == 'O' && button9->GetLabel() == 'O') {
        hasWinner = true;
        cp->incrementScore();
    }
    else if(button3->GetLabel() == 'X' && button5->GetLabel() == 'X' && button7->GetLabel() == 'X'){
        hasWinner = true;
        p->incrementScore();
    }else if(button3->GetLabel() == 'O' && button5->GetLabel() == 'O' && button7->GetLabel() == 'O') {
        hasWinner = true;
        cp->incrementScore();
    }

    ss1 << p->getScore();
    ss1 >> pScore;
    ss2 << cp->getScore();
    ss2 >> cScore;

    if(hasWinner){
        titleText->SetLabel(p->getName() + " : " + pScore + " | " + cp->getName() + " : " + cScore);
    }

    return true;
}

void Board::changeMode(wxCommandEvent& event){
    if(cp->getMode() == ModeType::Smart){
        cp->setMode(ModeType::Novice);
        changeModeButton->SetLabel("Mode: Novice");
        std::cout << "Mode changed to novice" << std::endl;
    }

    else if(cp->getMode() == ModeType::Novice){
        cp->setMode(ModeType::Smart);
        changeModeButton->SetLabel("Mode: Smart");
        std::cout << "Mode changed to smart" << std::endl;

    }
}



