#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	ifstream infile;
	infile.open("input.txt");

	int inputNum;
	int sum = 0;
	vector <int> nums;
	while (!infile.eof())
	{
		infile >> inputNum;
		nums.push_back(inputNum);
		sum += inputNum;
	}
	for (int i : nums)
	{
		cout << i << endl;
	}

	cout << "\nSum of numbers is: " << sum << '\n';

	infile.close();

	return 0;
}