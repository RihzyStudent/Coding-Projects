#include "Dog.h"
#include "Animal.h"
using namespace std;

dog::dog(string name, double weight, string breed) : animal(name,weight)
{
	this->breed = breed;
}
string dog::getBreed() const
{
	return breed;
}
void dog::digHole() const
{
	cout << "I'm digging a hole!" << endl;
}
string dog::makeNoise() const
{
	return "woof!";
}
void dog::chaseCat() const
{
	cout << "Here kitty kitty!" << endl;
}
string dog::eat() const
{
	return "I love dog food!";
}