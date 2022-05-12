#ifndef TICTACTOE_SMART_CHOOSER_H
#define TICTACTOE_SMART_CHOOSER_H

#include "chooser_factory.h"
#include "board.h"

class SmartChooser : public ChooserFactory{
    void setCPUMark(MarkType mark, Board *board){

        bool rememberFilledSquares[9];

        for(int i = 0; i < 9; i++){
            rememberFilledSquares[i] = board->isFilled(i);
        }


        std::cout << "Filled Squares: " << std::endl;
        for(int i = 0; i < 9; i++){
            std::cout << rememberFilledSquares[i] << ' ';
        }
        std::cout << "Filled Squares" << std::endl;


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

        else if(board->button1->GetLabel() == 'O' && board->button3->GetLabel() == 'O' && !rememberFilledSquares[6]){

            board->markSquare(mark, 1);
        }

        else if(board->button1->GetLabel() == 'O' && board->button9->GetLabel() == 'O' && !rememberFilledSquares[6]){

            board->markSquare(mark, 4);
        }

        else if(board->button4->GetLabel() == 'O' && board->button5->GetLabel() == 'O' && !rememberFilledSquares[5]){

            board->markSquare(mark, 5);
        }

        else{
            int index = (rand() % 8);
            std::cout << "Index: " << index << std::endl;
            int count = 0;
            while(rememberFilledSquares[index]){
                index = (rand() % 8);
                std::cout << "Loop Index: " << index << std::endl;
                if(count == 8){
                    break;
                }
                count++;
            }
            board->markSquare(mark, index);
        }

    }
};

#endif //TICTACTOE_SMART_CHOOSER_H
