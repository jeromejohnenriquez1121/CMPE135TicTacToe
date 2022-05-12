#ifndef TICTACTOE_SMART_CHOOSER_H
#define TICTACTOE_SMART_CHOOSER_H

#include "chooser_factory.h"
#include "board.h"


class SmartChooser : public ChooserFactory{
    void setCPUMark(MarkType mark, Board *board);
};

#endif //TICTACTOE_SMART_CHOOSER_H
