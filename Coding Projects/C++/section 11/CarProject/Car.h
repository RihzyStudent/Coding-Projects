#ifndef CARPROJECT_CAR_H
#define CARPROJECT_CAR_H
#include <string>
using namespace std;

class Car {
public:
    Car(string color,int numDoors);
    string getColor() const;
    int getNumDoors() const;
private:
    string color;
    int numDoors;
};


#endif //CARPROJECT_CAR_H
