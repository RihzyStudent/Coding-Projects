//
// Created by dbehl on 5/14/2022.
//

#include "Cat.h"

void Cat::chaseMouse() const {
    cout<<"I'm chasing a mouse!"<<'\n';
}

Cat::Cat(string name, double weight) : Animal(name, weight) {}

string Cat::makeNoise() const {
    return "Meow!";
}

string Cat::eat() const {
    return "Tasty Kitty Food!";
}
