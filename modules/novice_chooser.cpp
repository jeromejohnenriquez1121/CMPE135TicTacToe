#include "novice_chooser.h"

void NoviceChooser::setCPUMark(MarkType mark, Board *board) {

    // Computer records which squares are filled to pick empty one
    bool rememberFilledSquares[9];
    for(int i = 0; i < 9; i++){
        rememberFilledSquares[i] = board->isFilled(i);
    }

    /**************************************************
     *         Blocking Human Player condition        *
     **************************************************/

    if(board->button1->GetLabel() == 'X' && board->button2->GetLabel() == 'X' && !rememberFilledSquares[2]){
        board->fillSquare(mark, board->button3, 2);
    }
    else if(board->button1->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[8]){
        board->fillSquare(mark, board->button9, 8);
    }
    else if(board->button1->GetLabel() == 'X' && board->button4->GetLabel() == 'X' && !rememberFilledSquares[6]){
        board->fillSquare(mark, board->button7, 6);
    }
    else if(board->button2->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[7]){
        board->fillSquare(mark, board->button8, 7);
    }
    else if(board->button3->GetLabel() == 'X' && board->button2->GetLabel() == 'X' && !rememberFilledSquares[0]){
        board->fillSquare(mark, board->button1, 0);
    }
    else if(board->button3->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[6]){
        board->fillSquare(mark, board->button7, 6);
    }
    else if(board->button3->GetLabel() == 'X' && board->button6->GetLabel() == 'X' && !rememberFilledSquares[8]){
        board->fillSquare(mark, board->button9,8);
    }
    else if(board->button4->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[5]){
        board->fillSquare(mark, board->button6, 5);
    }
    else if(board->button6->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[3]){
        board->fillSquare(mark, board->button4, 3);
    }
    else if(board->button7->GetLabel() == 'X' && board->button4->GetLabel() == 'X'&& !rememberFilledSquares[0]){
        board->fillSquare(mark, board->button1, 0);
    }
    else if(board->button7->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[2]){
        board->fillSquare(mark, board->button3, 2);
    }
    else if(board->button7->GetLabel() == 'X' && board->button8->GetLabel() == 'X' && !rememberFilledSquares[8]){
        board->fillSquare(mark, board->button9, 8);
    }
    else if(board->button8->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[1]){
        board->fillSquare(mark, board->button2, 1);
    }
    else if(board->button9->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[0]){
        board->fillSquare(mark, board->button1, 0);
    }
    else if(board->button9->GetLabel() == 'X' && board->button6->GetLabel() == 'X' && !rememberFilledSquares[2]){
        board->fillSquare(mark, board->button3, 2);
    }
    else if(board->button9->GetLabel() == 'X' && board->button8->GetLabel() == 'X' && !rememberFilledSquares[6]){
        board->fillSquare(mark, board->button7, 6);
    }

    // Chooses random empty scare if no win condition available or defense necessary
    else {
        int index = (rand() % 8);
        int count = 0;

        // If there is a tie, this breaks an infinite loop trying to find a vacant square
        while (rememberFilledSquares[index]) {
            index = (rand() % 8);
            if (count == 8) {
                break;
            }
            count++;
        }

        if(index == 0){
            board->fillSquare(mark, board->button1, index);
        }
        else if(index == 1){
            board->fillSquare(mark, board->button2, index);
        }
        else if(index == 2){
            board->fillSquare(mark, board->button3, index);
        }
        else if(index == 3){
            board->fillSquare(mark, board->button4, index);
        }
        else if(index == 4){
            board->fillSquare(mark, board->button5, index);
        }
        else if(index == 5){
            board->fillSquare(mark, board->button6, index);
        }
        else if(index == 6){
            board->fillSquare(mark, board->button7, index);
        }
        else if(index == 7){
            board->fillSquare(mark, board->button8, index);
        }
        else if(index == 8){
            board->fillSquare(mark, board->button9, index);
        }

    }
}
