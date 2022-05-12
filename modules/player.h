//
// Created by Jerome Enriquez on 5/10/22.
//

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <string.h>
#include "mark_enum.h"

class Player{
public:
    // Constructors:
    Player();
    Player(std::string name, MarkType mark);

    // Set methods:
    virtual void setMark(MarkType mark);
    virtual void setName(std::string name);
    virtual void incrementScore();

    // Get methods:
    std::string getName();
    MarkType getMark();
    int getScore();

protected:
    std::string name;
    MarkType mark;
    int score;
};



#endif /* PLAYER_H_ */

