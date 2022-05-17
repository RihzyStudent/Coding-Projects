#include <iostream>
#include "house.h"
#include <string>
using namespace std;



int main() {
    House myHouse;
    House yourHouse;
    House theirHouse(10, 15, "Black");
    theirHouse.print();
    myHouse.setNumStories(2);
    myHouse.setWindows(4);
    myHouse.setColor("Red");

    yourHouse.setWindows(10);
    yourHouse.setNumStories(4);
    yourHouse.setColor("Blue");

    myHouse.print();
    yourHouse.print();

    return 0;
}

