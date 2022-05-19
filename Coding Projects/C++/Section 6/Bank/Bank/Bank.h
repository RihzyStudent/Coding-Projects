#ifndef BANK_H
#define BANK_H
using namespace std;

class bank {
	public:
		bank(string owner, int balance);
		bank(string owner);
		void deposit(int amount);
		void withdraw(int amount);
		string getOwner() const;
		int getBalance() const;
	private:
		string owner;
		int balance;

};

#endif
