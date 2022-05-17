//
// Created by dbehl on 5/14/2022.
//

#include "Dog.h"

Dog::Dog(string name, double weight, string breed): Animal(name,weight) {
    this->breed=breed;
}

string Dog::getBreed() const {
    return breed;
}

void Dog::digHole() const {
    cout<<"I'm digging a hole!"<<endl;
}

string Dog::makeNoise() const {
    return "woof!";
}

string Dog::eat() const {
    return "Im eating food!";
}
