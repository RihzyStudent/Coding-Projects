//
// Created by dbehl on 5/14/2022.
//

#ifndef RPGPROJECT_PRIEST_H
#define RPGPROJECT_PRIEST_H
#include "Player.h"


class Priest : public Player{
    public:
    Priest(string name, race Race);
    string attack() const;
    private:

};


#endif //RPGPROJECT_PRIEST_H
