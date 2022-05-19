#include <iostream>
#include <stdexcept>
using namespace std;

void processPositive(int num);
void doSomething(int input);

int main() {
	int input;

	try {
		cout << "Enter a number to process!" << '\n';
		cin >> input;
		doSomething(input);
		cout << "Yay! main was able to completely process the num!" << '\n';
	}
	catch (const invalid_argument& err) {
		cout << "main says there is an error!" << endl;
		cout<<err.what() << endl;
		main();
	}
	catch (const out_of_range& err) {
		cout << "main says the number is too big!" << endl;
		cout << err.what() << endl;
		main();
	}
}
void processPositive(int num) {

	if (num>100)
	{
		throw out_of_range("processPositive says this number is too big!");
	}
	else if (num >= 0)
	{
	cout << "Good job! You passed in a positive number to processPositive" << '\n';
	}
	else {
		throw invalid_argument("Negative number passed in!");
	}
}
void doSomething(int input) {
	try
	{
		processPositive(input);
		cout << "Yay! doSomething could process that num!" << '\n';
	}
	catch(const invalid_argument & err) {
		cout << "doSomething says there is a problem!" << '\n';
		throw;
	}
	catch (const out_of_range& err)
	{
		cout << "doSomething says this number is too big!" << '\n';
		throw;
	}
}