#include "house.h"
#include <iostream>

House::House() {
    this->numStories = 1;
    this-> numWindows = 1;
    this->color = "white";
}
House::House(int stories, int windows, string colors){
    this->numWindows = windows;
    this->numStories = stories;
    this->color = colors;
}
House::~House() {
    cout << "The house with " << numWindows << " windows and " << numStories << " stories whose color is " << color << " is being destroyed!" << endl;
}
void House::setNumStories(int numStories) {
    this->numStories = numStories;
}
void House::setWindows(int numWindows) {
    this->numWindows = numWindows;
}
void House::setColor(string color) {
    this->color = color;
}

int House::getNumStories() const {
    return numStories;
}
int House::getNumWindows() const {
    return numWindows;
}
string House::getColor() const {
    return color;
}
void House::print() const{
    cout << "This house has " << numStories<< " and " << numWindows
        << " windows and its color is " << color << endl;
}