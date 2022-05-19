//
// Created by dbehl on 5/14/2022.
//
#include "Player.h"
#include "Warrior.h"

Warrior::Warrior(string name, race Race) : Player(name, Race, 200, 0) {
}

string Warrior::attack() const {
    return "I will destroy you with my sword, foul demon!";
}
