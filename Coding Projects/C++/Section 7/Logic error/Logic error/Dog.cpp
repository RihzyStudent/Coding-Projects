#include "Dog.h"
#include <stdexcept>

Dog::Dog(string breed) {
	if (breed != "poodle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Poodle? Thats not a real dog breed >:C");
	}
}
string Dog::getBreed() const noexcept {
	return breed;
}