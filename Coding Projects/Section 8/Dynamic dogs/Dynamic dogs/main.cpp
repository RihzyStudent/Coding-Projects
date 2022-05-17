#include <iostream>
#include "Dog.h"
using namespace std;

int main() {
	int* myPtr = new int(123);
	delete myPtr;
	cout << *myPtr;
}