#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream inum;
	ofstream onum;

	inum.open("nums.txt");
	onum.open("double.txt");
	cout << "Opening the file..." << '\n';
	if (!inum)
	{
		cout << "Invalid file names. Please try again." << '\n';
		return 1;
	}
	while (!inum.eof())
	{
		int temp;
		inum >> temp;
		onum << (2 * temp)<<'\n';
	}
	inum.close();
	onum.close();
	cout << "Done!";
	return 0;
}