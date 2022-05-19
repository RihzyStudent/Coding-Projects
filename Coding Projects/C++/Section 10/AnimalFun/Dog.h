#ifndef ANIMALFUN_DOG_H
#define ANIMALFUN_DOG_H
#include "Animal.h"

class Dog : public Animal{
    public:
        Dog(string name, double weight, string breed);
        string getBreed() const;
        void digHole() const;
        string makeNoise() const;
        string eat() const;
    private:
    string breed;
};


#endif //ANIMALFUN_DOG_H
