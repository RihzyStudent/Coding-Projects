#include "Animal.h"

animal::animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}

string animal::getName() const
{
	return name;
}

double animal::getWeight() const
{
	return weight;
}

void animal::setName(string name)
{
	this->name = name;
}

void animal::setWeight(double weight)
{
	this->weight = weight;
}