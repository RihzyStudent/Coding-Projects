//
// Created by dbehl on 5/14/2022.
//

#include "Mage.h"

Mage::Mage(string name, race Race) : Player(name, Race, 150,150) {
}

string Mage::attack() const {
    return "I will crush you with the power of my arcane missiles!";
}
