#include <iostream>
#include "Rectangle.h"
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

void populateVector(vector<rectangle*>& rect,ifstream& ifile);
void printRects(vector<rectangle*> rect, ofstream& ofile);
void releaseMem(vector<rectangle*> rect);

int main() {
	vector <rectangle*> rects;
	ifstream irectput;
	ofstream orectput;

	irectput.open("rectangles.txt");
	orectput.open("output.txt");
	if (!irectput)
	{
		cout << "Problem opening file. Please check file name and try again,";
		return 0;
	}
	populateVector(rects, irectput);
	printRects(rects, orectput);
	releaseMem(rects);
	
	irectput.close();
	orectput.close();
	return 0;
}
void populateVector(vector<rectangle*>& rect, ifstream& ifile)
{
	rectangle* temp;
	int length;
	int width;
	while (!ifile.eof())
	{
		ifile >> length;
		ifile >> width;
		temp = new rectangle(length, width);
		rect.push_back(temp);
	}

}
void printRects(vector<rectangle*> rect,ofstream& ofile)
{
	for (rectangle* erect : rect)
	{
		ofile <<"The perimeter is : "<< erect->perimeter() << '\n';
		ofile << "The area is: " << erect->area() << '\n';
	}
}
void releaseMem(vector<rectangle*> rect)
{
	for (rectangle* recPtr : rect)
	{
		delete recPtr;
		recPtr = nullptr;
	}
	rect.clear();
}
