//
// Created by dbehl on 5/16/2022.
//

#include "Car.h"

Car::Car(string color, int numDoors) {
    this->color=color;
    this->numDoors=numDoors;
}

string Car::getColor() const {
    return color;
}

int Car::getNumDoors() const {
    return numDoors;
}
