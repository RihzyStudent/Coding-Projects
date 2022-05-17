//
// Created by dbehl on 5/14/2022.
//

#include "Priest.h"

Priest::Priest(string name, race Race) : Player(name, Race, 100, 200) {
}

string Priest::attack() const {
    return "I will assault you with Holy Wrath!";
}
