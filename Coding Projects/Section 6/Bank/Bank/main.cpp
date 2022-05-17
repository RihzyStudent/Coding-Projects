#include <iostream>
#include "Bank.h"

int main() {
	bank p1("Jack Dorsey");
	bank p2("Elon Musk", -1);

	cout << p2.getOwner() << "'s account contains: $" << p2.getBalance() << '\n';
	cout << p1.getOwner() << "'s account contains: $" << p1.getBalance() << '\n';
	p1.deposit(12);
	p2.withdraw(200);

	cout << p2.getOwner() << "'s account contains: $" << p2.getBalance() << '\n';
	cout << p1.getOwner() << "'s account contains: $" << p1.getBalance() << '\n';
}