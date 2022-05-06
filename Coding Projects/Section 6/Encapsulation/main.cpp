#include <iostream>
#include "house.h"
#include <string>
using namespace std;

void printHouseData(const House& house);

int main(){
    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setWindows(4);
    myHouse.setColor("Red");

    yourHouse.setWindows(10);
    yourHouse.setNumStories(4);
    yourHouse.setColor("Blue");

    printHouseData(myHouse);
    printHouseData(yourHouse);

}

void printHouseData(const House& house){
    cout<<"This house has "<<house.getNumStories()<<" and "<<house.getNumWindows()
    <<" windows and its color is "<<house.getColor()<<endl;
    
}