#include "computer_player.h"
#include <stdlib.h>

ComputerPlayer::ComputerPlayer() {
    name = "CPU";
    mark = MarkType::O;
    score = 0;
    std::cout << "CPU score: " << score << std::endl;
    chooser = new SmartChooser();
}

void ComputerPlayer::setMark(MarkType mark, Board *board) {
    chooser->setCPUMark(mark, board);
}

void ComputerPlayer::setMode(ModeType mode){
    if(mode == ModeType::Novice){
        currentMode = ModeType::Novice;
        chooser = new NoviceChooser();
    }
    else if(mode == ModeType::Smart){
        currentMode = ModeType::Smart;
        chooser = new SmartChooser();
    }
}

std::string ComputerPlayer::getMode(){
    if(currentMode == ModeType::Novice){
        return "Mode: Novice";
    }
    else if(currentMode == ModeType::Smart){
        return "Mode: Smart";
    }

    return "";
}

