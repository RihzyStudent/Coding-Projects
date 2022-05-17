#include <iostream>
#include "Circle.h"
using namespace std;

void printCircleData(Circle** circlearray, int numCircles);

int main()
{
	cout << "How many circles would you like?" << endl;
	int numCircles;
	cin >> numCircles;
	Circle** circleArray = new Circle* [numCircles];
	for (int i = 0; i < numCircles; i++)
	{
		cout << "Enter the radius of circle " << i+1 << endl;
		int temp;
		cin >> temp;
		circleArray[i]= new Circle(temp);
	}
	printCircleData(circleArray, numCircles);
	delete[] circleArray;
	return 0;
}

void printCircleData(Circle** circlearray,int numCircles)
{
	for (int i = 0; i < numCircles; i++)
	{
		cout << "Circle with radius " << circlearray[i]->getRadius() << endl;
		cout << "\tCircumference: " << circlearray[i]->circumference() << endl;
		cout << "\tArea: " << circlearray[i]->area() << endl;
		cout << endl;
		delete circlearray[i];
	}
}