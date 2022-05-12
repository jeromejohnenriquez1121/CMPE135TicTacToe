#include "novice_chooser.h"

void NoviceChooser::setCPUMark(MarkType mark, Board *board) {

    printf("Novice Chooser ran\n");

    bool rememberFilledSquares[9];

    for(int i = 0; i < 9; i++){
        rememberFilledSquares[i] = board->isFilled(i);
    }


    if(board->button1->GetLabel() == 'X' && board->button2->GetLabel() == 'X' && !rememberFilledSquares[2]){

        board->markSquare(mark, 2);
    }
    else if(board->button1->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[8]){

        board->markSquare(mark, 8);
    }
    else if(board->button1->GetLabel() == 'X' && board->button4->GetLabel() == 'X' && !rememberFilledSquares[6]){

        board->markSquare(mark, 6);
    }

    else if(board->button2->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[7]){

        board->markSquare(mark, 7);
    }
    else if(board->button3->GetLabel() == 'X' && board->button2->GetLabel() == 'X' && !rememberFilledSquares[0]){

        board->markSquare(mark, 0);
    }
    else if(board->button3->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[6]){

        board->markSquare(mark, 6);
    }
    else if(board->button3->GetLabel() == 'X' && board->button6->GetLabel() == 'X' && !rememberFilledSquares[8]){

        board->markSquare(mark, 8);
    }
    else if(board->button4->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[5]){

        board->markSquare(mark, 5);
    }
    else if(board->button6->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[3]){

        board->markSquare(mark, 3);
    }
    else if(board->button7->GetLabel() == 'X' && board->button4->GetLabel() == 'X'&& !rememberFilledSquares[0]){

        board->markSquare(mark, 0);
    }
    else if(board->button7->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[2]){

        board->markSquare(mark, 2);
    }
    else if(board->button7->GetLabel() == 'X' && board->button8->GetLabel() == 'X' && !rememberFilledSquares[8]){

        board->markSquare(mark, 8);
    }
    else if(board->button8->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[1]){

        board->markSquare(mark, 1);
    }
    else if(board->button9->GetLabel() == 'X' && board->button5->GetLabel() == 'X' && !rememberFilledSquares[0]){

        board->markSquare(mark, 0);
    }
    else if(board->button9->GetLabel() == 'X' && board->button6->GetLabel() == 'X' && !rememberFilledSquares[2]){

        board->markSquare(mark, 2);
    }
    else if(board->button9->GetLabel() == 'X' && board->button8->GetLabel() == 'X' && !rememberFilledSquares[6]){

        board->markSquare(mark, 6);
    }

    else {
        int index = (rand() % 8);
        int count = 0;
        while (rememberFilledSquares[index]) {
            index = (rand() % 8);
            if (count == 8) {
                break;
            }
            count++;
        }
        board->markSquare(mark, index);
    }
}