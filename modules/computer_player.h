#ifndef TICTACTOE_COMPUTER_PLAYER_H
#define TICTACTOE_COMPUTER_PLAYER_H

#include <iostream>
#include "board.h"
#include "player.h"
#include "chooser_factory.h"
#include "novice_chooser.h"
#include "smart_chooser.h"
#include "filled_squares.h"
#include "mode_enum.h"

class ComputerPlayer : public Player{
public:
    ComputerPlayer();

    // Overriden methods:
    void setMark(MarkType mark, Board *board);

    void setMode(ModeType mode);
    ModeType getMode();

private:
    ChooserFactory *chooser;
    ModeType currentMode;

};

#endif //TICTACTOE_COMPUTER_PLAYER_H
