#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"
using namespace std;

class dog : public animal
{
public:
	dog(string name, double weight, string breed);
	string getBreed() const;
	void digHole() const;kjkkkdsf
	string makeNoise() const;
	void chaseCat() const;
	string eat() const;

private:
	string breed;
};

#endif 
sasdasdasd