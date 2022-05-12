
#ifndef TICTACTOE_NOVICE_CHOOSER_H
#define TICTACTOE_NOVICE_CHOOSER_H

#include "chooser_factory.h"

class NoviceChooser : public ChooserFactory{
    void setCPUMark(MarkType mark, Board *board);
};

#endif //TICTACTOE_NOVICE_CHOOSER_H
