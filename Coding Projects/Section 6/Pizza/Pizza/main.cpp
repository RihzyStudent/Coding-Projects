#include "Pizza.h"
#include <iostream>
using namespace std;

int main() {
	Pizza cheese("Cheese Pizza", 5, 8);
	Pizza pepperoni("Pepperoni Pizza", 7, 8);
	Pizza special("The Special Pizza", 12, 10);

	pepperoni.addTopping("Pepperoni");
	special.addTopping("Pepperoni");
	special.addTopping("Black Olives");
	special.addTopping("Onion");
	special.addTopping("Mushrooms");

	cheese.printPizza();
	pepperoni.printPizza();
	special.printPizza();

}

