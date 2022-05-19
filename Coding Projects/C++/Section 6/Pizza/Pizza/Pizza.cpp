#include "Pizza.h"
#include <iostream>
#include <string>

Pizza::Pizza(string name, int cost, int diameter) {
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
}
void Pizza::addTopping(string topping) {
	toppings.push_back(topping);
}
int Pizza::getCost() const {
	return cost;
}
void Pizza::printPizza() const {
	cout << "Name: " << name << '\n';
	cout << "Diameter: " << diameter << '\n';
	cout << "Cost: $" << cost << '\n';
	cout << "Toppings: " << '\n';
	printToppings();
	cout << '\n';
}
void Pizza::printToppings() const {
	cout << "Toppings: ";
	for (string topping:toppings)
	{
		cout << '\n' << '\t'<< topping;
	}
	cout << '\n'<<'\n';
}