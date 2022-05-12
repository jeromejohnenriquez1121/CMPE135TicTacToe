//
// Created by Jerome Enriquez on 5/10/22.
//

#include "player.h"

Player::Player(){
    name = "";
    this->mark = MarkType::X;
    score = 0;
}

Player::Player(std::string name, MarkType mark){
    this->name = name;
    this->mark = mark;
    score = 0;
}

void Player::setMark(MarkType mark) {
    this->mark = mark;
}

void Player::incrementScore(){
    score += 1;
}

void Player::setName(std::string name){
    this->name = name;
}

std::string Player::getName(){
    return name;
}
MarkType Player::getMark(){
    return mark;
}

int Player::getScore(){
    return score;
}

