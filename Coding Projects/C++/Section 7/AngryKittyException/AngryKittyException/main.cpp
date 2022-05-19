#include <iostream>
#include "AngryKittyException.h"
using namespace std;
void feedKitty(int numTreats);
int main() {
	int numTreats;

	cout << "How many treats do you awnt to feed kitty?" << endl;
	cin >> numTreats;

	try
	{
		feedKitty(numTreats);
	}
	catch (const angrykitty & err)
	{
		cout << err.what() << endl;
	}
}
void feedKitty(int numTreats)
{
	if (numTreats<3)
	{
		throw angrykitty();
	}
	else if (numTreats < 6) {
		throw angrykitty("Im still not satisfied.");
	}
	cout << "Kitty is happy with " << numTreats << " treats." << '\n';
}