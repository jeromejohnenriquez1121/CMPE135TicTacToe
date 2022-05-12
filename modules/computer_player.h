#ifndef TICTACTOE_COMPUTER_PLAYER_H
#define TICTACTOE_COMPUTER_PLAYER_H

#include <iostream>
#include "board.h"
#include "player.h"
#include "chooser_factory.h"
#include "filled_squares.h"

class ComputerPlayer : public Player{
public:
    ComputerPlayer();

    // Overriden methods:
    void setMark(MarkType mark, Board *board);

    void rememberFilledSquare(int index);
    void voidFilledSquares();


private:
    bool rememberFilledSquares[9];

};

#endif //TICTACTOE_COMPUTER_PLAYER_H
