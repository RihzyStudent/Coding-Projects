#include <iostream>
#include "Circle.h"
using namespace std;

void printCircleData(Circle** circlearray, int HowMany);

int main()
{
	int ARR_SIZE;
	cout << "How many circles?" << '\n';
	cin >> ARR_SIZE;
	Circle** circleArray = new Circle* [ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << "Please enter the length of circle " << i + 1 << '\n';
		int* temp = new int(123);
		cin >> *temp;
		circleArray[i]= new Circle(*temp);
		delete temp;
	}
	
	printCircleData(circleArray, ARR_SIZE);
	return 0;
}
void printCircleData(Circle** circlearray, int HowMany)
{
	for (int i = 0; i < HowMany; i++)
	{
		cout << "The area of circle "<<i+1<<" is:\n\t"<<
			circlearray[i]->area() << '\n';
		cout << "The circumference of circle " << i+1 << " is:\n\t" << circlearray[i]->circumference() << '\n';
		delete circlearray[i];
	}
}