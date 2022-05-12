//#include "smart_chooser.h"
//
//void SmartChooser::setCPUMark(MarkType mark, Board *board) {
//
//    if(rememberFilledSquares[0] && rememberFilledSquares[1] && !rememberFilledSquares[2]){
//
//        b->markSquare(mark, 2);
//    }
//    else if(rememberFilledSquares[0] && rememberFilledSquares[4] && !rememberFilledSquares[8]){
//
//        b->markSquare(mark, 8);
//    }
//    else if(rememberFilledSquares[0] && rememberFilledSquares[3] && !rememberFilledSquares[6]){
//
//        b->markSquare(mark, 6);
//    }
//
//    else if(rememberFilledSquares[1] && rememberFilledSquares[4] && !rememberFilledSquares[7]){
//
//        b->markSquare(mark, 7);
//    }
//    else if(rememberFilledSquares[2] && rememberFilledSquares[1] && !rememberFilledSquares[0]){
//
//        b->markSquare(mark, 0);
//    }
//    else if(rememberFilledSquares[2] && rememberFilledSquares[4] && !rememberFilledSquares[6]){
//
//        b->markSquare(mark, 6);
//    }
//    else if(rememberFilledSquares[2] && rememberFilledSquares[5] && !rememberFilledSquares[8]){
//
//        b->markSquare(mark, 8);
//    }
//    else if(rememberFilledSquares[3] && rememberFilledSquares[4] && !rememberFilledSquares[5]){
//
//        b->markSquare(mark, 5);
//    }
//    else if(rememberFilledSquares[5] && rememberFilledSquares[4] && !rememberFilledSquares[3]){
//
//        b->markSquare(mark, 3);
//    }
//    else if(rememberFilledSquares[6] && rememberFilledSquares[3] && !rememberFilledSquares[0]){
//
//        b->markSquare(mark, 0);
//    }
//    else if(rememberFilledSquares[6] && rememberFilledSquares[4] && !rememberFilledSquares[2]){
//
//        b->markSquare(mark, 2);
//    }
//    else if(rememberFilledSquares[6] && rememberFilledSquares[7] && !rememberFilledSquares[8]){
//
//        b->markSquare(mark, 8);
//    }
//    else if(rememberFilledSquares[7] && rememberFilledSquares[4] && !rememberFilledSquares[1]){
//
//        b->markSquare(mark, 1);
//    }
//    else if(rememberFilledSquares[8] && rememberFilledSquares[4] && !rememberFilledSquares[0]){
//
//        b->markSquare(mark, 0);
//    }
//    else if(rememberFilledSquares[8] && rememberFilledSquares[5] && !rememberFilledSquares[2]){
//
//        b->markSquare(mark, 2);
//    }
//    else if(rememberFilledSquares[8] && rememberFilledSquares[7] && !rememberFilledSquares[6]){
//
//        b->markSquare(mark, 6);
//    }
//    else{
//        int index = (rand() % 8);
//        std::cout << "Index: " << index << std::endl;
//        int count = 0;
//        while(rememberFilledSquares[index]){
//            index = (rand() % 8);
//            std::cout << "Loop Index: " << index << std::endl;
//            if(count == 8){
//                break;
//            }
//            count++;
//        }
//        b->markSquare(mark, index);
//    }
//
//}