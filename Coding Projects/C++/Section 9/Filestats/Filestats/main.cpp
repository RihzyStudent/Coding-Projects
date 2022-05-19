#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream istats;
	ofstream ostats;
	int inputnum;
	int sum=0;
	int count=0;
	int min=0;
	int max=0;
	double avg=0.00;

	istats.open("stats.txt");
	ostats.open("ostats.txt");
	if (!istats)
	{
		cout << "Problem opening file, please check file name.";
		return 1;
	}
	while (!istats.eof())
	{
		istats >> inputnum;
			if (inputnum >= 0 && inputnum <= 100) {
				if (count == 0)
				{
					min = inputnum;
					max = inputnum;
				}
				if (min < inputnum)
				{
					min = inputnum;
				}
				if (max > inputnum)
				{
					max = inputnum;
				}
				sum += inputnum;
				count++;
		}
	}
	avg = sum / count;
	cout << "The minimum number is: " << min << '\n';
	cout << "The maximum number is: " << max << '\n';
	cout << "The average is: " << avg << '\n';
	return 0;
}