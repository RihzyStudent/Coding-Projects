//
// Created by dbehl on 5/14/2022.
//
#include "Player.h"
#ifndef RPGPROJECT_WARRIOR_H
#define RPGPROJECT_WARRIOR_H


class Warrior : public Player
{
    public:
        Warrior(string name, race Race);
        string attack() const;
    private:

};


#endif //RPGPROJECT_WARRIOR_H
