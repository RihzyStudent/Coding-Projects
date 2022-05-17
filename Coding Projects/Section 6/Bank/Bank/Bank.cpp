#include <iostream>
#include "Bank.h"

bank::bank(string owner, int balance) {
	this->owner = owner;
	if (balance>=0)
	{
		this->balance = balance;
	}
	else
	{
		cout << "Please enter a value greater than 0" << '\n';
	}
}
bank::bank(string owner) {
	this->owner = owner;
	this->balance = 0;
}
void bank::deposit(int amount) {
	if (amount >= 0)
	{
		balance += amount;
		cout << "You deposited " << amount << ". Your new balance is: $" << balance << '\n';
	}
	else
	{
		cout << "Please enter a value greater than 0" << '\n';
	}
}
void bank::withdraw(int amount) {
	
	 if (amount > balance)
	{
		cout << "Withdraw unsuccesful. Amount withdrawn is greater than balance. Your balance is: $"
			<< balance << '\n';
	}
	else if (amount < 1)
	{
		cout << "Please enter a value greater than 0" << '\n';
	}
	else if (amount <= balance)
	{
		balance -= amount;
		cout << "Withdraw succesful! Your new balance is: $" << balance << '\n';
	}
}
string bank::getOwner() const {
	return owner;
}
int bank::getBalance() const {
	return balance;
}