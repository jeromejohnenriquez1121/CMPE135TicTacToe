
#ifndef TICTACTOE_CHOOSER_FACTORY_H
#define TICTACTOE_CHOOSER_FACTORY_H

#include "mark_enum.h"
#include "board.h"
#include "computer_player.h"

class ChooserFactory{
public:
    virtual void setCPUMark(MarkType mark, Board *board) = 0;
};


#endif //TICTACTOE_CHOOSER_FACTORY_H
