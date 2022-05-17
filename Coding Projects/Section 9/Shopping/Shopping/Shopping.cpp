#include "Shopping.h"
#include <iostream>
#include <algorithm>

void shopping::populateVector(vector <string> list,ifstream& input,string iname)
{
	input.open(iname);
	if (!input)
	{
		cout << "There has been an error opening the file. Check the file name and try again." << '\n';
	}

	while (!input.eof())
	{
		string item;
		input >> item;
		list.push_back(item);
	}
	input.close();
}
void shopping::populateFile(vector <string> list,ofstream& output, string oname)
{
	vector <string>::iterator numlist;
	output.open(oname);
	numlist = unique(list.begin(), list.end());
	for (int i = 0; i < list.size(); i++)
	{
		cout <<numlist[i];
	}
}