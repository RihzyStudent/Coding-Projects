#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include <string>
using namespace std;

class Pizza {
	public:
		Pizza(string name, int cost, int diameter);
		void addTopping(string topping);
		int getCost() const;
		void printPizza() const;
		void printToppings() const;

	private:
		string name;
		int cost;
		int diameter;
		vector <string> toppings{"cheese"};
};

#endif