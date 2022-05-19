#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream namefile;
	ifstream agefile;
	ofstream outfile;

	string tempName;
	int tempAge;

	cout << "Opening files..." << '\n';
	namefile.open("names.txt");
	agefile.open("ages.txt");
	outfile.open("output.txt");
	if (!agefile || !namefile)
	{
		cout << "Problem reading one of the files, please recheck the names of the files." << endl;
		return 1;
	}
	while (!agefile.eof() && !namefile.eof())
	{
		getline(namefile, tempName);
		agefile >> tempAge;
		outfile << tempName << " " << tempAge << '\n';

	}
	namefile.close();
	agefile.close();
	outfile.close();


	cout << "Done!";
}