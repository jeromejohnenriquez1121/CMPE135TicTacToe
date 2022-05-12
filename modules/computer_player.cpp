#include "computer_player.h"

ComputerPlayer::ComputerPlayer() {
    name = "CPU";
    mark = MarkType::O;
    score = 0;
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

ModeType ComputerPlayer::getMode(){
    return currentMode;
}

