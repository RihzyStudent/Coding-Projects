#include "Dog.h"
using namespace std;

dog::dog(string name, string breed) {
	this->name = name;
	this->breed = breed;
}
string dog::getName() const
{
	return name;
}
string dog::getBreed() const {
	return breed;
}