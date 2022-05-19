#include <iostream>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

int main()
{	
	const int arr_size = 3;
	Rectangle* rectPtrs[arr_size];

	rectPtrs[0] = new Rectangle(4.0, 3.0);
	rectPtrs[1] = new Rectangle(5.0, 6.0);
	rectPtrs[2] = new Rectangle(44.0, 32.0);

	for (int i = 0; i < arr_size; i++)
	{
		cout << rectPtrs[i]->area() << endl;
		cout << rectPtrs[i]->perimeter() << endl;
		delete rectPtrs[i];
		cout << endl;

	}

	return 0;
}