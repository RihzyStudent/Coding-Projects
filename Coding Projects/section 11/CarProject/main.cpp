#include <iostream>
#include <memory>
#include "Car.h"
using namespace std;

int main() {
    auto vroom = make_unique<Car>("red",4);
    cout<<"The car's color is: "<<vroom->getColor()<<'\n';
    cout<<"The car has "<<vroom->getNumDoors()<<" doors."<<endl;
    return 0;
}
