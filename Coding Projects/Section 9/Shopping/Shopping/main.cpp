#include "Shopping.h"
#include <iostream>
#include <algorithm>

using namespace std;
void populateVector(vector <string>& list, ifstream& input, string iname);
void populateFile(vector <string> list, ofstream& output, string oname);
int countNum(vector <string> list,string item)
{
	int resultIndex = -1;
	for (int i = 0; i < list.size(); i++)
	{
		if (item == list.at(i))
		{
			resultIndex = i;
			break;
		}
	}
	return resultIndex;
}
int main() {
	ifstream shopping;
	ofstream oshopping;
	vector <string> list;
	populateVector(list, shopping, "shopping.txt");
	populateFile(list, oshopping, "output.txt");
}
void populateVector(vector <string>& list, ifstream& input, string iname)
{
	input.open(iname);
	if (!input)
	{
		cout << "There has been an error opening the file. Check the file name and try again." << '\n';
	}
	int num = 0;
	while (!input.eof())
	{
		string item;
		input >> item;
		list.push_back(item);
		cout << countNum(list, item) << endl;;
	}
	
	input.close();
}
void populateFile(vector <string> list, ofstream& output, string oname)
{
	output.open(oname);
	cout << countNum(list, "coke");
}