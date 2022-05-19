//
// Created by dbehl on 5/14/2022.
//

#ifndef RPGPROJECT_MAGE_H
#define RPGPROJECT_MAGE_H
#include "Player.h"

class Mage : public Player{
public:
    Mage(string name, race Race);
    string attack() const;
};


#endif //RPGPROJECT_MAGE_H
