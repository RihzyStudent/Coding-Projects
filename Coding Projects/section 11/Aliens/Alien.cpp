//
// Created by dbehl on 5/17/2022.
//

#include "Alien.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Alien::Alien(int weight, int height, char gender) {
    this->weight=weight;
    this->height=height;
    this->gender=gender;
}

int Alien::getWeight() const {
    return weight;
}

int Alien::getHeight() const {
    return height;
}

char Alien::getGender() const {
    return gender;
}

int Alien::getPrestige() const {
    if (gender=='M')
    {
        return height*weight*2;
    }
    else if (gender == 'F')
    {
        return height*weight*3;
    }
}

bool Alien::operator==(const Alien &other) const {
    if(height==other.height && weight==other.weight && gender==other.gender)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool Alien::operator!=(const Alien &other) const {

    if(height!=other.height || weight!=other.weight || gender!=other.gender)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Alien::operator>(const Alien &other) const {
    if(height>other.height || weight>other.weight || gender>other.gender)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Alien::operator>=(const Alien &other) const {
    if(height>=other.height || weight>=other.weight || gender>=other.gender)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Alien::operator<(const Alien &other) const {
    if(height<other.height || weight<other.weight || gender<other.gender)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Alien::operator<=(const Alien &other) const {
    if(height<=other.height || weight<=other.weight || gender<=other.gender)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Alien Alien::operator+(const Alien& other) {
    srand(time(nullptr));
    int newWeight = (weight+other.weight)/2;
    int newHeight=(height+other.height)/2;
    char newGender;
    int prob;
    prob=rand()%101;
    if (prob<31)
    {
        newGender='F';
    }
    else
    {
        newGender='M';
    }
    return Alien(newWeight,newHeight,newGender);
}

void Alien::operator=(const Alien &other) {
    weight=other.weight;
    height=other.height;
    gender=other.gender;
}
