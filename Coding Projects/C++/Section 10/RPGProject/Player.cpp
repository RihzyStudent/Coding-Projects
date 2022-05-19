//
// Created by dbehl on 5/14/2022.
//

#include "Player.h"

Player::Player(string name, race Race, int hitPoints, int magicPoints) {
    this->name=name;
    this->hitPoints=hitPoints;
    this->magicPoints=magicPoints;
    this->Race=Race;
}

string Player::getName() const {
    return name;
}

race Player::getRace() const {
    return Race;
}

string Player::whatRace() const {

    race tempRace = Race;

    if(tempRace == HUMAN)
    {
        return "Human";
    }
    else if (tempRace == ELF)
    {
        return "Elf";
    }
    else if(tempRace == DWARF)
    {
        return "Dwarf";
    }
    else if(tempRace == ORC)
    {
        return "Orc";
    }
    else if (tempRace == TROLL)
    {
        return "Troll";
    }
}

int Player::getHitPoints() const {
    return hitPoints;
}

int Player::getMagicPoints() const {
    return magicPoints;
}

void Player::setName(string name) {
    this->name=name;
}

void Player::setRace(race Race) {
    this->Race=Race;
}

void Player::setHitPoints(int hitPoints) {
    this->hitPoints=hitPoints;
}

void Player::setMagicPoints(int magicPoints) {
    this->magicPoints=magicPoints;
}
