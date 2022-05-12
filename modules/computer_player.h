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

    // Override parent methods:
    void setMark(MarkType mark, Board *board);

    // Self setters:
    void setMode(ModeType mode);

    // Self getters:
    ModeType getMode();

private:
    ChooserFactory *chooser;
    ModeType currentMode;
};

#endif //TICTACTOE_COMPUTER_PLAYER_H
