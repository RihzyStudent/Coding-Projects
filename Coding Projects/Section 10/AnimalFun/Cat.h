//
// Created by dbehl on 5/14/2022.
//

#ifndef ANIMALFUN_CAT_H
#define ANIMALFUN_CAT_H
#include "Animal.h"

class Cat : public Animal{
    public:
        Cat(string name, double weight);
        void chaseMouse() const;
        string makeNoise() const;
        string eat() const;
};


#endif //ANIMALFUN_CAT_H
