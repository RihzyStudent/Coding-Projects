#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void printFormatted(ofstream& outfile,int loop);
int main() {
	ofstream outfile;
	cout << "Please enter a number" << endl;
	int num;
	cin >> num;
	printFormatted(outfile,num);
	return 0;

}
void printFormatted(ofstream& outfile, int loop)
{
	cout << "Writing to file" << '\n';
	outfile.open("output.txt");
	outfile << fixed << showpoint;
	cout << fixed << showpoint;
	for (int i = 1; i < loop; i++)
	{
		outfile << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << i * 3.14159 << '\n';
		cout << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << i * 3.14159 << '\n';
	}
	outfile.close();
	cout << "Done!" << endl;
}